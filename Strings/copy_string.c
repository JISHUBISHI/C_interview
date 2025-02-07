#include<stdio.h>
#include<string.h>
int main(){
    char s1[]="Physics Wallah";
    int x=strlen(s1);
    printf("%d\n",x);
    char s2[14];
    strcpy(s2,s1);
    printf("%s",s2);
    return 0;
}