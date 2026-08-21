#include <stdio.h>
#include <stdlin.h>

void create_user(char[12] username)
{
    FILE *fp;
    fp = fopen("username.txt","w");
    fprintf(fp,"%s",username);
    fclose(fp);
}