#include <stdio.h>
int main()
{
    int cval=0, a = 0, b = 1, c, val, r = 0;
    printf("Enter the number which u want to check");
    scanf("%d", &val);

        while (cval <= val+1)
        {
            if (val == a)
            {
                printf("yes it is present");
                r = 1;
                break;
            }
            c = a + b;

            a = b;
            b = c;
            cval++;
        }
    
    if (r == 0)
    {
        printf("number not found in the series");
    }
    return 0;
}