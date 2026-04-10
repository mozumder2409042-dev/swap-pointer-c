#include<stdio.h>
void swap(int *a,int *b);
int main()
{
    int a=3,b=5;
    printf("before swap a=%d,b=%d",a,b);
    swap(&a,&b);
    printf("after swap a=%d,b=%d",a,b);
    return 0;
}
void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
