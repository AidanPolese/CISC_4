#include <string.h>
#include <stdio.h>
//Manvir Grewal : 10193283 
//Aidan Polese : 10197342 
//Kathleen Abols : 10179548 
//Lianne Orlowski : 10204124

int substring(char* source, int from, int n, char* target){

	int j;
	for(j = 0; j < n; j++){
		target[j] = source[from + j];
	}
	if (strlen(target) >= n){
                return 0;
        }
        else{
                return -1;
        }
}
