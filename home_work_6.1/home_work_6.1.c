#include <stdio.h>
void fan(int mode);
int main(){
fan(4);
	return 0;
}
void fan(int mode){
	if(mode<0||mode>3){
		printf("ERROE:wrong mode \n");
	return;
	}
	if(mode == 1){
		printf("mode=speed %d \n",mode);
	}
	else if (mode == 2){
		printf("mode=speed %d \n",mode);
	}

	else if (mode == 3){
			printf("mode=speed %d \n",mode);
		}

}
