#ifndef AIRPLANE_H_INCLUDED
#define AIRPLANE_H_INCLUDED
#include<cstring>
#include <iostream>
#include <math.h>
#include "transport.h"


 class Airplane : public Transpor
 {
   protected:
      int flight_hours;
      char *model;
   public:
      Airplane();
      Airplane(int capacity, int speed, const char *model, int flight_hours);
      ~Airplane();
      Airplane(const Airplane &pl);
      void print()const ;

      void setModel(const char* model);
      bool setFlight_hours(int flight_hours);

      char* getModel(char* model)const;
      int const getFlight_hours()const;

      Airplane& operator = (const Airplane &airplane);

 };



#endif // AIRPLANE_H_INCLUDED
