#include <stdio.h> 

#include <stdlib.h>

int main(void){

	int i51,j51;

	for (i51=1;i51<=9;i51++){ 

		for(j51=1;j51<=9;j51++)  

		printf("%d*%d=%2d  ",i51,j51,i51*j51); 

		printf("\n"); 

     }

	system("pause");  

	return 0;

}
