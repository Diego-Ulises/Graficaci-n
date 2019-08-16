#include <stdio.h>
#include <stdlib.h>

void imprime(int *); //prototipo de función
void matrix(int *);

int main(){
//int aux[3]={1,2,3};
int auxa[2][3]={{1,1,1},{2,2,2}};
//imprime(aux);
matrix(*auxa);

//printf(" %d %d\n ",aux[0],aux[1]);
return 0;
}

void matrix(int *aux){
	//printf("%p -> %d",aux+3,*(aux+3));
	
	int i;
	int j;
	for (i = 0; i < 2; i++){
		for (j = 0; j < 3; j++){
			printf(" %d ",*(aux+i*2+j));
		}
		printf("\n");
	}
	
	
	
	
	}


void imprime (int *aux){
printf(" %p %d ",aux,*aux);
printf(" %p %d ",aux+1,*aux+1);
printf(" %p %d ",&aux[2],aux[2]);

aux[0]=8;
*(aux+1)=9;

//int i;
//for(i=0; i<10; i++){
////llenar arr forma 1
//aux[i]=i;

////llenar forma 2
//*(aux+i)=i;
//}



}
