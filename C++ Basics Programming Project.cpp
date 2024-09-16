

#include <iostream>
using namespace std;

int main() {
    // Declare variables
    double tankSize = 20.0; // 20-gallon gas tank
    double mpgTown = 23.5;  // Miles per gallon in town
    double mpgHighway = 28.9; // Miles per gallon on highway

    // Calculate the distance in town and on highway
    double distanceTown = tankSize * mpgTown;
    double distanceHighway = tankSize * mpgHighway;

    // Display the results
    cout << "The distance the car can travel on one tank of gas:" << endl;
    cout << "In town: " << distanceTown << " miles" << endl;
    cout << "On the highway: " << distanceHighway << " miles" << endl;

    return 0;
}