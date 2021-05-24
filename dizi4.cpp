#include <stdio.h>

int main(){
	
    char str[50] = "afzrbei";
    int i, u=7;
    
    for(i=3;i<13;i+=3) {
    	
    if(i > u) 
    
    printf("%c",str[i%u]);
    
    else 
    
    printf("%c",str[i]);
    
}
return 0;
}

