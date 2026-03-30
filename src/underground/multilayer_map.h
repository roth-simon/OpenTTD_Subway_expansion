#pragma once

#include "../stdafx.h"
#include "../map_type.h"
#include <cstdint>

#define TOTAL_LAYERS 5

enum UndergroundLayer
{
    LAYER_SURFACE = 0,
    LAYER_U1,
    LAYER_U2,
    LAYER_U3,
    LAYER_U4
};

struct UndergroundTile
{
    uint8_t type;
    uint8_t transport;
    uint8_t material;
};

class MultiLayerMap
{
public:
    static void Initialize(uint32_t map_size);
    static UndergroundTile &Get(TileIndex index, UndergroundLayer layer);

private:
    static UndergroundTile *_tiles;
};
