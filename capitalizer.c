// Question 3 for Assignment 4 in CISC220

// Manvir Grewal : 10193283
// Aidan Polese : 10197342
// Kathleen Abols : 10179548
// Lianne Orlowski : 10204124

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

// takes the file as a command line argument
int main(int argc, char *argv[]) {
	FILE *filePtr;
	char previousLetter=' ';
	char c;
	int counter=0;
//	int i;
//	char buff[255];
//	char* token;
			
	//checks to see if user provided file as a command line argument
	if (argc < 2) {
		printf("No file provided at command line.\n");
		return 1; //returns unsuccessful
	}

	// opens file from the command line
	filePtr = fopen(argv[1], "r+");
	if (filePtr == NULL) {
		printf("Error opening file\n");
		return 1;
	}
//	while(1) {
//		fgets(buff, 255, filePtr);
//		if (feof(filePtr)){
//			break;
//		}
//		token = strtok(buff, " ");
//		for (i=0; buff[i] != '\0'; i++){
//			if(isalpha(buff[i]) && (buff[i-1] == ' ')) {
//				buff[i] = toupper(buff[i]);	
//			}
//		}
//	}
//	fclose(filePtr);
//	return(0);


	while((c = fgetc(filePtr)) != EOF){
		if (c=='\n'){
			counter=0;
			putchar('\n');
		}
		else if(!isalpha(previousLetter) && (counter%2)==0){
			putchar(toupper(c));
		}
		else{
			putchar(c);
		}
		previousLetter = c;
		if (previousLetter == ' ')
			counter++;
	}


	fclose(filePtr);
	return(0);


} // end main()
