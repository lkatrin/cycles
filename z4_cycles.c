/*Задание 4. Степень двойки. По данном числу N определить, является ли оно степенью числа 2.
Входные данные: Одно целое неотрицательное число N.
Выходные данные: YES - если число N является степенью двойки, и NO в противном случае*/

#include <stdio.h>
#include <math.h>
int main()
{
    int N;
    float n;
    scanf("%d",&N);
    if (N==1)
    printf("YES");
    else
    {
      n=log2(N);
      N=log2(N);
    
        if ((n-N)==0)
        printf("YES");

        else
        printf("NO");
    }
}

