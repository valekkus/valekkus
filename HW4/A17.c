#include <stdio.h>

int main(void)
{
    int month;
    scanf("%d", &month);
    // Определение времени года
    char *season;
    if (month >= 3 && month <= 5)
        season = "spring";
    
     else if (month >= 6 && month <= 8)
        season = "summer";
    
     else if (month >= 9 && month <= 11)
        season = "autumn";
    
     else
        season = "winter";

     printf("%s\n", season);

    return 0;
}
