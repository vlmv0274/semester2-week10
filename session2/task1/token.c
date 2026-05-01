
#include <stdio.h>
#include <string.h>

int main( void ) {

    char buffer[50] = "the quick brown fox jumped over the lazy dog";   // define a string to process

    // call strtok() repeatedly to tokenise the string on whitespace " "
    // print out each token 
    char * pch = strtok (buffer," ");
    while (pch != NULL) {
        printf ("%s\n",pch);
        pch = strtok (NULL, " ");
    }
    
    return 0;
}