#include <iostream>
#include <stdio.h>
#include "heartRate.h"

using namespace std;

//Constructor
HeartRates::HeartRates(string f, string l, int d, int m, int y)
{
    firstName = f;
    lastName = l;
    day = d;
    month = m;
    year = y;
};

//Setters
void HeartRates::setFirstName(string x)
{
    firstName = x;
};

void HeartRates::setLastName(string y)
{
    lastName = y;
};

void HeartRates::setDay(int z)
{
    day = z;
};

void HeartRates::setMonth(int q)
{
    month = q;
};

void HeartRates::setYear(int t)
{
    year = t;
};

//Getters
string HeartRates::getFirstName()
{
    return firstName;
};

string HeartRates::getLastName()
{
    return lastName;
};

int HeartRates::getDay()
{
    return day;
};

int HeartRates::getMonth()
{
    return month;
};

int HeartRates::getYear()
{
    return year;
};

//Other Members
int HeartRates::getAge(int d, int m, int y)
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

int HeartRates::getMaximumHeartRate(int x)
{
    int maxHR;
    int age = x;

    maxHR = (220 - age);

    return maxHR;
};

int HeartRates::getTargetHeartRate(int temp, int n)
{
    int target[2];
    int max = temp;

    //target[lowerbound, upperbound]
    target[0] = ((0.50 * max) + 0.5f);
    target[1] = ((0.85 * max) + 0.5f);

    return target[n];
};