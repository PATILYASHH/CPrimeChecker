#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("%d is a prime number.\n", num);
return;
    } else {
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                printf("%d is not a prime number.\n", num);

              return;

                break;
            }
        }
    }

  printf("%d is a prime number.\n", num);

    return 0;
}
