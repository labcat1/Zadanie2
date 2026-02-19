#include <stdio.h>
#include <math.h>
int main(void)
{
    int tester;
    int possible = 1;
    float input;
    int is_prime;
    scanf("%f", &input);
    while (possible < input) {
        tester = 2;
        while (tester<(sqrt(possible)+1) && is_prime != 0) {
            if (((possible % tester) == 0) && (possible != tester)) {
                is_prime = 0;
                break;
            }
            tester++;
        }
        if (is_prime == 1) {
            printf("%d \n",(int)possible);
        }
        is_prime = 1;
        possible++;
    }
}