int* decrypt(int* code, int codeSize, int k, int* returnSize){
    int* result = (int*)malloc(codeSize * sizeof(int));
    *returnSize = codeSize;

    for (int i = 0; i < codeSize; i++) {
        result[i] = 0;

        if (k == 0) {
            result[i] = 0;
        } else {
            int sum = 0;

            for (int j = 1; j <= abs(k); j++) {
                int idx;

                if (k > 0) {
                    idx = (i + j) % codeSize;  // next k elements (wrap around)
                } else {
                    idx = (i - j + codeSize) % codeSize;  // previous k elements (wrap around)
                }

                sum += code[idx];
            }

            result[i] = sum;
        }
    }

    return result;
}
