#include<stdio.h>
#include<string.h>
int main() {
    char a[100];
    //fgets(a,100,stdin);
    //uppercase to lower case 
    for(int i=0;a[i];i++){
        if(a[i]>=65&&a[i]<=90){
            a[i]=a[i]+32;
        }
        else//(a[i]>=97&&a[i]<=122){
            a[i]=a[i]-32;
        
    }
    
    //puts(a);
    char b[100];
    fgets(b,100,stdin);
    for(int i=0;b[i];i++){
        
       if(b[i]>=65&&b[i]<=90){
            b[i]=b[i]+32;
        }
    }
    puts(b);
    return 0;
}

