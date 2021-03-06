#ifndef SRC_CLUSTERING_KMEANS_CLUSTER_H_
#define SRC_CLUSTERING_KMEANS_CLUSTER_H_

#include <vector>

#include "clustering/cluster.h"

namespace GraphSfM {

class KMeansCluster : public Cluster
{
public:
    virtual std::unordered_map<int, int> ComputeCluster(
        const std::vector<std::pair<int, int>>& edges,
        const std::vector<int>& weights,
        const int num_partitions) override;
};

} // namespace GraphSfM

#endif