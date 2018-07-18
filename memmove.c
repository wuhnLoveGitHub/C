#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    char str[100] = "abcdefg";
    //åˆ éa
    strcpy(str,str+1);
    puts(str);
    char buf[100] = "abcdefg";
    //a->xyz
    memmove(buf+1,buf+1,2);
    puts(buf);
}
//fix bug
