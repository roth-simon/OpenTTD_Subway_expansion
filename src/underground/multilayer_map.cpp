#include "multilayer_map.h"

MultiLayerTile *MultiLayerMap::map = nullptr;

void MultiLayerMap::Initialize(uint32 size)
{
    map = new MultiLayerTile[size];
}

Tile &MultiLayerMap::Get(TileIndex index, UndergroundLayer layer)
{
    return map[index].tiles[layer];
}
