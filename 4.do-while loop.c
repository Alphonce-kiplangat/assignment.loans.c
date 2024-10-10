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

    int i = start;

    // Mimic do-while loop to print numbers
    do {
        printf("%d\n", i);
        i++;
    } while (i <= end);

    return 0;
}