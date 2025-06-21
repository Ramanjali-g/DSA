int findNumbers(int* nums, int numsSize) {
    int count = 0;
    
    // Iterate through each number in the array
    for (int i = 0; i < numsSize; i++) {
        int num = nums[i];
        int digits = 0;
        
        // Count the number of digits in the current number
        while (num > 0) {
            num /= 10;
            digits++;
        }
        
        // If the number of digits is even, increment the count
        if (digits % 2 == 0) {
            count++;
        }
    }
    
    return count;
}