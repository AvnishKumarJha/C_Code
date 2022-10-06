// Units and Conversions.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input;
    float kmsToMiles = 0.621371;
    float inchesTofoot = 0.0833333;
    float cmsToInches = 0.393701;
    float poundTokgs = 0.453592;
    float inchesToMeters = 0.0254;
    float first,second;

    while (1)
    {
        printf("Enter the input character. q to quit\n    1. kmsToMiles\n    2. inchesTofoot\n    3. cmsToInches\n    4. poundTokgs\n    5. inchesToMeters\n");
        scanf(" %c", &input);
        printf("The Character is '%c'",input);

        switch (input)
        {
        case 'q':
            printf("Quiting the Program....");
            goto end;
            break;

            case '1':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f",&first);
            second = first * kmsToMiles;
            printf("%f kms is equal to %f Miles\n",first,second);
            break;

            case '2':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f",&first);
            second = first * inchesTofoot;
            printf("%f inches is equal to %f foot\n",first,second);
            break;

            case '3':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f",&first);
            second = first * cmsToInches;
            printf("%f Cms is equal to %f Inches\n",first,second);
            break;

            case '4':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f",&first);
            second = first * poundTokgs;
            printf("%f Pounds is equal to %f kgs\n",first,second);
            break;

            case '5':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f",&first);
            second = first * inchesToMeters;
            printf("%f inches is equal to %f meters\n",first,second);
            break;

        default:
        printf("In default now");
            break;
        }
    }
    end:

    return 0;
}