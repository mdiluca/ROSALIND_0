#include <stdio.h>

int main(){

char dna[] = {'a', 'c', 't', 'a'};
const int  numberOfNucleotides = 4;
char rna[numberOfNucleotides];

printf("\ndna:\n");
for (int i = 0; i < numberOfNucleotides; i++){
   
	printf("%c\t", dna[i]);

}

for (int i = 0; i < numberOfNucleotides; i++){
	rna[i] = dna[i];
	if (dna[i] == 't'){
		rna[i] = 'u';
	}
}

printf("\nits rna transcription:\n");
for (int i = 0; i < numberOfNucleotides; i++){
   
	printf("%c\t", rna[i]);

}



}
