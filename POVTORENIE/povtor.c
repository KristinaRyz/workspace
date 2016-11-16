#include<stdio.h>
	void printTreangle(int num);
int main(){
	return 0;
	void printTreangle(int num){
		int i, j;
		for(j = 1; j<=num; j++){
			for(i =1; i<=j; i++){//inner loop



				if(i==0 || i == 6||j ==6 || i==j || j==0 || j == i+1 ||j == i+2||j == i+3||j == i+4){
					//			if(i==0 || i == 6||j ==6 || i==j || j==0 || j == i-1 ||j == i-2||j == i-3||j == i-4){
					printf("* ");
				}else
					printf("  ");
			}
			printf("\n");
		}
	}

