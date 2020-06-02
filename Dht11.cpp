#include "Dht11.h"

void Dht11::read()
{
	mReadValue = 11;
}

uint64_t Dht11::readValue() const
{
	return mReadValue;
}
