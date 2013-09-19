/**
 * Filename: IEvtDataReleaser.h
 *
 * Copyright (c) 2010 Nivira, Inc
 * All rights reserved
 *
 * Description: the data releaser class.
 *
 * Original Author: Vivek Basappa Reddy
 * Created Date: September 23, 2013
 *
 * $Id$
 *
 */
#ifndef IEVTDATARELEASER_H
#define IEVTDATARELEASER_H

/**
 * @file IEvtDataReleaser.h
 *
 * Required includes:
 *
 * None
 *
 */

class EvtMsg;

/**
 * @brief
 * Interface defining a class used to release orphaned data for undeliverable
 * events.
 */
class IEvtDataReleaser {
public:
    virtaul ~IEvtDataReleaser(void) {}
    virtual void rlsEvtData(EvtMsg *msg) = 0;
};

#endif // IEVTDATARELEASER_H

