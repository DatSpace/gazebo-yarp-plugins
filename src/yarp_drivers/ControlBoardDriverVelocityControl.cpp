/*
 * Copyright (C) 2007-2013 Istituto Italiano di Tecnologia ADVR & iCub Facility
 * Authors: Enrico Mingo, Alessio Rocchi, Mirko Ferrati, Silvio Traversaro and Alessandro Settimi
 * CopyPolicy: Released under the terms of the LGPLv2.1 or later, see LGPL.TXT
 */


#include "gazebo_yarp_plugins/ControlBoardDriver.h"


using namespace yarp::dev;


bool GazeboYarpControlBoardDriver::setVelocityMode() //NOT TESTED
{
    for(unsigned int j=0; j<numberOfJoints; j++)
    {
        this->setVelocityMode(j);
    }
    return true;
}

bool GazeboYarpControlBoardDriver::velocityMove(int j, double sp) //NOT TESTED
{
    if (j >= 0 && j < (int)numberOfJoints)
    {
        vel[j] = sp;
        return true;
    }
    return false;
}

bool GazeboYarpControlBoardDriver::velocityMove(const double *sp) //NOT TESTED
{
    for (unsigned int i=0; i<numberOfJoints; ++i) {
        vel[i] = sp[i];
    }
    return true;
}
