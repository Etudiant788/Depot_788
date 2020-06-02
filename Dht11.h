#pragma once
#ifndef DHT11_H
#define DHT11_H

#include "Sensor.h"

class Dht11 : public Sensor
{
public:
	Dht11() = default;
	virtual ~Dht11() = default;


	void read() override;

	uint64_t readValue() const override;

private:
	uint64_t mReadValue;

};

#endif // !DHT11_H
