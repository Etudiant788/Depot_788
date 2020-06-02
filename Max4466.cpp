#include "Max4466.h"

void Max4466::read()
{
	mReadValue = 4466;
}

uint64_t Max4466::readValue() const
{
	return mReadValue;
}
