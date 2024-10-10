Author:Kiplangat Alphonce
Date:9/10/2024

#include <stdio.h>

int main() {
    int start, end;

    // Get the range from the user
    printf("Enter start of range: ");
    scanf("%d", &start);
    printf("Enter end of range: ");
    scanf("%d", &end);

    // While loop to print numbers
    while (start <= end) {
        printf("%d\n", start);
        start++;
    }

    return 0;
}