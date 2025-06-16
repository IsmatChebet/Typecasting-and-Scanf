#include <stdio.h>


void calculateTotalRevenue() {
    double customer1_spend;
    double customer2_spend;
    double customer3_spend;
    double total_revenue;

    printf("Enter spending for Customer 1 (UGX): ");
    scanf("%lf", &customer1_spend);

    printf("Enter spending for Customer 2 (UGX): ");
    scanf("%lf", &customer2_spend);

    printf("Enter spending for Customer 3 (UGX): ");
    scanf("%lf", &customer3_spend);

    total_revenue = (double)customer1_spend + (double)customer2_spend + (double)customer3_spend;

    printf("\n--- Revenue Details ---\n");
    printf("Customer 1 Spending: UGX %.2lf\n", customer1_spend);
    printf("Customer 2 Spending: UGX %.2lf\n", customer2_spend);
    printf("Customer 3 Spending: UGX %.2lf\n", customer3_spend);
    printf("-------------------------\n");
    printf("Total Revenue: UGX %.2lf\n", total_revenue);
}

int main() {

    calculateTotalRevenue();

    return 0;
}
