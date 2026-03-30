#pragma once

#include "stdafx.h"
#include "map_type.h"
#include "underground/multilayer_map.h"

inline int GetUndergroundLayer(TileIndex tile)
{
    return MultiLayerMap::Get(tile, LAYER_U1).type;
}
