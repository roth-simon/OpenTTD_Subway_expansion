#pragma once

#include "../map_type.h"
#include "layer_types.h"

struct MultiLayerTile
{
    Tile tiles[TOTAL_LAYERS];
};

class MultiLayerMap
{
public:

    static MultiLayerTile *map;

    static void Initialize(uint32 size);

    static Tile &Get(TileIndex index, UndergroundLayer layer);
};
