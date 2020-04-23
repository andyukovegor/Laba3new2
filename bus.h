#ifndef BUS_H_INCLUDED
#define BUS_H_INCLUDED
#include<cstring>
#include <iostream>
#include <math.h>
#include "car.h"

class Bus : public Car
 {
  public:
    Bus();
    Bus(int capacity, int speed,const char *model);
    ~Bus();
    Bus(const Bus &b);
    void print()const ;
    Bus& operator = (const Bus &bus);

 };

#endif // BUS_H_INCLUDED
