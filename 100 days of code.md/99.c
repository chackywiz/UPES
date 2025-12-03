//Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
#include <string.h>

int main() {
    char date[20], day[3], month[3], year[5];

    printf("Enter date in dd/04/yyyy format: ");
    fgets(date, sizeof(date), stdin);

    // extract day, month, year
    strncpy(day, date, 2);
    day[2] = '\0';

    strncpy(month, date+3, 2);
    month[2] = '\0';

    strncpy(year, date+6, 4);
    year[4] = '\0';

    // check if month is 04
    if (strcmp(month, "04") == 0) {
        printf("Formatted date: %s-Apr-%s\n", day, year);
    } else {
        printf("Month is not 04, no change applied.\n");
    }

    return 0;
}
