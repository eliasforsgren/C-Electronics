#include <stdio.h>

// THEORIES AND FORMULAS:
// --------------------------------------------------------------------------------------------------- //
// Example 1: Our 1.5 V flashlight circuit draws 0.1A. How much power does the circuit consume?
// Formula: P = U * I
// Where P is the power in watts, U is the voltage in volts, and I is the current in amperes.
// --------------------------------------------------------------------------------------------------- //
// Example 2: Given P = 100W and U = 12V, find the current I.
// Formula: P = U * I
// Solving for I: I = P / U
// --------------------------------------------------------------------------------------------------- //

// Variables for Example 1
double U = 1.5; // Voltage in volts
double I = 0.1; // Current in amperes

// Variables for Example 2
double U_two = 12; // Voltage in volts
double P_two = 100; // Power in watts

int main() {
    // Example 1: Calculate the power consumed by the flashlight circuit
    double P = U * I; // P = U * I

    // Example 2: Calculate the current drawn for a given power and voltage
    double I_two = P_two / U_two; // I = P / U

    // Print the results
    printf("Example 1:\n");
    printf("The Power is: %.2f W\n", P);
    printf("Example 2:\n");
    printf("The amount of current drawn: %.2f A\n", I_two);

    return 0;
}
