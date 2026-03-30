#include "../stdafx.h"
#include "underground_mode.h"

UndergroundViewMode _underground_view = UVM_SURFACE;
int _current_underground_layer = 1;

void ToggleUndergroundView()
{
    if (_underground_view == UVM_SURFACE) {
        _underground_view = UVM_UNDERGROUND;
    } else {
        _underground_view = UVM_SURFACE;
    }

    MarkWholeScreenDirty();
}
