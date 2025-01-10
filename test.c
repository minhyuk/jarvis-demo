int printf(const char *format, ...);

int test(int weight) {
    int a = 1;
    float b = 2.0;
    return a + b + weight;
}

int main(int argc, char *argv[]) {
    float weight = test(argc);
    printf("%f", weight);
    return 0;
}
