
#include <stdio.h>

int main()
{
    char a[100];
    int b[26]={0};
    scanf("%s",a);
    for(int i=0;a[i];i++){
        b[a[i]-97]++; //b[a[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
    /*if(b[i]>1)
    
    printf("%c=%d\n",i+97,b[i]);*/
    
    }
    int c=0;
    for(int i=0;i<26;i++){
        if(b[i]%2==1)
        c++;
    }
    if(c>1){
        printf("string cant be a anagram");
    }
    else("string be a anagram");

    

    return 0;
}

