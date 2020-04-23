#ifndef PASSENGER_CAR_H_INCLUDED
#define PASSENGER_CAR_H_INCLUDED
#include<cstring>
#include <iostream>
#include <math.h>
#include "car.h"

class Passenger_car : public Car
 {
  public:
      Passenger_car();
      Passenger_car(int capacity, int speed,const char *model);
      ~Passenger_car();
      Passenger_car(const Passenger_car &pc);
      void print()const;
      Passenger_car& operator = (const Passenger_car &passenger_car);

 };

#endif // PASSENGER_CAR_H_INCLUDED
