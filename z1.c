/*Задание 1. Вывести через пробел все целые числа из промежутка [A,B], (A<B) в обратном порядке: от B до A.
Входные данные: Два целых числа A, B при этом A<B.
Выходные данные: Целые числа из промежутка от [A,B], записанные через пробел в обратном порядке*/

#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    
    printf("%d ",b);
    c = b - 1;
    printf("%d ",c);
    while(c<b && c>a)
    {
    c = c - 1;
    printf("%d ",c);
    c = c - 1;
    }
    printf("%d ",a);
}
