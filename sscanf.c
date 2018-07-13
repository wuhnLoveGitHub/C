#include<stdio.h>
#include<string.h>
int main(int argc ,char *argv[])
{
    char buf[32] = "";
    sscanf("123 456", "%[^ ]", buf);
    gets(buf);
    printf("buf is %s\n",buf);



    return 0;



}
