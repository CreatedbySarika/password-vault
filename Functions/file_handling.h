#include <stdio.h>
#include <stdlib.h>

void create_user(char username[12])
{
    FILE *fp;
    fp = fopen("../Files/username.txt","w");
    fprintf(fp,"%s",username);
    fclose(fp);
}

void read_File(const char *file){
    FILE *pf = fopen(file,"r");
    char buffer[255];

    if(pf == NULL)
    {
        printf("Unable to locate the file");
    }

    while((fgets(buffer,255,pf))!=NULL)
    {
        printf("%s",buffer);

    }
    fclose(pf);
    

}