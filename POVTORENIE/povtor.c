#include<stdio.h>
void print_stars(int stars, int inRow);
int main(){
	print_stars(16,4);
	return 0;
}
void print_stars(int stars, int inRow){
	int counter = 0;
	for(;stars>0;){
		printf("*");
		counter++;
		if(counter == inRow){//inRow=kol-vo zvezd v stroke
			printf("\n");
			counter = 0;//bez etogo dalwe budet pechatat zvezdi v stroku
		}
		stars--;
	}
	printf("\n");//nov func s novoi stroki
}
