#include <math.h>
#include <stdio.h>
#include <conio.h>

int main() {
    printf("ceil(+2.4) = %+.1f\n", ceil(2.4));
    printf("ceil(-2.4) = %+.1f\n", ceil(-2.4));
    printf("ceil(-0.0) = %+.1f\n", ceil(-0.0));
    printf("ceil(-Inf) = %+f\n", ceil(-INFINITY));

    _getch();
    return 0;
}