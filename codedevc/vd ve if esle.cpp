// nhap vao 1 thang trong nam va in ra so ngay tuong ung , bo qua nam nhuan
#include <stdio.h>
#include <math.h>
int main(){
	//int n;
	//scanf("%d", &n);
	//if(n == 1){ // c2: gop cac thang co cung ngay if(n==1 || n==6 || n==8 || n==10)
//		printf("31 ngay");
//	}
//	else if(n==2){
//		printf("28 ngay");
//	}
//	else if(n==3){
//		printf("30 ngay");
//	}
//	else if(n==4){
//		printf("30 ngay");
//	}
//	else if(n==5){
//		printf(" 30 ngay");
//	}
//	else if(n==6){
//		printf("31 ngay");
//	}
//	else if(n==7){
//		printf(" 30 ngay");
//	}
//	else if(n==8){
//		printf("30 ngay");
//	}
//	else if(n==9){
//		printf("30 ngay");
//	}
//	else if(n==10){
//		printf("31 ngay");
//	}
//	else if(n==11){
//		printf("30 ngay");
//	}
//	else if(n==12){
//		printf("30 ngay");
//	}
//	else{
//		printf(" khong co du lieu");
//	}
	//char
	// kiem tra ki tu la chu so, chu in hoa , chu in thuong , la chu cai , chuyen ki tu tu in thuong sang in hoa va nguoc lai.
	// bang ma ascii 
	// A-Z : 65-90
	// a-z : 97-122
	// so 0-9 : 45-57
	char kitu;
	scanf("%c", &kitu);
	//if((kitu >= 65) &&(kitu <= 90 )){ // if((kitu >= 'A') && (kitu <= 'Z'))
	//	printf("chu cai in hoa");
	//}
	//else if((kitu >= 97) && (kitu <= 122)){ // if((kitu >= 'a') && (kitu <= 'z'))
	//	printf("chu cai in thuong");
	//}
	//else if((kitu >= '0') && (kitu <= '9')){ //// if((kitu >= 45) && (kitu <= 57))
	//	printf("la chu so");
	//}
	// chuyen in hoa sang in thuong va nguoc lai 
	if(kitu >= 'A' && kitu<= 'Z'){ // (kitu >= 'a' && kitu <= 'z')
		kitu += 32; //kitu -= 32 ( in thuong thanh in hoa)
	}
	else if(kitu >= 'a' && kitu <= 'z'){
			kitu -= 32;}
	printf("%c", kitu);
	return 0;
}
