#pragma once
#ifndef MAX4466_H
#define MAX4466_H

#include "Sensor.h"
class Max4466 :
	public Sensor
{
public:
	Max4466() = default;
	virtual ~Max4466() = default;

	void read() override;

	uint64_t readValue() const override;

private:
	uint64_t mReadValue;
};

#endif // !MAX4466_H
