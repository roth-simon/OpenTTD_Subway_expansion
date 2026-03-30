#include "underground_gui.h"
#include "../viewport_func.h"
#include "../window_func.h"

bool _underground_mode = false;

void ToggleUndergroundView()
{
    _underground_mode = !_underground_mode;

    /* Force screen redraw */
    MarkWholeScreenDirty();
}
