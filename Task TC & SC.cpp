#include <iostream>
using namespace std;

int main() {
    const int seconds = 86400;
    float sensor1[seconds], sensor2[seconds], sensor3[seconds]; // assume 50 such sensors

    // Simulate reading
    int i = 0;
    while(i < seconds) {
        sensor1[i] = i * 0.1;
        sensor2[i] = i * 0.2;
        sensor3[i] = i * 0.3;
        // ... and so on for all 50 sensors
        i++;
    }

    // Calculate average
    float avg1 = 0, avg2 = 0, avg3 = 0; // and so on

    for(int i = 0; i < seconds; i++) {
        avg1 += sensor1[i];
        avg2 += sensor2[i];
        avg3 += sensor3[i];
        // ... same logic repeated for all sensors
    }

    avg1 /= seconds;
    avg2 /= seconds;
    avg3 /= seconds;

    cout << "Avg1: " << avg1 << endl;
    cout << "Avg2: " << avg2 << endl;
    cout << "Avg3: " << avg3 << endl;

    return 0;
}





//calculate its time complexity in terms of n (number of seconds) and
// s (number of sensors).

//Calculate the space complexity of the given implementation
//Clearly state assumptions.
