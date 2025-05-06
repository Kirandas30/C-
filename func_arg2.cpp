#include <iostream>

using namespace std;

class Time {
    int hours, minutes, seconds;

public:
    // Function to get time from user input
    void getTime() {
        cout << "Enter hours: ";
        cin >> hours;
        cout << "Enter minutes: ";
        cin >> minutes;
        cout << "Enter seconds: ";
        cin >> seconds;
    }

    // Function to display the time
    void putTime() const {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }

    // Function to add time
    void sum(const Time &t1, const Time &t2) {
        seconds = t1.seconds + t2.seconds;
        minutes = t1.minutes + t2.minutes + seconds / 60;
        hours = t1.hours + t2.hours + minutes / 60;

        // Adjust minutes and seconds
        minutes = minutes % 60;
        seconds = seconds % 60;
    }
};

int main() {
    Time t1, t2, t3;

    // Input time for t1 and t2
    cout << "Enter time for object t1" << endl;
    t1.getTime();

    cout << "Enter time for object t2" << endl;
    t2.getTime();

    // Perform sum of time for t3
    t3.sum(t1, t2);

    // Display the times
    cout << "For object t1" << endl;
    t1.putTime();

    cout << "For object t2" << endl;
    t2.putTime();

    cout << "For object t3 (sum of t1 and t2)" << endl;
    t3.putTime();

    return 0;
}


