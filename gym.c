#include <stdio.h>

int main()
{
    int access, hour;
    int mode, allowed;

    while (1)
    {
        printf("Enter member access number (9999 to exit): ");
        scanf("%d", &access);

        if (access == 9999)
        {
            break;
        }

        printf("Enter current hour (0-23): ");
        scanf("%d", &hour);

        mode = (hour >= 22 || hour < 6) ? 1 : 0;

        if (mode == 1)
        {
            printf("LATE NIGHT MODE\n");

            allowed = access & 8;
        }
        else
        {
            printf("STANDARD MODE\n");

            allowed = access & (1 | 2 | 4);
        }

        if (allowed)
        {
            printf("Entry Granted\n");
        }
        else
        {
            printf("Entry Denied\n");
        }

        if (access & 4)
        {
            printf("Personal Trainer Access: YES\n");
        }
        else
        {
            printf("Personal Trainer Access: NO\n");
        }
    }

    return 0;
}
