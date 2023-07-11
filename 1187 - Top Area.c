#include <stdio.h>

int main() {
    char O;
    int i, j, count = 30;
    double s = 0.0, n[12][12];

    scanf("%c", &O);

    for (i = 0; i <= 11; i++) {
        for (j = 0; j <= 11; j++) {
            scanf("%lf", &n[i][j]);
            if (j > i && i + j <11) {
                s += n[i][j];
            }
        }
    }

    if (O == 'S') {
        printf("%.1lf\n", s);
    } else if (O == 'M') {
        printf("%.1lf\n", s / count);
    }

    return 0;
}
