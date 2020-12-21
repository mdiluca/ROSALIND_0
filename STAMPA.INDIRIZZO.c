#include <stdio.h>
int main(){

char S1[10];
char S2[]={'A','C','G','A','G','A','C','C','G','A'};
int i=0;
int j=9;
for(i=0;i<10;i++){
	S1[j]=S2[i];
	j=j-1;
}
for (int k = 0; k < 10; k++)printf("%c ", S1[k]);
printf("\n");	
for (int k = 0; k < 10; k++)printf("%c ", S2[k]);
}
