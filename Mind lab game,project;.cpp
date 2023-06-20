#include<stdio.h>
#include<stdlib.h>
int main()
{
    char color[20];
    char pluralNoun[20];
    char celebrityF[20];
    char celebrityL[20];
    printf("Enter the color:");
    scanf("%s",color);
    printf("Enter the pluralNoun:");
    scanf("%s",pluralNoun);
    printf("Enter clelebritiy name:");
    scanf("%s %s",celebrityF,celebrityL);
    printf("Roses are %s \n",color);
    printf("%s are blue \n",pluralNoun);
    printf("I love %s %s \n",celebrityF,celebrityL);
    return 0;
}

