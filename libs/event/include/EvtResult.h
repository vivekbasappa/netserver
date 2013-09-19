/**
 * Filename: EvtResult.h
 *
 * Copyright (c) 2010 Nivira, Inc.
 * All rights reserved.
 *
 * Description: Results from processing an event.
 *
 * Original Author: Vivek Basappa Reddy
 * Created Date: September 23, 2013
 *
 * $Id$
 */
#ifndef EVTRESULT_H
#define EVTRESULT_H

/**
 * @breif
 * Possible results from processing an event.
 */
enum EvtResult {
    EVTRES_ERROR = -1,
    EVTRES_OKEY,
    EVTRES_CONTINUE
#if 0
    EVTREST_NEED_READ,
    EVTRES_NEED_WRITE
#endif
};

#endif // EVTRESULT_H

