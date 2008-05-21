import sys, os

# show which python SIP will use
print '*'* 80
print 'python is "%r"' % sys.executable
print '*'*80

if not 'build' in sys.argv:
    # usage
    print 'use "python setup.py build" to build SIP'
else:
    # TODO: submit a distutils.sysconfig patch to python.org
    import distutils.sysconfig as s
    s.python_build = True


    # configures SIP to build locally
    import configure
    configure.main('configure.py -b sipgen -d siplib -e siplib -v siplib'.split())

    # do a complete clean build
    os.system('nmake clean')
    if not os.system('nmake'):
        print '*'*80, '\nsuccess\n', '*'*80
