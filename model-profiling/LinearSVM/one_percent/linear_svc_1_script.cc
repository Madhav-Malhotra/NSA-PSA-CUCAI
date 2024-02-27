double score(double * input) {
    return -0.7135953693027814 + input[0] * -0.034655513417586485 + input[1] * -1.5695907507217832 + input[2] * -0.04624287427273534 + input[3] * 1.5906370250011905 + input[4] * 0.397022655977381;
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