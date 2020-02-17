#include <iostream>
#include "myDate.h"


int main() {

    myDate x(3,6,1980);
    string z = x.dayName();


    cout<<z;



    return 0;
}
