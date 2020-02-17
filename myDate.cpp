#include "myDate.h"
#include <iostream>
using namespace std;

int Greg2Julian(int month, int day, int year){
    return (day-32075 + 1461*(year+4800+(month-14)/12)/4 + 367*(month-2-((month-14)/12)*12)/12 - 3*((year+4900+(month-14)/12)/100)/4);
}

void Julian2Greg(int JD, int& m, int& d, int& y){
    int L = JD + 68569;
    int N = 4*L/146097;
    L = L - (146097*N + 3)/4;
    y = 4000 * (L + 1) / 1461001;
    L = L - 1461 * y / 4 + 31;
    m = 80 * L / 2447;
    d = L - 2447 * m / 80;
    L = m / 11;
    m = m + 2 - 12 * L;
    y = 100 * (N - 49) + y + L;
}

myDate:: myDate(){
    month = 5;
    day = 11;
    year = 1959;
}

myDate:: myDate(int m, int d, int y){
    month = m;
    day = d;
    year = y;
}

void myDate:: display(){
    if(month == 1){ cout<< "January "<< day << ", " << year;}

    else if(month == 2){ cout<< "Feburary "<< day << ", " << year;}
    else if(month == 3){ cout<< "March "<< day << ", " << year;}
    else if(month == 4){ cout<< "April "<< day << ", " << year;}
    else if(month == 5){ cout<< "May "<< day << ", " << year;}
    else if(month == 6){ cout<< "June "<< day << ", " << year;}
    else if(month == 7){ cout<< "July "<< day << ", " << year;}
    else if(month == 8){ cout<< "August "<< day << ", " << year;}
    else if(month == 9){ cout<< "September " << day << ", " << year;}
    else if(month == 10){ cout<< "October "<< day << ", " << year;}
    else if(month == 11){ cout<< "November "<< day << ", " << year;}

    else{ cout<< "December" << " " << day << ", " << year;}



}

void myDate:: increaseDate(int number){
    int JD = Greg2Julian(month,day,year);
    JD = JD + number;
    Julian2Greg(JD,month,day,year);
}

void myDate:: decreaseDate(int number){
    int JD = Greg2Julian(month,day,year);
    JD = JD - number;
    Julian2Greg(JD,month,day,year);
}

int myDate:: daysBetween(myDate date){
    int JD = Greg2Julian(month,day,year);
    int givenDate = Greg2Julian(date.getMonth(),date.getDay(),date.getYear());

    return givenDate - JD;

}

int myDate:: dayOfYear(){ //Test case for 1st day should be zero
    myDate x(1,1,year);
    return -1*(daysBetween(x)-1);
}

string myDate:: dayName() {
    int JD = Greg2Julian(month,day,year);
    if(JD%7 == 0){
        return "Monday";
    }
    else if(JD%7 == 1){
        return "Tuesday";
    }
    else if(JD%7 == 2){
        return "Wednesday";
    }
    else if(JD%7 == 3){
        return "Thursday";
    }
    else if(JD%7 == 4){
        return "Friday";
    }
    else if(JD%7 == 5){
        return "Saturday";
    }
    else
        return "Sunday";

}

int myDate:: getMonth(){
    return month;
}

int myDate:: getDay(){
    return day;
}

int myDate:: getYear(){
    return year;
}




















