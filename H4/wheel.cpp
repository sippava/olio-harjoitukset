#include "wheel.h"

Wheel::Wheel() {}

int Wheel::getSize() const
{
    return size;
}

void Wheel::setSize(int newSize)
{
    size = newSize;
}

std::string Wheel::getType() const
{
    return type;
}

void Wheel::setType(const std::string &newType)
{
    type = newType;
}


