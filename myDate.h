#ifndef MYDATEOBJECT_MYDATE_H
#define MYDATEOBJECT_MYDATE_H
#include "string"
using namespace std;


class myDate{
private:
    int month;
    int day;
    int year;


public:
    myDate();
    myDate(int,int,int);
    void display();
    void increaseDate(int);
    void decreaseDate(int);
    int daysBetween(myDate);
    int getMonth();
    int getDay();
    int getYear();
    int dayOfYear();
    string dayName();


};


#endif //MYDATEOBJECT_MYDATE_H
