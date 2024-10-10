Author:Kiplangat Alphonce
Date:9/10/2024

#include <stdio.h>

float calculate_bill(float units_consumed) {
    float rate, total_bill;

    if (units_consumed <= 199) {
        rate = 1.20;
    } else if (units_consumed < 400) {
        rate = 1.50;
    } else if (units_consumed < 600) {
        rate = 1.80;
    } else {
        rate = 2.00;
    }

    // Calculate the basic bill
    total_bill = units_consumed * rate;

    // Apply surcharge if the bill exceeds Kshs. 400
    if (total_bill > 400) {
        total_bill += total_bill * 0.15;  // 15% surcharge
    }

    // Ensure minimum bill of Kshs. 100
    if (total_bill < 100) {
        total_bill = 100;
    }

    return total_bill;
}

int main() {
    int customer_id;
    char customer_name[100];
    float units_consumed, total_bill, rate;

    // Input customer details and units consumed
    printf("Enter Customer ID: ");
    scanf("%d", &customer_id);
    printf("Enter Customer Name: ");
    scanf("%s", customer_name);
    printf("Enter Units Consumed: ");
    scanf("%f", &units_consumed);

    // Calculate the total bill
    total_bill = calculate_bill(units_consumed);

    // Determine the rate based on units consumed
    if (units_consumed <= 199) {
        rate = 1.20;
    } else if (units_consumed < 400) {
        rate = 1.50;
    } else if (units_consumed < 600) {
        rate = 1.80;
    } else {
        rate = 2.00;
    }

    // Display the bill details
    printf("\nCustomer ID: %d\n", customer_id);
    printf("Customer Name: %s\n", customer_name);
    printf("Units Consumed: %.2f\n", units_consumed);
    printf("Charges per Unit: %.2f\n", rate);
    printf("Total Amount to Pay: Kshs. %.2f\n", total_bill);

    return 0;
}
