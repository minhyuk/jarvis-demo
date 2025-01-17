
int test(int weight) {
    int a = 1;
    float b = 2.0f;
    return a + (int)b + weight; // Cast b to int to ensure the same type category
}

#include <stdio.h>

float test(int value) {
    // Dummy implementation
    return (float)value;
}

int main(int argc, char *argv[]) {
    (void)argv; // Explicitly mark argv as unused
    float weight = test(argc);
    return 0;
}
