#include <stdio.h>

void Calculator(int n1, int n2)
{
    int total = 0;
    for(int j=n1; j<=n2; j++)
    {
            for(int i=1; i<=9; i++)
        {
            
            total = j*i;
            printf("%d x %d = %d\n", j, i, total);
            
        }
        printf("\n");
    }
}
int main(void)
{
    int min, max;
    printf("두 개의 정수입력: ");
    scanf("%d %d", &min, &max);

    if(min>max)
    {
        Calculator(max,min);
    }
    else
    {
        Calculator(min,max);
    }
    return 0;
}