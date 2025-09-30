#include <iostream>
using namespace std;

int main() {
    int customers = 16500;
    double percentDrinkers = 0.15;
    double percentCitrus = 0.58;

    int drinkers = customers * percentDrinkers;
    int citrusDrinkers = drinkers * percentCitrus;

    cout << "Energy Drink Consumption\n";
    cout << "Customers drinking energy drinks: " << drinkers << endl;
    cout << "Customers preferring citrus flavor: " << citrusDrinkers << endl;

    return 0;
}
