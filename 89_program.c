#include <stdio.h>

void decimalToBinary(int num) {
    if (num > 1) {
        decimalToBinary(num / 2);
    }
    printf("%d", num % 2);
}

int main() {
    int decimalNum;

    // get decimal number from user
    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);

    // convert decimal to binary using recursion
    printf("The binary equivalent of %d is: ", decimalNum);
    decimalToBinary(decimalNum);

    return 0;
}
