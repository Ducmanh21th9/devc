#include <stdio.h>
//program 1
int main() {
    float num1, num2, kq;
    char i;

    printf("Nhap bieu thuc : ");
    scanf("%f %c %f", &num1, &i, &num2);

    switch (i) {
        case '+':
            kq = num1 + num2;
            break;
        case '-':
            kq = num1 - num2;
            break;
        case '*':
            kq = num1 * num2;
            break;
        case '/':
            kq = num1 / num2;
            break;
        default:
            printf("Loi: Toan tu khong hop le\n");
            return 1;
    }

    printf("Ket qua: %.2f\n", kq);
    return 0;
}