int binary_to_int(int binary_digits[], int number_of_digits) {
    int decimal = 0;

    for (int i = 0; i < number_of_digits; i++) {
        int addition = 0;

        int power = 1;

        for (int k = 0; k < i; k++) {
            power *= 2;
        }

        addition = power;

        decimal += addition;
    }

    return decimal;
}