#include <stdio.h>

int main(){

char dna[] = {'A', 'C', 'T', 'A','A','A','A','A'};
const int  numberOfNucleotides = 8;
const int maxIndex = numberOfNucleotides - 1;

char reverseDna[numberOfNucleotides];

char compRevDna[numberOfNucleotides];


printf("\n");
printf("dna:");
printf("\n");
for (int i = 0; i < numberOfNucleotides; i++){
   
	printf("%c\t", dna[i]);

}

// inverting dna in reverseDna

for (int i = 0; i < numberOfNucleotides; i++){
   
	reverseDna[maxIndex - i] = dna[i];

}



printf("\n");
printf("reverted dna:");
printf("\n");

for (int i = 0; i < numberOfNucleotides; i++){
   
	printf("%c\t", reverseDna[i]);

}

// complement reverseDna

for (int i = 0; i < numberOfNucleotides; i++){
    
    if (reverseDna[ i] == 'T'){
    	 compRevDna[i] = 'A'; 
	}
	   
}

for (int i = 0; i < numberOfNucleotides; i++){
    
    if (reverseDna[ i] == 'A'){
    	 compRevDna[i] = 'T'; 
	}
	   
}
for (int i = 0; i < numberOfNucleotides; i++){
    
    if (reverseDna[ i] == 'C'){
    	 compRevDna[i] = 'G'; 
	}
	   
}

for (int i = 0; i < numberOfNucleotides; i++){
    
    if (reverseDna[ i] == 'G'){
    	 compRevDna[i] = 'C'; 
	}
	   
}

printf("\n");
printf("complemented and reverted dna:");
printf("\n");

for (int i = 0; i < numberOfNucleotides; i++){
   
	printf("%c\t", compRevDna[i]);

}

}
