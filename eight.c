#include <stdio.h>
int main()
{
    int n, flag, i;
    printf("Enter the prime number whose next prime you want to check");
    scanf("%d", &n);
    while (1)
    {

        n++;
        for (i = 2; i < n; i++)
        {
            if (n % i == 0)
                break;
            
        }
        if (i == n)
        {
            printf("Next prime is %d ", n);
            break;
        }
    }

    return 0;
}