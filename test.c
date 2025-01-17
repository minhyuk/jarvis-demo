int printf(const char *format, ...);

#include <stdint.h>

static int test(int weight) {
    int a = 1;
    int b = 2; // Change to int to match essential type categories
    return a + b + weight;
}

#include <stdio.h>

// Placeholder function to simulate the test function
float test(int input) {
    // Sample logic for test function, can be defined based on actual requirements
    return static_cast<float>(input * 1.5);
}

int main(int argc, char *argv[]) {
    float weight = test(argc);

    // Using the weight variable to adhere to unused value rule
    if (weight < 0.0f) {
        printf("Weight is negative, which is unexpected.\n");
    }

    // Keep unused parameter to comply with MISRA rule - Demonstrate without changing output
    (void)argv;

    return 0;
}
