#include <stdio.h>


void calculateStraightLineDepreciation() {

    double asset_cost = 5000;
    double residual_value = 500;
    int useful_life = 5;
    double annual_depreciation;


    annual_depreciation = (asset_cost - residual_value) / useful_life;

    printf("Asset Cost: UGX %.2lf\n", asset_cost);
    printf("Residual Value: UGX %.2lf\n", residual_value);
    printf("Useful Life: %d years\n", useful_life);
    printf("Annual Straight-Line Depreciation: UGX %.2lf\n", annual_depreciation);
}


int main() {

    calculateStraightLineDepreciation();

    return 0;
}
