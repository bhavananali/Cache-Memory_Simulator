#include "metrics.h"
#include <iostream>

Metrics::Metrics() : hits(0), misses(0) {}

void Metrics::updateMetrics(bool hit) {
    if (hit) ++hits;
    else ++misses;
}

void Metrics::printMetrics() const {
    int total = hits + misses;
    std::cout << "Total Accesses: " << total << "\n";
    std::cout << "Cache Hits: " << hits << "\n";
    std::cout << "Cache Misses: " << misses << "\n";
    if (total > 0) {
        std::cout << "Hit Ratio: " << (static_cast<float>(hits) / total) * 100 << "%\n";
        std::cout << "Miss Ratio: " << (static_cast<float>(misses) / total) * 100 << "%\n";
    }
}
