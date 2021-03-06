#ifndef _DISTANCE_SENSOR_H_
#define _DISTANCE_SENSOR_H_

#include "sensor.h"

class SensorInfo;

class DistanceSensor : public Sensor {
    double distance;
    double interval;

    double detectDistance();
    double simulateDistance();
    void setInterval(const double &inv);


public:
    DistanceSensor();
    ~DistanceSensor();

    SensorInfo getInfo() override;
    void start();
};

#endif
