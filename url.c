#include<stdio.h>
#include<string.h>
int main(int argc, char *argv[])
{
    char url[100] = "http://'����в���@cssweb"
    urlencode(url);
    printf("encode--->%s\n",url);

    return 0;
}



