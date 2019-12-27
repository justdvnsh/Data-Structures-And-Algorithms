#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

int main() {

    char str[1000];
    gets(str);
    printf("Date was = %s \n", str);

    char days_strings[20];
    char month_strings[20];
    char year_strings[20];

    days_strings[2] = "\0";
    month_strings[2] = "\0";
    year_strings[4] = "\0";

    strncpy(days_strings, str, 2);
    strncpy(month_strings, str + 3, 2);
    strncpy(year_strings, str + 6, 4);
    puts(days_strings);
    puts(month_strings);
    puts(year_strings);

    int days, months, years;
    days = strtol(days_strings, NULL, 10);
    months = strtol(month_strings, NULL, 10);
    years = strtol(year_strings, NULL, 10);

    printf("%d %d %d\n", days, months, years);

    int final_days;
    final_days = (360 * years) + (30 * months) + (days);

    printf("%d", final_days);

    return 0;
}
