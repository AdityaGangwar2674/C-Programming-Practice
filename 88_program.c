#include <stdio.h>

void decimalToBinary(int decimal) {
    int binary[32], i = 0;

    // convert decimal to binary
    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal /= 2;
        i++;
    }

    // display binary equivalent
    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
}

int main() {
    int decimal;

    // get decimal input from user
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    // convert decimal to binary and display result
    decimalToBinary(decimal);

    return 0;
}
