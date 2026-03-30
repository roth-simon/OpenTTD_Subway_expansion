add_subdirectory(script)
add_subdirectory(settingsgen)
add_subdirectory(strgen)

if(OPTION_TOOLS_ONLY)
    return()
endif()

add_subdirectory(3rdparty)
add_subdirectory(ai)
add_subdirectory(blitter)
add_subdirectory(core)
add_subdirectory(fontcache)
add_subdirectory(game)
add_subdirectory(lang)
add_subdirectory(linkgraph)
add_subdirectory(misc)
add_subdirectory(music)
add_subdirectory(network)
add_subdirectory(newgrf)
add_subdirectory(os)
add_subdirectory(pathfinder)
add_subdirectory(saveload)
add_subdirectory(sound)
add_subdirectory(spriteloader)
add_subdirectory(table)
add_subdirectory(tests)
add_subdirectory(timer)
add_subdirectory(video)
add_subdirectory(widgets)

add_files(
    viewport_sprite_sorter_sse4.cpp
    CONDITION SSE_FOUND
)

add_files(
    gfx_layout_icu.cpp
    gfx_layout_icu.h
    CONDITION ICU_i18n_FOUND AND HARFBUZZ_FOUND
)

add_files(
    screenshot_png.cpp
    CONDITION PNG_FOUND
)

add_files(
    soundloader_opus.cpp
    CONDITION OpusFile_FOUND
)

add_files(

    
    layer_types.h
    underground_hotkeys.cpp
    underground_gui.cpp
    underground_gui.h
    underground_hotkeys.cpp
    multilayer_map.h
    underground_tunnel.cpp
    multilayer_map.cpp
    underground_mode.cpp
    underground_mode.h
    
)
