#include <stdio.h>
#include <stdlib.h>

int userInput = 0;

int main()
{
    int pin1[6];
    int pin2[6];
    int i = 0;
    
    do {
        printf("\n\tPin verification program\n");
        printf("\t1\tEnter pin twice\n");
        printf("\t2\tPins match\n");
        printf("\t3\tCheck to see if pin does not start with a 0\n");
        printf("\t4\tExit\n");
        scanf("%d", &userInput);

        switch (userInput) {
                
        case 1:

            printf("\nPlease enter a six digit pin number separated by spaces. Please do not start with a 0\n");

            scanf("%d %d %d %d %d %d", &pin1[0], &pin1[1], &pin1[2], &pin1[3], &pin1[4], &pin1[5]);

            printf("\nPlease Re-enter your six digit pin with spaces:\n");

            scanf("%d %d %d %d %d %d", &pin2[0], &pin2[1], &pin2[2], &pin2[3], &pin2[4], &pin2[5]);

            break;

        case 2:
               pin1[i] = pin1[0], pin1[1], pin1[2], pin1[3], pin1[4], pin1[5];
                
               pin2[i] = pin2[0], pin2[1], pin2[2], pin2[3], pin2[4], pin2[5];

            if (pin1[i] == pin2[i]) {
                printf("The pins match");
            }
            else {
                printf("Pins don't match. Select option 1 again.");
            break;
            }
        case 3:
            if (pin1[0] == 0 && pin2[0] == 0) {
                printf("The pin started with a 0 please retry \n");
            }
            else {
                printf("Congratulations, you did not break the 0 rule.\n");
                break;
            }
        case 4:
                printf("Thank you!\n");
                break;

        default:
               printf("Please enter a valid option shown.");
               break;
        }

    }   while (userInput != 4);

        return 0;
}
