#include <stdio.h>
#include "../Functions/create_pwd.h"
#include "../Functions/file_handling.h"

int main(){
    int length;
    int option;

    printf("Hellooo !! welcome to the password vault\n");
    read_File("../Files/Menu.txt");
    scanf("%d",&option);

    switch(option)
    {
        case 1:
            printf("How long do you want the you password is: ");
            scanf("%d",&length);
            while(length<8)
            {
                printf("heyyy thats to small to have apassword make it atleast more than 8: ");
                scanf("%d",&length);
            }

            srand(time(NULL));
            createPassword(length);
            break;

        case 2:
            printf("this is case two");
            break;
        case 3:
            printf("this is case 3");
            break;
            

    }

}