#include <stdio.h>
#include <inttypes.h>

int main(void)
{
    int a,b,c,d,e,max,min,sum;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    max = a>b ? b : a;
    max = max>c ? c : max;
    max = max>d ? d : max;
    max = max>e ? e : max;
    min = a>b ? a : b;
    min = min>c ? min : c;
    min = min>d ? min : d;
    min = min>e ? min : e;
    sum = max+min;
    printf("%d\n",sum);
    return 0;
}
