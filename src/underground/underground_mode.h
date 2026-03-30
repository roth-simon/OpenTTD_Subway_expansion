#pragma once

#include "../stdafx.h"

enum UndergroundViewMode
{
    UVM_SURFACE = 0,
    UVM_UNDERGROUND
};

extern UndergroundViewMode _underground_view;
extern int _current_underground_layer;

void ToggleUndergroundView();
