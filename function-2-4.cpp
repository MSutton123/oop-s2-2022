int array_min(int integers[], int length) {

    int minimum = integers[0];

    for (int i = 1; i < length; i++) {
        if (minimum >= integers[i]) {
            minimum = integers[i];
        }
    }

    return minimum;


}

int array_max(int integers[], int length) {
    
    int maximum = integers[0];

    for (int k = 1; k < length; k++) {
        if (maximum <= integers[k]) {
            maximum = integers[k];
        }
    }

    return maximum;
}

int sum_min_max(int integers[], int length) {
    int sum = 0;

    int max;
    max = array_max(integers, length);

    int min;
    min = array_min(integers, length);

    sum = max + min;

    return sum;
}