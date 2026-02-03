#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d%d", &a, &b);
    
    char *season;
    if (a>b)
        season = "Above";
    
     else if (a<b)
        season = "Less";
    
     else
        season = "Equal";

     printf("%s\n", season);

    return 0;
}
