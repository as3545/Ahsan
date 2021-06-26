

#include<stdio.h> // include stdio.h library

int main(void)
{       

    int day, mon, year;

    char *months[] = {
                        "January", "February", "March", "April",
                        "May", "June", "July", "August", 
                        "September", "October", "November", "December",
                      };

    printf("Enter date(MM/DD/YYY): ");
    scanf("%d/%d/%d", &mon, &day, &year);

    printf("%d", day);

    // if day is 1 or 21 or 31, add the suffix "st"
    if(day == 1 || day == 21 || day == 31)
    {
        printf("st ");
    }

    // if day is 2 or 22, add the suffix "nd"
    else if(day == 2 || day == 22)
    {
        printf("nd ");
    }

    // if day is 3 or 23, add the suffix "rd"
    else if(day == 3 || day == 23)
    {
        printf("rd ");
    }

    // for everything else add the suffix "th"
    else
    {
        printf("th ");
    }    

    printf("%s, %d", months[mon - 1], year);

    return 0;
}