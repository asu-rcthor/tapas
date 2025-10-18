#include <quadmath.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    __float128 a = 1.0Q;
    __float128 b = 2.0Q;
    __float128 c = 3.0Q;
    __float128 d = 4.0Q;
    __float128 e = 5.0Q;
    __float128 f = 6.0Q;

    __float128 result = a + b * c - d / e + f;

    printf("Result: %.36Qg\n", result);

    char buffer[128];
    int len = quadmath_snprintf(buffer, sizeof(buffer), "%.36Qg", result);
    if (len < 0) {
        fprintf(stderr, "Error formatting result\n");
        return 1;
    }
    printf("Formatted result: %s\n", buffer);

    return 0;
}