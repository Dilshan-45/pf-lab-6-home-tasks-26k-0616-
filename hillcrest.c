
#include <stdio.h>

int main()
{
    int panel, choice;

    while(1)
    {
        printf("\nEnter current panel value (-1 to exit): ");
        scanf("%d", &panel);

        if(panel == -1)
        {
            break;
        }

        printf("\n1. Turn Water Heater ON");
        printf("\n2. Turn Air Conditioner OFF");
        printf("\n3. Toggle Main Lights");
        printf("\n4. Check Security Camera");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                panel = panel | 2;
                break;

            case 2:
                panel = panel & ~4;
                break;

            case 3:
                panel = panel ^ 1;
                break;

            case 4:
                if(panel & 8)
                    printf("Security Camera is ON\n");
                else
                    printf("Security Camera is OFF\n");
                break;

            default:
                printf("Invalid choice\n");
        }

        printf("New panel value: %d\n", panel);

        if((panel & 4) && (panel & 2))
        {
            printf("Overload risk detected!\n");
        }
        else
        {
            printf("No overload risk.\n");
        }
    }

    printf("Shift completed.\n");

    return 0;
}
