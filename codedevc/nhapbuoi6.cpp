#include <stdio.h>
#include <math.h>
//kiem tra 1 so nguyen duong khong am co phai la so chinh duong hay khong neu co in yes nguoc lai in no
//void chinhphuong(int n){  //cach2: int chinhphuong(int n){
                          //  int can = sqrt(n);
//	int can = sqrt(n);    // if (can*can==n)return 1; n la so chinh phuong
//	if(can*can==n) printf("yes\n");//else return 0;} n khong phai la so chinh puong
//	else printf("no\n");// int main(){
//}                       //int n =16;
//int main(){             //if(chinhphuong(n)==1) printf("yes\n);
//	int n = 16 ;        //else printf("no");
//	chinhphuong(n);     //return 0;}
//	return 0;
//}

// kiem tra 1 so co phai la so chua chu so 6 va co tong chu so chia het cho 8 

int check1(int n){
	while(n){
		if(n%10==6)return 1;
		n/=10;
	}
	return 0;
}

int check2(int n){
	int sum = 0;
	while(n){
		sum+= n%10;
		n/=10;
	}
	return sum %8==0;
}

int main(){
	for(int i =1 ; i<= 1000 ;i++){
		if(check1(i)==1 && check2(i)==1)  printf("\n%d ", i);
	}
	return 0;
}
