#include<stdio.h>
int main(){
	int i, n, sum = 0;
	n=10;
	i=1;
	while (i<=n){
		if (i%2!=0){
			printf("%d\n",i);
		}
		i++;
		sum += i;


	}

	printf("sum = %d\n", sum);

	return 0;
}
