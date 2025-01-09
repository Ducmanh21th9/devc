#include <stdio.h>

int main() {
    int a, b, c;
    int total_length;
    printf("nhap do dai cac canh");
    scanf("%d %d %d", &a, &b, &c);
    
    if (a > 0 && b > 0 && c > 0) {  
        total_length = 4 * (a + b + c);

        printf("%d\n", total_length);
    } else {
        printf("Cac gia tri nhap vao phai la so nguyen duong!\n");
    }

    return 0;
}




