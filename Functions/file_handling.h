#include <stdio.h>
#include <stdlib.h>

void create_user(char username[12])
{
    FILE *fp;
    fp = fopen("username.txt","w");
    fprintf(fp,"%s",username);
    fclose(fp);
}