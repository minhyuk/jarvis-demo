
int test(int weight) {
    int a = 1;
    float b = 2.0f;
    return static_cast<int>(static_cast<float>(a) + b + static_cast<float>(weight));
}

int main(int argc, char *argv[]) {
    float weight = test(argc);
    return 0;
}
