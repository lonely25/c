#include <stdio.h>

void swap(int *x,int *y)

{

    int temp=0;

    *x=temp;

    *x=*y;

    *y=temp;

}

int main()

{

    int a,b;

    scanf("%d %d",&a,&b);

    swap(&a,&b);

    printf("%d %d",a,b);

    return 0;

}
