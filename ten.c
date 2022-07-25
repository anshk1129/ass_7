#include <stdio.h>
int main()
{
    int  n1, r, val = 0,i=1;
    printf("The numbers which are armstrong from 1 to 1000 are as follows:-");
    while (i<=1000)
    {

       n1=i;
        while (n1 != 0)
        {
            r = n1 % 10;
            val = val + r * r * r;
            n1 = n1 / 10;
        }
        if (i == val)
            printf("\n  %d",i);
        i++;   
        val=0; 
    }
    return 0;
}