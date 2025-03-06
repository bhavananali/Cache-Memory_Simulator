#include "cache.h"
#include <iostream>
#include <unordered_map>
#include <list>

Cache::Cache(int size, int blockSize, ReplacementPolicy policy, WritePolicy writePolicy)
    : cacheSize(size), blockSize(blockSize), policy(policy), writePolicy(writePolicy) {
    cacheBlocks.resize(size, -1);
}

bool Cache::access(int address) {
    int blockIndex = findBlock(address);
    if (blockIndex != -1) {
        return true;  // Cache hit
    } else {
        replaceBlock(address);
        return false;  // Cache miss
    }
}

int Cache::findBlock(int address) {
    for (int i = 0; i < cacheSize; ++i) {
        if (cacheBlocks[i] == address) {
            return i;  // Cache hit
        }
    }
    return -1;  // Cache miss
}

void Cache::replaceBlock(int address) {
    static int nextIndex = 0;
    cacheBlocks[nextIndex] = address;
    nextIndex = (nextIndex + 1) % cacheSize;  // Simple FIFO for demonstration
}
