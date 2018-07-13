#include<stdio.h>
#include<string.h>
int fun(char *buf, char ch,int n)
{
    char str[100] = "";
    int i,j;
    int count = 0;
    for(i = 0; buf[i] != '\0'; i++)
    {
        if(buf[i] == ch)
        {
            count++;
            if(count == n)
                break;
        }
    }

    for(i++,j = 0;buf[i] != ch ;j++,i++)
        str[j] = buf[i];
        str[j] = '\0';

    printf("%s\n",str);

}
int main(int argc ,char * argv[])
{
    char * p = "123:456:789:abc:def";
    fun(p, ':', 2);

}
