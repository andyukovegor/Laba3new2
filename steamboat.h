#ifndef STEAMBOAT_H_INCLUDED
#define STEAMBOAT_H_INCLUDED
#include<cstring>
#include <iostream>
#include <math.h>
#include "transport.h"

class Steamboat : public Transpor
 {
  protected:
      int displacement;
      char *model;
  public:
      Steamboat();
      Steamboat(int capacity, int speed, char *model, int displacement);
      ~Steamboat();
      Steamboat(const Steamboat &s);
      void print()const;

      bool setDisplacement(int displacement);
      void setModel(const char* model);

      int const getDisplacement() const;
      char* getModel(char* model) const;
      Steamboat& operator = (const Steamboat &steamboat);

 };


#endif // STEAMBOAT_H_INCLUDED
