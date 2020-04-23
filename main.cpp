#include <iostream>
#include "steamboat.h"
#include "passenger_car.h"
#include "transport.h"
#include "car.h"
#include "bus.h"
#include "airplane.h"

using namespace std;

int main()
{

Bus b;
Airplane p1(15,1000, "Sarator_airlane", 200);
b.print();
b.setModel("Reno");
b.setCapacity(23);
b.print();
Steamboat s(0,12,"Lodka",0);
cout << s.getSpeed();
s.setSpeed(13);
cout << s.getSpeed();


return 0;
}
