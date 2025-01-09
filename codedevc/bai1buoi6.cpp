#include <stdio.h>

#include <stdio.h>

int main() {
    int height, width;

    printf("Nhap so hang va so cot cua hinh binh hanh: ");
    scanf("%d %d", &height, &width);

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (i == 0 || i == height - 1 || j == 0 || j == width - 1) {
                printf("*");
            } else {
                printf(".");
            }
        }
        printf("\n");
    }

    return 0;
}

