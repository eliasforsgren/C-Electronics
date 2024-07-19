#include <stdio.h>
#include <math.h> // For sin() and cos() functions

// THEORIES AND FORMULAS:
// --------------------------------------------------------------------------------------------------- //
// Example 1: How many electrons pass a given point in 3 s if a conductor is carrying a 2-A current?
// Formula: I = Q / t
// Solving for Q: Q = I * t
// Electron Charge: 1.602 * 10^-19 C
// Number of Electrons: Q / Electron Charge
// --------------------------------------------------------------------------------------------------- //
// Example 2: Charge is changing in a circuit with time according to Q(t) = 0.001 sin(1000/S t)
// Instantaneous Current: I(t) = dQ(t) / dt
// I(t) = (1/S) * cos(1000/S * t)
// --------------------------------------------------------------------------------------------------- //

// Variables for Example 1
double e_charge = 1.602e-19;
double current = 2;
double time1 = 3;

// Constant for Example 2
#define S 1.0

int main () {
    // Example 1
    double columb = current * time1; // Q = I * t
    double total_electrons = columb / e_charge; // Number of Electrons = Q / e_charge

    printf("Example 1:\n");
    printf("Number of Electrons passing a point in 3 seconds with a 2-A current: %.2e\n\n", total_electrons);

    // Variables for Example 2
    double time2; // Variable to store the time at which we calculate Q and I
    double charge; // Variable to store the charge Q(t)
    double current_instantaneous; // Variable to store the instantaneous current I(t)

    // Input the time for Example 2
    printf("Enter the time in seconds for Example 2: ");
    scanf("%lf", &time2);

    // Calculate Q(t) = 0.001 * sin(1000/S * t)
    charge = 0.001 * sin((1000 / S) * time2);

    // Calculate I(t) = (1/S) * cos(1000/S * t)
    current_instantaneous = (1 / S) * cos((1000 / S) * time2);

    // Print the results for Example 2
    printf("Example 2:\n");
    printf("At time t = %lf seconds:\n", time2);
    printf("Charge Q(t) = %lf Coulombs\n", charge);
    printf("Instantaneous Current I(t) = %lf Amperes\n", current_instantaneous);

    return 0;
}
