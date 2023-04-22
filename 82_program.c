#include <stdio.h>
void weight(float kg, float *gm, float *ton, float *pds)
{

    *gm = kg * 1000;
    *ton = kg / 1000;
    *pds = 2.205 * kg;
}
int main()
{
    float kg, gm, ton, pds;
    printf("enter the weight of the commodity in kilograms : ");
    scanf("%f", &kg);
    weight(kg, &gm, &ton, &pds);
    printf("%.2f kilograms is equivalent to:\n", kg);
    printf("%.2f grams\n", gm);
    printf("%.2f pounds\n", pds);
    printf("%.4f tonnes\n", ton);
    return 0;
}