//
// Created by lichenyang on 7/12/17.
//

#ifndef POINTXYZDATA_H
#define POINTXYZDATA_H

#define PCL_NO_PRECOMPILE
#include <pcl/point_types.h>

namespace lidarutils
{
    static const int kNumOfFieldInBinary = 5;
}
struct PointXYZData
{
    PCL_ADD_POINT4D; // preferred way of adding a XYZ+padding
    float intensity;
    float timestamp;
    int beamid;
    float extraf[2];
    int extrai[2];
    EIGEN_MAKE_ALIGNED_OPERATOR_NEW // make sure our new allocators are aligned
} EIGEN_ALIGN16;                    // enforce SSE padding for correct memory alignment

POINT_CLOUD_REGISTER_POINT_STRUCT(
        PointXYZData, // here we assume a XYZ + "test" (as fields)
(float, x, x)
(float, y, y)
(float, z, z)
(float, intensity, intensity)
(float, timestamp, timestamp)
(int, beamid, beamid)
(float[2], extraf, extraf)
(int[2], extrai, extrai))

#endif //POINTXYZDATA_H
