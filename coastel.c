#include <stdio.h>

int main()
{
    int n, type, i, trackingCode;
    float weight;

    printf("Enter number of containers: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("\nEnter weight of container %d: ", i);
        scanf("%f", &weight);

        printf("Enter cargo type (1-General, 2-Hazardous, 3-Refrigerated): ");
        scanf("%d", &type);

        switch (type)
        {
            case 1:
                if (weight <= 20000)
                {
                    printf("Container may be loaded.\n");
                }
                else
                {
                    printf("Container may not be loaded.\n");
                }
                break;

            case 2:
                if (weight <= 15000 && i % 2 != 0)
                {
                    printf("Container may be loaded.\n");
                }
                else
                {
                    printf("Container may not be loaded.\n");
                }
                break;

            case 3:
                if (weight <= 18000)
                {
                    printf("Container may be loaded.\n");
                }
                else
                {
                    printf("Container may not be loaded.\n");
                }
                break;

            default:
                printf("Invalid cargo type.\n");
        }

        trackingCode = ((int)weight % 97) % 100;

        printf("Tracking Code: %02d\n", trackingCode);
    }

    return 0;
}
