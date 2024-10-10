Author:Kiplangat Alphonce
Date:9/10/2024

#include <stdio.h>

int main() {
    int start, end, i;

    // Get the range from the user
    printf("Enter start of range: ");
    scanf("%d", &start);
    printf("Enter end of range: ");
    scanf("%d", &end);

    // For loop to print numbers
    for (i = start; i <= end; i++) {
        printf("%d\n", i);
    }

    return 0;
}