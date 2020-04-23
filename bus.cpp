#include "bus.h"
#include <iostream>
using namespace std;

Bus::Bus():Bus(0,0,"model"){};

Bus::Bus(int capacity, int speed, const char *model)
{
    if (capacity>=0){this->capacity = capacity;}
    if (speed>=0){this->speed = speed;}
    delete[] this->model;
    int len = strlen(model)+1;
    this ->model = new char [len];
    strcpy(this->model, model);
}

Bus::~Bus()
{
    delete [] model;
}

Bus::Bus(const Bus &b):Bus(b.capacity,b.speed,b.model){}

void Bus:: print() const
{
    std::cout<<"capacity - "<< capacity <<", ";
    std::cout<<"speed - "<< speed <<", ";
    std::cout<<"model - "<< model <<"\n";
}

Bus& Bus::operator = (const Bus &bus)
{
    this->model = bus.model;
    this->capacity = bus.capacity;
    this->speed = bus.speed;
    return *this;
}
