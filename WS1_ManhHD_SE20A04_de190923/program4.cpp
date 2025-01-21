#include <stdio.h>
//program4
int main() {
    int x, y, t;

    do {
        printf("nhap 2 so : ");
        scanf("%d %d", &x, &y);

        if (x != 0 && y != 0) {
            t = x; 
            x = y;
            y = t;

            printf("hoan doi gia tri: x = %d, y = %d\n", x, y);
        }
    } while (x != 0 && y != 0);

    return 0;
}