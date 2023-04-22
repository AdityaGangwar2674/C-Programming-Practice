#include <stdio.h>
#include <conio.h>

int main()
{
    float r, g, b, rf, gf, bf, w, c, y, m, k, max;

    printf("enter the value of red (0 to 255) :");
    scanf("%f", &r);
    printf("enter the value of green (0 to 255) :");
    scanf("%f", &g);
    printf("enter the value of blue (0 to 255) :");
    scanf("%f", &b);

    rf = r / 255;
    gf = g / 255;
    bf = b / 255;
    printf("Red: %f\nGreen: %f\nBlue: %f\n\n", rf, gf, bf);
    max=rf;
    if (max<gf)
    {
        max=gf;
    }
    else if (max<bf)
    {
        max=bf;
    }

    w = max;
    printf("the value of white is %f\n\n", max);

    c = (w - rf) / w;
    m = (w - gf) / w;
    y = (w - bf) / w;
    k = 1 - w;

    printf("the value of black is %f\n", k);
    printf("the value of cyan is %f\n", c);
    printf("the value of yellow is %f\n", y);
    printf("the value of magenta is %f\n", m);

    return 0;
}

