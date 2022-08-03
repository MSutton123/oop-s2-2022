int is_identity(int array[10][10]) {

    int response = 0;
    
    // testing for ones
    for(int i = 0; i < 10; i++) {
        if (array[i][i] == 1) {
            response = 1;
        }
        else {
            response = 0;
            return response;
        }
    }

    // testing for zeros upper triangle
    for (int k = 0; k < 10; k++) {
        for (int j = k + 1; j < 10; j++) {
            if (array[k][j] == 0) {
                response = 1;
            }
            else {
                response = 0;
                return response;
            }
        }
    }

    // testing for zeros lower triangle
    for (int h = 0; h < 10; h++) {
        for (int w = 0; w < h; w++) {
            if (array[h][w] == 0) {
                response = 1;
            }
            else {
                response = 0;
                return response;
            }
        }
    }

    return response;

}