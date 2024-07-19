#include <stdio.h>

int main() {
    // Define the constants
    double charge_of_electron = 1.602e-19; // Charge of one electron in Coulombs
    double current = 2.0; // Current in Amperes
    double time = 3.0; // Time in seconds

    // Calculate the total charge
    double total_charge = current * time;

    // Calculate the number of electrons
    double number_of_electrons = total_charge / charge_of_electron;

    // Print the result
    printf("Number of electrons: %.4e\n", number_of_electrons);

    return 0;
}
