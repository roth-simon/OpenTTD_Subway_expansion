#include "../hotkeys.h"
#include "underground_gui.h"

/* Hotkey ID enum */
enum UndergroundHotkeys {
    UH_TOGGLE = 0,
};

/* Handler */
static EventState UndergroundHotkeyHandler(int hotkey)
{
    switch (hotkey) {
        case UH_TOGGLE:
            ToggleUndergroundView();
            return ES_HANDLED;
    }
    return ES_NOT_HANDLED;
}

/* Define hotkeys */
static HotkeyList underground_hotkeys(
    "underground", // ini section
    {
        Hotkey('U', "toggle_underground", UH_TOGGLE),
    },
    UndergroundHotkeyHandler
);
