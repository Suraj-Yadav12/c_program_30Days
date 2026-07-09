#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, j, len, count;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    len = strlen(str);

    printf("\nCharacter Frequencies:\n");

    for(i = 0; i < len; i++)
    {
        count = 1;

        // Skip if character is already counted
        if(str[i] == '\0' || str[i] == ' ')
            continue;

        for(j = i + 1; j < len; j++)
        {
            if(str[i] == str[j])
            {
                count++;
                str[j] = '\0';   // Mark as counted
            }
        }

        printf("%c = %d\n", str[i], count);
    }

    return 0;
}