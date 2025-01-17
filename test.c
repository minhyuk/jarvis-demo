
int test(int weight) {
    int a = 1;
    float b = 2.0f; // Ensure the float is specified with 'f'
    return a + static_cast<int>(b) + weight; // Cast 'b' to 'int'
}

int main(int argc, char *argv[]) {
    float weight = test(argc);
    return 0;
}
