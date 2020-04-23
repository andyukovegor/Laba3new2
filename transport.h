#ifndef TRANSPORT_H_INCLUDED
#define TRANSPORT_H_INCLUDED
#include<cstring>
#include <iostream>
#include <math.h>
using namespace std;

class Transpor
{
  protected:
    int capacity;
    int speed;
  public:
    Transpor();
    Transpor(int capacity, int speed);
    Transpor(const Transpor &v);

     virtual void print() const =0;

     bool setSpeed(int speed);
     bool setCapacity(int capacity);

     int const getSpeed() const;
     int const getCapacity()const;

};


#endif // TRANSPORT_H_INCLUDED
