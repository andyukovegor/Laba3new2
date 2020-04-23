#include "airplane.h"
#include <iostream>
using namespace std;

Airplane::Airplane():Airplane(0,0,"model",0){};

Airplane::Airplane(int capacity, int speed,const  char *model, int flight_hours)
{
    if (capacity>=0){this->capacity = capacity;}
    if (speed>=0){this->speed = speed;}
    delete[] this->model;
    int len = strlen(model)+1;
    this ->model = new char [len];
    strcpy(this->model, model);
    if (flight_hours>=0){this->flight_hours = flight_hours;}
}

Airplane::~Airplane()
{
    delete [] model;
}

Airplane::Airplane(const Airplane &pl):Airplane(pl.capacity,pl.speed,pl.model,pl.flight_hours){}


void Airplane:: print()const
{
    std::cout<<"capacity - "<< capacity <<", ";
    std::cout<<"speed - "<< speed <<", ";
    std::cout<<"model - "<< model <<",";
    std::cout<<"flight_hours - "<< flight_hours <<"\n ";
}

bool Airplane::setFlight_hours(int flight_hours)
{
if(flight_hours >=0)
{
this->flight_hours = flight_hours;
return true;
}
return false;
}

void Airplane::setModel(const char* model)
{
delete [] this ->model;
int len = strlen(model);
this ->model = new char[len];
strcpy (this ->model, model);
}


int const Airplane::getFlight_hours() const
{
return flight_hours;
}

char* Airplane::getModel(char* model)const
{
strcpy(model, this->model);
return model;
}


Airplane& Airplane::operator = (const Airplane &airplane)
{
    this->flight_hours = airplane.flight_hours;
    this->model = airplane.model;
    this->capacity = airplane.capacity;
    this->speed = airplane.speed;
    return *this;
}
