#ifndef CACHE_H
#define CACHE_H

#include <vector>
#include "config.h"

class Cache {
public:
    Cache(int size, int blockSize, ReplacementPolicy policy, WritePolicy writePolicy);
    bool access(int address);

private:
    int cacheSize;
    int blockSize;
    ReplacementPolicy policy;
    WritePolicy writePolicy;
    std::vector<int> cacheBlocks;

    int findBlock(int address);
    void replaceBlock(int address);
};

#endif
