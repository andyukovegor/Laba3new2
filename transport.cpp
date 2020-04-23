#include "transport.h"
#include <iostream>
using namespace std;
Transpor::Transpor():Transpor(0,0){}

Transpor::Transpor(int capacity, int speed)
{
   if (capacity>0){this->capacity = capacity;}
   if (speed>0){this->speed = speed;}
}

Transpor::Transpor(const Transpor &v):Transpor(v.capacity,v.speed){}


bool Transpor::setSpeed(int speed)
{
if(speed >=0 && speed<1000)
{
this->speed = speed;
return true;
}
return false;
}


bool Transpor::setCapacity(int capacity)
{
if(capacity >=0)
{
this->capacity = capacity;
return true;
}
return false;
}

int const Transpor::getSpeed()const
{
return speed;
}

int const Transpor::getCapacity()const
{
return capacity;
}
