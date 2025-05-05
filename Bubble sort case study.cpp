#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <utility>
#include <cstdlib> // For atoi()

using namespace std;

const int MAX = 100;
string names[MAX];
int ids[MAX];
int scores[MAX];

// Function to read data from file
int readFile(string filename) {
    ifstream file(filename.c_str()); // Compatible with older compilers
    string line;
    int index = 0;

    while (getline(file, line)) {
        stringstream ss(line);
        string name, idStr, scoreStr;
        getline(ss, name, ',');
        getline(ss, idStr, ',');
        getline(ss, scoreStr, ',');

        names[index] = name;
        ids[index] = atoi(idStr.c_str());         // Replace stoi with atoi
        scores[index] = atoi(scoreStr.c_str());   // Replace stoi with atoi
        index++;
    }

    file.close();
    return index;
}

// Function to display data
void displayData(int size) {
    cout << "Name\tID\tScore\n";                           //O(n)
    cout << "---------------------------\n";
    for (int i = 0; i < size; i++) {
        cout << names[i] << "\t" << ids[i] << "\t" << scores[i] << "\n";
    }
}

// For comparing scores
bool comparing(int score1 , int score2){
	if (score1 < score2) return true;
	return false;
}

// Bubble Sort by score (descending)
void bubbleSort(int size) {
    for (int i = 0; i < size - 1; i++) { //n
        for (int j = 0; j < size - i - 1; j++) { //n-1            n^2
            if (comparing(scores[j] , scores[j + 1])) {
                // Swap scores
                swap(scores[j] , scores[j + 1])

                // Swap ids
                swap(ids[j] , ids[j + 1])

                // Swap names
                swap(names[j] , names[j + 1])
            }
        }
    }
}

int main() {
    int n = readFile("data.csv");

    cout << "\nBefore Sorting:\n";
    displayData(n);

    bubbleSort(n);

    cout << "\nAfter Sorting (By Score Descending):\n";
    displayData(n);

    return 0;
}
