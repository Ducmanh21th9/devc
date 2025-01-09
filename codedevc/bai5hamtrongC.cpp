#include <stdio.h>
#include <math.h> //ham trong ngon ngu lap trinh c
//form: return_value_type function_name (parameter_list){
//	statement;
//}
// xay dung mot ham in dong xin chao ra man hinh


// xay dung ham de tinh tong cac so tu nhien tu 1 toi n
//int tong(int n){
//	int sum = 0;
//	for(int i =1 ;i <=n ;i++)
//	sum+= i;
//	return sum;
//}


//int main(){
//    int x = 10;
//	int kq = tong(x);// function call : loi goi ham
//	printf("%d" ,kq);
//	return 0;      
//}
// tinh tong S(n)= 1+ 1/2 + 1/3 +...+ 1/n
double s (int n){
	double res = 0;
	for( int i = 1;i <= n;i++)
	res += (double) 1 /  i;
	return res;
}
int main(){

	int n = 10;
	double res = s(n);
	printf("%.2lf\n" , res);
	return 0;
}

