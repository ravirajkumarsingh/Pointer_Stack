/*Finding the names in a string using pointers.*/
#include<stdio.h>
#include<string.h>

void check(char *s[], char *name);
int main()
{
    char str[50],str2[50];
    printf("Enter the String: \n");
    gets(str);
    printf("Enter the name: \n");
    gets(str2);
    check(&str,str2);
    return 0;
}

void check(char *s[],char *name)
{
    register int t;
    for(t=0;s[t];++t)
    {
        if(!strcmp(s[t],name)) printf("Found at %d.\n",t);
        else printf("Not found");
    }
}
