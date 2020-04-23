#include "passenger_car.h"
#include <iostream>
using namespace std;

Passenger_car::Passenger_car():Passenger_car(0,0,"model"){};

Passenger_car::Passenger_car(int capacity, int speed,const  char *model)
{
    if (capacity>=0){this->capacity = capacity;}
    if (speed>=0){this->speed = speed;}
    delete[] this->model;
    int len = strlen(model)+1;
    this ->model = new char [len];
    strcpy(this->model, model);
}

Passenger_car::~Passenger_car()
{
    delete [] model;
}

Passenger_car::Passenger_car(const Passenger_car &pc):Passenger_car(pc.capacity,pc.speed,pc.model){}

void Passenger_car:: print() const
{
    std::cout<<"capacity - "<< capacity <<", ";
    std::cout<<"speed - "<< speed <<", ";
    std::cout<<"model - "<< model <<"\n";
}

Passenger_car& Passenger_car::operator = (const Passenger_car &passenger_car)
{

    this->model = passenger_car.model;
    this->capacity = passenger_car.capacity;
    this->speed = passenger_car.speed;
    return *this;
}


