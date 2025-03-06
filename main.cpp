#include <iostream>
#include "cache.h"
#include "metrics.h"
#include "config.h"

using namespace std;

int main() {
    int cacheSize, blockSize, choice;
    ReplacementPolicy policy;
    WritePolicy writePolicy;

    cout << "Enter cache size (in blocks): ";
    cin >> cacheSize;
    cout << "Enter block size: ";
    cin >> blockSize;

    cout << "Choose Replacement Policy:\n1. LRU\n2. FIFO\n3. LFU\n4. MRU\nChoice: ";
    cin >> choice;
    policy = static_cast<ReplacementPolicy>(choice - 1);

    cout << "Choose Write Policy:\n1. Write-Through\n2. Write-Back\nChoice: ";
    cin >> choice;
    writePolicy = (choice == 1) ? WriteThrough : WriteBack;

    Cache cache(cacheSize, blockSize, policy, writePolicy);
    Metrics metrics;

    int address;
    while (true) {
        cout << "Enter memory address to access (-1 to exit): ";
        cin >> address;
        if (address == -1) break;

        bool hit = cache.access(address);
        metrics.updateMetrics(hit);
        cout << (hit ? "Cache Hit" : "Cache Miss") << endl;
    }

    metrics.printMetrics();
    return 0;
}
