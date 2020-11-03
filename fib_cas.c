#include <stdio.h>
#include <math.h>

int main() {
    long double f[15] = {0.0, 0.0, 0.0, 0.0, 0.0,
                         0.0, 0.0, 0.0, 0.0, 0.0,
                         0.0, 0.0, 0.0, 0.0, 0.0};
    int i, j;

    f[3] = 1.0;

    for (i = 4; i < 15; i++) {
        f[i] = f[i-1] * ((sqrt(5.0) + 1.0) / 2.0); /* quadratic formula */
    }

    /* 虽然严格来说这些个货不是 */
    f[2] = f[4] - f[3];  /* 0.618... */
    f[1] = f[3] - f[2];  /* 0.372... */
    f[0] = f[2] - f[1];  /* 0.236... */

    printf("黄金分割数（列）为：\n");
    for (j = 0; j < 15; j++) { /* 输出所有元素 */
        printf("Fib(%d) = %.10Lf\n", j - 3, f[j]);
    }

    return 0;
}
