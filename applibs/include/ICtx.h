/**
 * Filename: ICtx.h
 *
 * Copyright (c) 2013 Nivira, Inc.
 * All rights reserved.
 *
 * Description: Interface for a context.
 *
 * Original Author: Vivek Basappa Reddy
 * Created Date: September 18, 2013
 *
 * $Id$
 *
 */

#ifndef ICTX_H
#define ICTX_H

class Session;

class ICtx {
public:
    virtaul ~ICtx(void) {}
    virtual const char *name(void) = 0;
}

#endif //ICTX_H
