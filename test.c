#include <stdio.h>

int factorial(int x)
{
    int ret = 1;
    
    if(x <= 0)
        return 0;
    
    while(x) {
        ret *= x--;
    }
    
    return ret;
}

int main(int agrc, char *agrv[])
{
    if(agrc > 1)
    {
        int result = factorial(atoi(agrv[1]));
        printf("result = %u\n", result);
    }
    else
    {
        printf("Hello World!\n");
    }
    
    return 0;
}
