#include <stdio.h>
#include <math.h>
int main(void)
{
    float tester;
    float possible = 1;
    float N;
    float k;
    int c;
    scanf("%f", &N);
    while (possible<N) {
        tester = 2;
        while (tester<(sqrt(possible)+1) && c != 1) {
            k = possible/tester;
            if (((possible/tester) == (int)k) && (possible != tester)) {
            c = 1;
            }
            tester++;
        }
        if (c == 0) {
            printf("%d \n",(int)possible);
        }
        c = 0;
        possible++;
    }
}