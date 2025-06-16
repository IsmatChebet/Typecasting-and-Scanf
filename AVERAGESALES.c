#include <stdio.h>
#include <stdlib.h>
int main(){

    int total_sales, days;

    printf("Enter total sales (UGX): ");
    scanf("%d", &total_sales);

    printf("Enter number of days : ");
    scanf("%d", &days);

    float average_sales = (float)total_sales / days;
    printf("Average sales per day : UGX %.2f\n", average_sales);

    return 0;
}


