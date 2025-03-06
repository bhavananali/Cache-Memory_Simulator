#ifndef METRICS_H
#define METRICS_H

class Metrics {
public:
    Metrics();
    void updateMetrics(bool hit);
    void printMetrics() const;

private:
    int hits;
    int misses;
};

#endif
