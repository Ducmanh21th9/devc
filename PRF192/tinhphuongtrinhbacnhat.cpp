#include<stdio.h>
#include<math.h>

int main(){
float a,b;
	printf("nhap vao he so a :");
	scanf("%f", &a);
	printf("nhap vao he so b :");
	scanf("%f",&b);
	
	if(a==0){
		printf("phuong trinh vo nghiem");
	}
	else{
		printf("phuong trinh co 1 nghiem duy nhat : %f\n",(-b/a));
	}
}