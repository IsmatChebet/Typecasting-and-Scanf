#include <stdio.h>


double commissioncalculation() {
    double salesVolume;
    double commissionRate;
    double commission;


    printf("Enter Sales Volume : ");
    scanf("%lf", &salesVolume);


    printf("Enter Commission Rate : ");
    scanf("%lf", &commissionRate);


    commission = commissionRate * salesVolume;

    printf("Commission = %.2lf\n", commission);
    return 0;
}
int main() {

    commissioncalculation();

    return 0;
}
