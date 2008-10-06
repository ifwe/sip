'''
sip benchmark
'''

from __future__ import with_statement
import sys
import os.path
from subprocess import Popen
from random import shuffle, seed
seed('sip benchmark')

TEST_DIR = 'benchmark'
PYTHON_EXE = r'c:\dev\digsby\build\msw\dpython\python.exe'

BENCHMARK_LOOPS = 20000

class_hdr_templ = '''\
class %(name)s
{
%(class_code)s
public:
    %(name)s();
    ~%(name)s();

%(methods)s
};
'''

class_impl_templ = '''\
%(includes)s

%(name)s::%(name)s() {%(constructor_body)s}
%(name)s::~%(name)s() {%(destructor_body)s}

%(methods)s
'''

def gen_inc(name, methods, class_code = ''):
    return class_hdr_templ % locals()

def gen_src(name, methods, constructor_body = '', destructor_body = ''):
    includes = '#include "%s.h"' % name

    return class_impl_templ % locals()

class_name = 'Foo'
num_methods = 50

def write_files():
    method_nums = list(xrange(num_methods))
    shuffle(method_nums)

    methods = ['int GetFoo%d() const;' % n for n in method_nums]
    class_code = '%TypeHeaderCode\n#include "Foo.h"\n%End\n'
    sip_text = gen_inc(class_name, '\n'.join(('    '+ s) for s in methods), class_code = class_code)
    writefile('%s.sip' % class_name, ('%%Module %s\n%%SIPOptions (AutoProperties)\n\n' % class_name) + sip_text)

    include_text = gen_inc(class_name, '\n'.join(('    '+ s) for s in methods))
    writefile('%s.h'   % class_name, include_text)

    methods = ['int %s::GetFoo%d() const { return %d; }' % (class_name, n, n) for n in method_nums]
    src_text = gen_src(class_name, '\n'.join(methods))

    writefile('%s.cpp' % class_name, src_text)

def run_sip_win32():
    py_dir     = r'c:\dev\digsby\build\msw\python'
    py_include = py_dir + r'\Include'
    py_libdir  = py_dir + r'\PCBuild'

    gen_dir = '.'
    run(r'..\sipgen\sip.exe -c %s %s.sip' % (gen_dir, class_name))
    run(r'cl.exe Foo.cpp sipFoocmodule.cpp sipFooFoo.cpp '
        r'/I ..\siplib /I %s '
        r'/GF ' # string pooling
        r'/link '
        r'/LIBPATH:%s '
        r'/DLL ' # no need for main
        % (py_include, py_libdir)
        )

    pyd_name = '%s.pyd' % class_name
    if os.path.exists(pyd_name):
        os.remove(pyd_name)
    run(r'cmd /c rename %s.exe %s' % (class_name, pyd_name))

def benchmark():
    '''
    executes benchmark code via PYTHON_EXE
    '''

    benchmark_code = \
    '''
from %(class_name)s import %(class_name)s
from time import clock
from random import shuffle

def main():
    print 'Running benchmark...'
    print '  Loop N is %(BENCHMARK_LOOPS)s'

    now = clock()
    obj = %(class_name)s()

    for repeat in xrange(%(BENCHMARK_LOOPS)s):
        for x in xrange(%(num_methods)s):
            getattr(obj, 'GetFoo%%d' %% x)()

    time_diff = clock() - now
    print time_diff
    print '%%s method lookups/sec' %% ((%(BENCHMARK_LOOPS)d * %(num_methods)d) / time_diff)

if __name__ == '__main__':
    main()
''' % globals()

    writefile('bench.py', benchmark_code)
    return python('bench.py')

def run(cmd):
    print cmd
    proc = Popen(cmd)
    proc.communicate()
    if proc.returncode:
        sys.exit(proc.returncode)

def python(cmd):
    return run('%s -OO %s' % (PYTHON_EXE, cmd))

def do_test():
    write_files()
    globals()['run_sip_%s' % sys.platform]()
    benchmark()

def in_testdir(func):
    if not os.path.isdir(TEST_DIR):
        os.mkdir(TEST_DIR)

    cwd = os.getcwd()
    os.chdir(TEST_DIR)
    try:
        func()
    finally:
        os.chdir(cwd)

def cd(directory):
    cwd = o

def writefile(name, content):
    with open(name, 'w') as f:
        f.write(content)

def main():
    in_testdir(do_test)

if __name__ == '__main__':
    main()

