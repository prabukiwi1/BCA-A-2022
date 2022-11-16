// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    char s1[100],s2[100],s3[100],s4[100],pre[100];
    printf("\nEnter String1:");
    gets(s1);
    printf("\nEnter String2:");
    gets(s2);
    printf("\nEnter String3:");
    gets(s3);
    printf("\nEnter String4:");
    gets(s4);
    prefix(s1,s2,s3,s4,pre);
    printf("Longest Common prefix string=%s\n",pre);

    return 0;
}
int prefix(const char *s1,const char *s2,const char *s3,const char *s4,char *f)
{
    int i;
    for(i=0;s1[i]==s2[i]||s1[i]==s3[i]||s1[i]==s4[i]&&s2[i]==s3[i]||s2[i]==s4[i]&&s3[i]==s4[i]&&s4[i]==s1[i]&&s1[i]!='\0';i++)
    {
        f[i]=s1[i];
        f[i]=s2[i];
        f[i]=s3[i];
        f[i]=s4[i];
    }
    f[i]='\0';
    return i;
}
