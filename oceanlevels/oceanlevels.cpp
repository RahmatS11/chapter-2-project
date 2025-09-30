#include <iostream>
using namespace std;

int main() {
    double risePerYear = 1.5;
    double level5 = risePerYear * 5;
    double level7 = risePerYear * 7;
    double level10 = risePerYear * 10;

    cout << "Ocean Levels Rising\n";
    cout << "In 5 years: " << level5 << " mm higher\n";
    cout << "In 7 years: " << level7 << " mm higher\n";
    cout << "In 10 years: " << level10 << " mm higher\n";

    return 0;
}
