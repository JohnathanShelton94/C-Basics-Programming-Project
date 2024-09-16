// This Program will display the approximate number of customers in the survey purchasing one or more energy drinks per week and the approximate number of customers in the survey preferring citrus-flavored energy drinks.

#include <iostream>
using namespace std;

int main() {
        // Declare variables
    const int totalCustomers = 16500;           // Total customers surveyed
    const double percentEnergyDrinkers = 0.15;     // 15% of customers purchase energy drinks
    const double percentCitrusPreference = 0.58;     // 58% prefer citrus-flavored drinks

        // Calculate the number of energy drink customers
    int energyDrinkCustomers = totalCustomers * percentEnergyDrinkers;

        // Calculate the number of citrus-flavored drink customers
    int citrusDrinkCustomers = energyDrinkCustomers * percentCitrusPreference;

        // Display the results
    cout << "Approximate number of customers purchasing one or more energy drinks per week: "
        << energyDrinkCustomers << endl;
    cout << "Approximate number of customers preferring citrus-flavored energy drinks: "
        << citrusDrinkCustomers << endl;

    return 0;
}