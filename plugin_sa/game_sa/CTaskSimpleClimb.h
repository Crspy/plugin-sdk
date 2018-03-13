/*
    Plugin-SDK (Grand Theft Auto San Andreas) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"
#include "CTaskSimple.h"

class PLUGIN_API CTaskSimpleClimb : public CTaskSimple {
protected:
    CTaskSimpleClimb(plugin::dummy_func_t a) : CTaskSimple(a) {}
public:
    
};

//VALIDATE_SIZE(CTaskSimpleClimb, 0x);