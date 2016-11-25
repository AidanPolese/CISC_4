#include <stdio.h>
#include <string.h>
//Manvir Grewal : 10193283 
//Aidan Polese : 10197342 
//Kathleen Abols : 10179548 
//Lianne Orlowski : 10204124
 
int main(void) {
    // Prints welcome message...
    char* safestrcat (char* a, char* b) {
        char* bCopy;
        char* aCopy;
        int len = strlen(a) + strlen(b));
        strcpy (aCopy , a );
        strcpy (bCopy, b);
        char* c [len];
        strcat (c, aCopy);
        strcat (c, bCopy);
    }
   return 0;
}
