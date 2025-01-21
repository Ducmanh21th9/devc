#include<stdio.h>
//program2
int main(){
	double a;//a:yearly personal income
	int n;//n:number of dependents
	printf("Nhap thu nhap cua ban trong nam : ");
	scanf("%lf",&a);
	printf("So nguoi phu thuoc : ");
	scanf("%d",&n);
	
	double pa = 9000000;
	double pd = 3600000;
	double tf = 12*(pa + n*pd);
	
	double ti = a - tf;
	if(ti <0){
		ti=0;
	}
	
	double incomeTax=0;
	switch (1){
        case 1:
        if(ti <= 5000000){
            incomeTax = ti *0.05;
            break;
        }
        case 2:
        if(ti <= 10000000){
            incomeTax = 5000000 * 0.05 + (ti - 5000000)*0.10;
            break;
        }
        case 3:
            if (ti <= 18000000) {
                incomeTax = 5000000 * 0.05 + 5000000 * 0.10 + (ti - 10000000) * 0.15;
                break;
            }
        case 4:
            if (ti > 18000000) {
                incomeTax = 5000000 * 0.05 + 5000000 * 0.10 + 8000000 * 0.15 + (ti - 18000000) * 0.20;
                break;
            }
    }
    printf("Thu nhap duoc mien thue: %.0f\n", tf);
    printf("Thu nhap chiu thue: %.0f\n", ti);
    printf("Thue thu nhap: %.0f\n", incomeTax);

	return 0;
}
