#include <iostream>
using namespace std;

int main() {
    double gallons = 20.0;
    double mpgTown = 23.5;
    double mpgHighway = 28.9;

    double distanceTown = gallons * mpgTown;
    double distanceHighway = gallons * mpgHighway;

    cout << "Distance Per Tank of Gas\n";
    cout << "Town driving: " << distanceTown << " miles\n";
    cout << "Highway driving: " << distanceHighway << " miles\n";

    return 0;
}
