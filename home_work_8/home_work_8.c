#include<stdio.h>
void printStars(int num);
void fib(int max);
int main(){
	printStars(12);
	fib(15);
	return 0;

}


void printStars(int num){
	int i=0;
	while(i<num){
		printf("*");
		i++;
		if (i%4==0){
			printf("\n");
		}

	}

}

void fib(int max){
	int i = 0;
	int i1 = 1;
	int i2 = i + i1;

	while (i<max){
		printf("%d\n", i);
		i = i1;
		i1 = i2;
		i2 = i + i1;
	}
}
