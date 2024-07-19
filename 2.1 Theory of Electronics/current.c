#include <stdio.h>
//THEORY:
// --------------------------------------------------------------------------------------------------- //
//Example 1 How many electroncs pass a given point in 3 s if a conductor is carrying a 2-A current?
//Formula I = Q / t Inserting the numbers x / 3 = 2 ---> x = 6
// Electron Charge is 1.602 * 10^-19 ---> 6c / 1.602 * 10^-19
// --------------------------------------------------------------------------------------------------- //

//CODE

//Variables
double e_charge = 1.602e-19;
double current = 2;
double time = 3;

int main () {
    double columb = current * time;
    double total_electroncs = columb / e_charge;

    printf("Number of Electrons: %.2e\n", total_electroncs);
}