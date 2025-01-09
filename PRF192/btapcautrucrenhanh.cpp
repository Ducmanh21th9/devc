#include <stdio.h>

int main() {
    int A;
    printf("Nhap so tien A (trong khoang 1000 - 50000, va phai la so trong nghin): ");
    scanf("%d", &A);

    if (A % 1000 != 0 || A <= 0 || A > 50000) {
        printf("So tien khong hop le. Vui long nhap lai.\n");
    } else {
        printf("Cac phuong an doi tien la:\n");
        int x, y, z; // x: so to 1000, y: so to 2000, z: so to 5000
        for (x = 0; x <= A / 1000; x++) {
            for (y = 0; y <= A / 2000; y++) {
                for (z = 0; z <= A / 5000; z++) {
                    if (1000 * x + 2000 * y + 5000 * z == A) {
                        printf("1000 x %d, 2000 x %d, 5000 x %d\n", x, y, z);
                    }
                }
            }
        }
    }

    return 0;
}

