#include "car.h"
#include <iostream>
using namespace std;

Car::Car():Car(0,0,"model"){};

Car::Car(int capacity, int speed,const  char *model)
{
    if (capacity>0){this->capacity = capacity;}
    if (speed>0){this->speed = speed;}
    delete[] this->model;
    int len = strlen(model)+1;
    this ->model = new char [len];
    strcpy(this->model, model);
}

Car::~Car()
{
    delete [] model;
}

Car::Car(const Car &c):Car(c.capacity,c.speed,c.model){}

void Car::setModel(const char* model)
{
delete [] this ->model;
int len = strlen(model);
this ->model = new char[len];
strcpy (this ->model, model);
}


char* Car::getModel(char* model)const
{
strcpy(model, this->model);
return model;
}
