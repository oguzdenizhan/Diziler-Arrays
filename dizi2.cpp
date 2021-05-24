#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
	
srand(time(NULL));
	int i ,x[10];
	
	for(i=1;i<=10;i++){
		
		x[10]=rand ()%101;
		
		printf("x[%d]= %d.\n",i,x[10]);
	}
	
	
	
	return 0;
}
