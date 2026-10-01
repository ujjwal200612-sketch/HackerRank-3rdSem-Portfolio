#include <bits/stdc++.h>
using namespace std;

// Convert a 12-hour AM/PM time string into 24-hour format.
string timeConversion(string s) {
    int hour = stoi(s.substr(0, 2));

    // Handle the special 12 AM and 12 PM cases.
    if (s[8] == 'A') {
        if (hour == 12)
            hour = 0;
    }
    else {
        if (hour != 12)
            hour += 12;
    }

    string result = to_string(hour);

    if (hour < 10)
        result = "0" + result;

    result += s.substr(2, 6);

    return result;
}
