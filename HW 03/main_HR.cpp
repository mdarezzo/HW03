#include <stdio.h>
#include <iostream>
#include "heartRate.h"

using namespace std;

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