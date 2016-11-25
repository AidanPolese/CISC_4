#include <string.h>
#include <stdio.h>

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
