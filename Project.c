#include <stdio.h>
#define max 50
int main(){
	int i=0,tmp,k=0,m=0,sayac=0;
	char kelime[max],devam;
	do{
	printf("Kelime giriniz.\n");
	scanf(" %s",&kelime);
	while(kelime[k]!='\0'){
	k++;
	}
	printf("Kelime:%s\n",kelime);
	do{
		tmp=kelime[0];
		while(i<k){
		kelime[i]=kelime[i+1];
		i++;	
		}
		i=0;
		m++;
		kelime[k-1]=tmp;
		sayac++;
		printf("%d. Adim: Kelime:%s\n",sayac,kelime);
	}
	while(m<k);
	m=0;
	sayac=0;
	k=0;		
	printf("\nTekrar denemek icin E ya da e?");
    scanf(" %c", &devam);
}
	while (devam == 'E' || devam == 'e');

	
	
	
	
	return 0;
}
