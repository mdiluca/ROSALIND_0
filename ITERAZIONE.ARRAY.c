#include <stdio.h>

int main(){

int c[30];

for (int i = 0; i <= 29; i = i + 1){	c[i] = i;}

printf("\n");
for (int i = 0;           i <= 29; i = i + 2){	printf("%d (%d- esimo) \n", c[i], i);         }
printf("\n");
for (int i = 0;     (i * 2) <= 29; i = i + 1){	printf("%d (%d- esimo) \n", c[i * 2], i * 2); }
int r = 3;
printf("\n");
for (int i = 0;     (i * r) <= 29; i = i + 1){	printf("%d (%d- esimo) \n", c[i * r], i * r); }
// coppie adiacenti
printf("\n");
r = 2;
for (int i = 0; (i * r + 1) <= 29 ; i = i + 1){	printf("%d%d-\t", c[i * r],  c[i * r + 1]);    }
printf("\n");
r = 3;
for (int i = 0; (i * r + 2) <= 29 ; i = i + 1){	printf("%d%d%d-\t", c[i * r],  
                                                                   c[i * r + 1],
																   c[i * r + 2]);             }
printf("\n");
r = 4;
for (int i = 0; (i * r + 3) <= 29 ; i = i + 1){	printf("%d%d%d%d-\t", c[i * r],  
                                                                   c[i * r + 1],
																   c[i * r + 2],
																   c[i * r + 3]);             }         

printf("\n\n");
																   
int indice = 0;
while(indice <= 29){
	printf("%d ", c[indice]);
	indice++;
}			   

printf("\n\n");
																   
int index = 0;
int f = 2;
while(index <= 29){
	printf("%d ", c[index]);
	index = index + f;
}			   

printf("\n\n");

index = 0;
r = 2;
int i = 0;

while(index <= 29){
	
	printf("%d ", c[index]);
    // index arithmetic
	i++;
	index = i * r;
}			   



printf("\n\n");

index = 0;
r = 4;
i = 0;
int el = 3;

while(index <= 29){

	int j = 0;
	while (j < el && index + j <= 29){
	
	printf("%d ", c[index + j]);
    
	j++;
	
	
    }
    printf("-\n");
	// index arithmetic
	i++;
	index = i * r;
}			   


/*
printf("\n\n");

index = 0;
int baseIndex = 0;
r = 5;
i = 0;
el = 3;

while(index <= 29){

	int offset = 0;
	while (offset < el){
	index = baseIndex + offset;
	printf("%d ", c[index]);
    
	offset++;
	
	
    }
    printf("-");
	// index arithmetic
	i++;
	baseIndex = i * r;
}			   

*/





// 0 2 4 6 8
// i * 2 per 5 volte
// 0* 2 1 * 2 2 * 2 3 * 2 4 * 2
// 0 + 2, 2 + 2, 4 + 2, 6 + 2

// cosa controllo con gli array?
// quello che uso come indice
// i * 2

}
