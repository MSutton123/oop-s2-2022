int print_binary_string(int number) {

    int numberAgain = number;

    // finding length
    int length = 0;

    while (numberAgain > 0) {

        int digit = numberAgain / 2;

        length += 1;

        numberAgain = digit;
    }

    int binarystring[length];

    for (int k = 0; k < length; k++) {
        int remainder = number % 2;

        int digit = number / 2;

        binarystring[k] = remainder;

        number = digit;
    }
}