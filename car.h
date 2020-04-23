#ifndef CAR_H_INCLUDED
#define CAR_H_INCLUDED
#include<cstring>
#include <iostream>
#include <math.h>
#include "transport.h"

 class Car : public Transpor
 {
     protected:
        char *model;
     public:
        Car();
        Car(int capacity, int speed, const char *model);
        Car(const Car &c);
        ~Car();

        virtual void print()const  =0;

        void setModel(const char* model);

        char* getModel(char* model)const;
 };

#endif // CAR_H_INCLUDED
