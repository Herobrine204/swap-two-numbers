#include <stdio.h>
void swap(int a, int b);
int main()
{
    int a,b;
    printf("Enter the first number: \n");
    scanf("%d",&a);
    printf("Enter the second number: \n");
    scanf("%d",&b);
    swap(a,b);
    return 0;
}
void swap(int a, int b)
{
    int t=a;
    a=b;
    b=t;
    printf("a= %d & b=%d",a,b);
}