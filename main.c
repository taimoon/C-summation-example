#include<stdio.h>
//3 common ways
//increment approach using for loop
int sum_inc_v1(int n){
	int sum = 0;
	for(int i = 1; i <= n; ++i)
		sum += i; // sum = sum + i
	return sum;
}
//decrement approach
//Note that this approach doesn't require addtional variable like in increment
//this works due to the fact that the passed arguments are local to the function
//i.e.: the change on arguments doesn't affect outside
int sum_dec_v1(int n){
	int sum = 0;
	for(n; n > 0; n--)
		sum += n;
	return sum;
}
//while loop
int sum_inc_w1(int n){
	int sum = 0;
	int i = 1;
	while(i <= n){
		sum += i;
		++i;
	}
	return sum;
}
//end of common ways
/**
 *	for(<initialiser>; <bool-testing-expr>; <iterating-update expr>)
 *  note that, they can multiple and seperated by comma ,.
 */
//inspired by the method of double pointer
int sum_dptr_v1(int n){
	int sum = 0;
	for(int i = 0; n != i; ++i, --n)
		sum += i + n;
	return sum+n;
}
//Exploit the properties of post increment
int sum_inc_v2(int n){
	int sum = 0;
	for(int i = 0; i++ < n;)
		sum += i;
	return sum;
}
//exploit the properties of for loop
int sum_inc_v5(int n){
	int sum = 0;
	for(int i = 1; i <= n; sum += i, ++i);
	return sum;
}
//additional ways
int sum_inc_v3(int n){
	int sum = 0;
	for(int i = 1; i <= n;)
		sum += i++;
	return sum;
}
int sum_inc_v4(int n){
	int sum = 0;
	for(int i = 0; i < n;)
		sum += ++i;
	return sum;
}
int sum_inc_v6(int n){
	int sum = 0;
	for(int i = 0; i < n; ++i, sum += i);
	return sum;
}
int sum_inc_v7(int n){
	int sum = 0;
	for(int i = 0; i < n; sum += ++i);
	return sum;
}
int sum_inc_v8(int n){
	int sum = 0;
	for(int i = 1; i <= n; sum += i++);
	return sum;
}
//end of increment approach
int sum_dec_v2(int n){
	int sum = 0;
	for(; n > 0; sum += n--);
	return sum;
}
int sum_dptr_v2(int n){
	int sum = 0;
	for(int i = 0; n != i; sum+= i++ + n--);
	return sum+n;
}
//while looping
int sum_dec_w1(int n){
	int sum = 0;
	while(n > 0) sum += n--;
	return sum;
}
int sum_dec_w2(int n){
	int sum = 0;
	while(n-- > 0) sum += n+1;
	return sum;
}
int main(){
	int n = 10;
	int i = 0;
	printf("sum_inc_v%d = %d\n", ++i, sum_inc_v1(n));
	printf("sum_inc_v%d = %d\n", ++i, sum_inc_v2(n));
	printf("sum_inc_v%d = %d\n", ++i, sum_inc_v3(n));
	printf("sum_inc_v%d = %d\n", ++i, sum_inc_v4(n));
	printf("sum_inc_v%d = %d\n", ++i, sum_inc_v5(n));
	printf("sum_inc_v%d = %d\n", ++i, sum_inc_v6(n));
	printf("sum_inc_v%d = %d\n", ++i, sum_inc_v7(n));
	printf("sum_inc_v%d = %d\n", ++i, sum_inc_v8(n));
	i = 0;
	printf("sum_inc_w%d = %d\n", ++i, sum_inc_w1(n));
	i=0;
	printf("sum_dec_v%d = %d\n", ++i, sum_dec_v1(n));
	printf("sum_dec_v%d = %d\n", ++i, sum_dec_v2(n));
	i=0;
	printf("sum_dec_w%d = %d\n", ++i, sum_dec_w1(n));
	printf("sum_dec_w%d = %d\n", ++i, sum_dec_w2(n));
	i=0;
	printf("sum_dptr_v%d = %d\n", ++i, sum_dptr_v1(n));
	printf("sum_dptr_v%d = %d\n", ++i, sum_dptr_v2(n));
	
	return 0;
}
