#include <stdio.h>

int main() {
    int N1, N2, i, sum_even = 0, sum_odd = 0;

    printf("Enter two numbers (N1 < N2): ");
    scanf("%d %d", &N1, &N2);

    printf("Even numbers between %d and %d are: ", N1, N2);
    for (i = N1; i <= N2; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
            sum_even += i;
        }
    }

    printf("\nOdd numbers between %d and %d are: ", N1, N2);
    for (i = N1; i <= N2; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
            sum_odd += i;
        }
    }

    printf("\nSum of even numbers: %d\n", sum_even);
    printf("Sum of odd numbers: %d\n", sum_odd);

    return 0;
}
