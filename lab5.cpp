#include <iostream>
using namespace std;

int main() {
    const double FULL_FARE = 2.90;
    const double HALF_FARE = 1.45;
    const double JUMPER_FARE = 0.0;
    int totalSwipes;

    cout << "Fulton St. Turnstile Revenue Simulator" << endl;
    cout << "Enter the number of MetroCard swipes: ";
    cin >> totalSwipes;

    double totalRevenue = 0;

    for (int swipe = 1; swipe <= totalSwipes; swipe++) {
        double fare;

        if (swipe % 3 == 0) {
            fare = JUMPER_FARE;
        }
        else if (swipe % 5 == 0) {
            fare = HALF_FARE;
        }
        else {
            fare = FULL_FARE;
        }

        totalRevenue += fare;
    }

    cout << "Total revenue collected: $" << totalRevenue << endl;
    return 0;
}
