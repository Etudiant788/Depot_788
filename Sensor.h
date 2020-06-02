#pragma once
#ifndef SENSOR_H
#define SENSOR_H

#include <cstdint>

class Sensor
{
public:
	Sensor() = default;
	virtual ~Sensor() = default;

	virtual void read() = 0;
	virtual uint64_t readValue() const = 0;
};

#endif // !SENSOR_H
