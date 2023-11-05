#include <stdio.h>
#include <string.h>

// fungsi untuk meng-enkripsi sebuah kalimat
void encrypt(const char *input, char *output) {
	int i;
	for(i = 0; i < strlen(input); i++) {
		// pengecekan apakah char tersebut merupakan huruf vokal atau huruf konsonan dan karakter lain
		if(input[i] == 'A' || input[i] == 'a' || input[i] == 'I' || input[i] == 'i' || input[i] == 'U' || input[i] == 'u' ||
		   input[i] == 'E' || input[i] == 'e' || input[i] == 'O' || input[i] == 'o') {
		   	
			// jika char tersebut merupakan huruf vokal maka ubah menjadi 1 char setelahnya
		   	output[i] = input[i] + 1;
		   		
	   } else if(input[i] == ' '){
	   		// jika char merupakan sebuah spasi maka tidak diubah
	   		output[i] = input[i];
	   } else {
	   		// jika char merupakan huruf konsonan atau karakter lain maka ubah menjadi 2 karakter setelahnya
	   		output[i] = input[i] + 2;
	   }
	   
	}
	
	// mengisi akhir string dengan '\0' untuk menandakan akhir dari string
	output[strlen(input)] = '\0';
}

int main() {
	
	// deklarasi variable input kalimat
	char sentence[255];	
	// deklarasi variable untuk menampung hasil enkripsi kalimat
	char encriptedSentence[255];

	// input value untuk variable input
	printf("Masukan kalimat\t\t: ");
	scanf("%[^\n]", &sentence);	
	
	// lakukan enkripsi pada kalimat
	encrypt(sentence, encriptedSentence);
	
	// cetak hasil enkripsi kalimat
	printf("kalimat terenkripsi\t: %s", encriptedSentence);
	
}
