#include<stdio.h>
int table(int n);
int main(){

	int sum = table(10);
	printf("sum = %d\n",sum);
	return 0;
}
int table (int n){
	int res = 0;
	for(int x = 1; x<=n; x++){
		res = res + x;
	}
		return res;
	}



