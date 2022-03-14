#include <stdio.h>

int main(void)
{
    int n;
    printf("10진수 입력: ");
    scanf("%d", &n);

    printf("16진수 값: %0x\n", n);
}