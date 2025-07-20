 #include <stdbool.h>

// Function to calculate sum of squares of digits
int sumOfSquares(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n = n / 10;
    }
    return sum;
}

bool isHappy(int n) {
    int slow = n;
    int fast = n;

    // Use Floyd's Cycle Detection (tortoise and hare)
    do {
        slow = sumOfSquares(slow);          // one step
        fast = sumOfSquares(sumOfSquares(fast));  // two steps
    } while (slow != fast);

    return (slow == 1);
}
