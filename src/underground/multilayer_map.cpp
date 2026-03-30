#include "../stdafx.h"
#include "multilayer_map.h"

#include <cstdlib>
#include <cassert>

UndergroundTile *MultiLayerMap::_tiles = nullptr;

void MultiLayerMap::Initialize(uint32_t map_size)
{
    size_t total = (size_t)map_size * TOTAL_LAYERS;
    _tiles = (UndergroundTile*)calloc(total, sizeof(UndergroundTile));
    assert(_tiles != nullptr);
}

UndergroundTile &MultiLayerMap::Get(TileIndex index, UndergroundLayer layer)
{
    assert(_tiles != nullptr);
    size_t offset = (size_t)index * TOTAL_LAYERS + (size_t)layer;
    return _tiles[offset];
}
