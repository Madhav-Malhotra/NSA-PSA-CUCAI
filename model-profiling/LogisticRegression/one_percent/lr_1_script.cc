double score(double * input) {
    return -2.1464452743530273 + input[0] * -0.1089312732219696 + input[1] * -6.223360538482666 + input[2] * -0.4626745879650116 + input[3] * 6.913839817047119 + input[4] * 1.620381236076355;
}

int main() {
    // redundant input
    double input[] = {1.0, 2.0, 3.0, 4.0, 5.0};

    // Run your code
    while (true) {
        double result = score(input);
    }

    return 0;
}