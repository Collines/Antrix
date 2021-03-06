/****************************************************************************
 *
 * General Object Type File
 * Copyright (c) 2007 Antrix Team
 *
 * This file may be distributed under the terms of the Q Public License
 * as defined by Trolltech ASA of Norway and appearing in the file
 * COPYING included in the packaging of this file.
 *
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 *
 */

#include "StdAfx.h"

initialiseSingleton( EventMgr );

TimedEvent * TimedEvent::Allocate(void* object, CallbackBase* callback, uint32 flags, time_t time, uint32 repeat)
{
	return new TimedEvent(object, callback, flags, time, repeat);
}
