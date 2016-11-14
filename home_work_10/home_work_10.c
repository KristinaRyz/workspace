/*
 * home_work_10.c
 *
 *  Created on: 14.11.2016
 *      Author: Кристина Рыжикова
 */
#include<stdio.h>
int main(){
	int i, j, n=20;
	for(j = 0; j<n; j++){
		for(i =0; i<n; i++){//inner loop
			if(i==0 || i == n-1||j ==n-1 || i==j || j==0 || i+j ==n-1){
				printf("* ");
				//			}   else if (j == n-2&& i!=1 && i!=n-2){
				//				printf("* ");
				//  		}else if (j == n-3 && i!=n+4 && i!=n+2 && i!=1 && i!=n-2){
				//				printf("* ");
				//			}else if (j == n-4 && i!=n-2 && i!=1 && i!=2 && i!=n-3){
				//				printf("* ");
			}else
				printf("  ");
		}
		printf("\n");
	}

	return 0;
}

