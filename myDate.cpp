#include "myDate.h"
#include <iostream>
using namespace std;

int Greg2Julian(int month, int day, int year){
    return (day-32075 + 1461*(year+4800+(month-14)/12)/4 + 367*(month-2-((month-14)/12)*12)/12 - 3*((year+4900+(month-14)/12)/100)/4);

}

void Julian2Greg(int JD, int& month, int& day, int &year){

}




myDate:: myDate(){}

myDate:: myDate(int m, int d, int y){
    month = m;
    day = d;
    year = y;
}

void myDate:: display(){
    cout<< month << day << year<<endl;
}

void myDate:: increaseDate(int number){}

void myDate:: decreaseDate(int number){}

int myDate:: daysBetween(myDate date){}

int myDate:: getMonth(){}

int myDate:: getDay(){}

int myDate:: getYear(){}

int myDate:: dayOfYear(){}

string myDate:: dayName() {}




















