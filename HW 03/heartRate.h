#ifndef HR_H
#define HR_H
#include <iostream>

class HeartRates
{
    private:
        string firstName;
        string lastName;
        int day, month, year;
    
    public:
        //Constructor
        HeartRates(string f, string l, int d, int m, int y);

        //Setters
        void setFirstName(string x);
        void setLastName(string y);
        void setDay(int z);
        void setMonth(int q);
        void setYear(int t);

        //Getters
        string getFirstName();
        string getLastName();
        int getDay();
        int getMonth();
        int getYear();

        //Other Members
        int getAge(int d, int m, int y);
        int getMaximumHeartRate(int x);
        int getTargetHeartRate(int temp, int n);
};

#endif