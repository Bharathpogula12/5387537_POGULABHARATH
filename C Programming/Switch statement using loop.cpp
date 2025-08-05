#include<stdio.h>

int main() {
    int day;

    while(1) {
        printf("Enter any day between 1 to 7 (Enter 0 to exit): ");
        scanf("%d", &day);

        if(day == 0) {
            printf("Exiting the program.\n");
            break;
        }

        switch(day) {
            case 1: printf("Monday\n");
                    break;
            case 2: printf("Tuesday\n");
                    break;
            case 3: printf("Wednesday\n");
                    break;
            case 4: printf("Thursday\n");
                    break;
            case 5: printf("Friday\n");
                    break;
            case 6: printf("Saturday\n");
                    break;
            case 7: printf("Sunday\n");
                    break;
            default: printf("Invalid choice! Please enter a number between 1 and 7.\n");
        }
    }

    return 0;
}

