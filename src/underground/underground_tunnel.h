#pragma once

#include "../map_type.h"
#include "multilayer_map.h"

inline bool HasUndergroundTunnel(TileIndex tile, UndergroundLayer layer)
{
    return MultiLayerMap::Get(tile, layer).transport == 1;
}

inline void SetUndergroundTunnel(TileIndex tile, UndergroundLayer layer)
{
    MultiLayerMap::Get(tile, layer).transport = 1;
}
