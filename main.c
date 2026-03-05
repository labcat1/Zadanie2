#include <stdio.h>
#include <math.h>
bool isPrime(int possible)
{
    int tester = 2;
    while (tester < (sqrt(possible) + 1)) {
        if ((possible % tester) == 0 && (possible != tester)) {
            return false;
        }
        tester++;
    }
    return true;
}
int main(void)
{
    int possible = 2;
    float input;
    scanf("%f", &input);
    while (possible < input) {
        if (isPrime(possible)) {
            printf("%d\n", possible);
        }
        possible++;
    }
}