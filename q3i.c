#include <stdio.h>
#include <string.h>
 
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
