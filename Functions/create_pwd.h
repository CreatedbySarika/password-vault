#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void createPassword(int length){   
    char randomchar[length];
    int ind=0;
    int x=0;
    //generate random ASCII printable char
    for (int k=0;k<length;k++)
    {
        randomchar[x] = (char)(33+rand()%94);
        x++;    
    }

    //print the generated random character in the array
    for (int j=0;j<sizeof(randomchar);j++)
    {
        printf("%c",randomchar[j]);
    }

};

