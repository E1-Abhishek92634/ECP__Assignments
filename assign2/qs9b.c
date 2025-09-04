#include <stdio.h>

int main() {
    int month, year, days;

    printf("Enter month (1-12): ");
    scanf("%d", &month);

    printf("Enter year: ");
    scanf("%d", &year);

    if (month == 1 || month == 3 || month == 5 || month == 7 || 
        month == 8 || month == 10 || month == 12) {
        days = 31;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11) {
        days = 30;
    }
    else if (month == 2) {
        //B part. leap year check using logical operators
        if ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0))) {
            days = 29;
        } else {
            days = 28;
        }
    }
    else {
        printf("Invalid month! Please enter between 1 and 12.\n");
        return 0;
    }

    printf("Month %d of year %d has %d days.\n", month, year, days);

    return 0;
}

