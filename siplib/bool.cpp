// This contains all the C++ code that is needed by the sip module.
//
// Copyright (c) 2008 Riverbank Computing Limited <info@riverbankcomputing.com>
// 
// This file is part of SIP.
// 
// This copy of SIP is licensed for use under the terms of the SIP License
// Agreement.  See the file LICENSE for more details.
// 
// SIP is supplied WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.


// Set a C++ bool for the main C implementation of the module.
extern "C" void sipSetBool(void *ptr, int val)
{
	*reinterpret_cast<bool *>(ptr) = val;
}
