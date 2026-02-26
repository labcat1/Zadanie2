#include <stdio.h>
#include <math.h>
double piPart(double number) {
    double part = 4/(2*number-1);
    if ((int)number%2 == 0) {
        part = -1*part;
    }
    return part;
}
double pi(double limit) {
    double pi1 = piPart(1);
    double pi2 = pi1 + piPart(2);
    double pi3 = pi2 + piPart(3);
    double n = 4;
    while (true) {
        if (fabs((pi1 + pi2)/2 - (pi2 + pi3)/2) < limit){return (int)((pi3 + pi2)/(2*limit*10));}
        else {
            pi1 = pi2; pi2 = pi3; pi3 = pi3 + piPart(n);
            n++;
        }
    }
}
int main(void)
{
    double input;
    scanf("%lf", &input);
    double limit = 1/pow(10, (input+1));
    double the_pi = pi(limit);
    printf("%.*lf\n",(int)input, (double)the_pi*limit*10);
}
