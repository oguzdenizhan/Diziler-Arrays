#include <stdio.h>

int main(){
	int boyut;
	
	printf("Toplam paket adedi:\n");
	scanf("%d",&boyut);
	
	int dizi[boyut];
	int toplam=0;
	
	for(int i=0;i<boyut;i++){
		
	printf("%d. paketteki urun adedi:",i+1);
	scanf("%d",&dizi[i]);
	
	toplam = toplam+ dizi[i];
		
	
	}
		
	printf("toplam urun adedi : %d",toplam);
	
	
	return 0;
}
