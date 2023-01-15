
#include <stdio.h>
#include<string.h>
int main()
{
    char password[100];
    fgets(password,100,stdin);
    
    char salt[]="123";
    int length =strlen(password)-1;
    
    for(int i=length,j=0;salt[j];i++,j++){
        password[i]=salt[j];
    }
    
    puts(password);
    return 0;
}

