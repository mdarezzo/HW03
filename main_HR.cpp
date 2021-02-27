#include <stdio.h>
#include <iostream>
//#include "heartRate.h"

using namespace std;

class HeartRates
{
    private:
        string firstName;
        string lastName;
        int day, month, year;
    
    public:
        //Constructor
        HeartRates(string f, string l, int d, int m, int y)
        {
            firstName = f;
            lastName = l;
            day = d;
            month = m;
            year = y;
        };

        //Setters
        void setFirstName(string x)
        {
            firstName = x;
        };

        void setLastName(string y)
        {
            lastName = y;
        };

        void setDay(int z)
        {
            day = z;
        };

        void setMonth(int q)
        {
            month = q;
        };

        void setYear(int t)
        {
            year = t;
        };

        //Getters
        string getFirstName()
        {
            return firstName;
        };

        string getLastName()
        {
            return lastName;
        };

        int getDay()
        {
            return day;
        };

        int getMonth()
        {
            return month;
        };

        int getYear()
        {
            return year;
        };

        //Other Members
        int getAge(int d, int m, int y)
        {
            int day_t, month_t, year_t;
            int a[3];

            int day_b = d;
            int month_b = m;
            int year_b = y;

            cout << "What year is it? ";
            cin >> year_t;
            cout << "What month is it (Provide a number value)? ";
            cin >> month_t;
            cout << "What day is it (Provide a number value)? ";
            cin >> day_t;

            //a[day, month, year]
            a[0] = (day_t - day_b);
            a[1] = (month_t - month_b);
            a[2] = (year_t - year_b);
            if (a[1] < 0)
            {
                a[2]--;
            }
            else if (a[1] == 0)
            {
                if (a[0] < 0)
                {
                    a[2]--;
                }
            }
            return a[2];
        };

        int getMaximumHeartRate(int x)
        {
            int maxHR;
            int age = x;

            maxHR = (220 - age);

            return maxHR;
        };

        int getTargetHeartRate(int temp, int n)
        {
            int target[2];
            int max = temp;

            //target[lowerbound, upperbound]
            target[0] = ((0.50 * max) + 0.5f);
            target[1] = ((0.85 * max) + 0.5f);

            return target[n];
        };
};

int main (int argc, char const* argv[])
{
    string first, last;
    int d, m, y;

    cout << "First Name: ";
    cin >> first;

    cout << "Last Name: ";
    cin >> last;

    cout << "What year were you born? ";
    cin >> y;
    cout << "During which month (Provide a number value)? ";
    cin >> m;
    cout << "On what day (Provide a number value)? ";
    cin >> d;

    HeartRates person1(first, last, d, m, y);

    int ageYears = person1.getAge(d, m, y);
    int maxHeartRate = person1.getMaximumHeartRate(ageYears);
    int targetHeartRate[2] = { person1.getTargetHeartRate(maxHeartRate, 0), person1.getTargetHeartRate(maxHeartRate, 1) };

    cout << "Name: " << person1.getFirstName() << " " << person1.getLastName() << "\n";
    cout << "Birthday: " << person1.getMonth() << "/" << person1.getDay() << "/" << person1.getYear() << "\n";
    cout << "Age: " << ageYears << " years old. \nMaximum heart rate: " << maxHeartRate << "\nTarget heart rate: " << targetHeartRate[0] << " - " << targetHeartRate[1] << ". \n";

    return 0;
}