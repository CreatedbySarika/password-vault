#include <stdio.h>
#include "../Functions/create_pwd.h"

int main(){
    int length;
    printf("Hellooo !! welcome to the password vault\n");
    printf("How long do you want the you password is: ");
    scanf("%d",&length);
    while(length<8)
    {
        printf("heyyy thats to small to have apassword make it atleast more than 8: ");
        scanf("%d",&length);
    }
    
    srand(time(NULL));
    createPassword(length);
}