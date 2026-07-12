#include <stdio.h>
#include <string.h>

int main() {
    char str[100], word[100], longest[100];
    int i = 0, j = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    longest[0] = '\0';

    while (1) {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\0') {
            word[j] = str[i];
            j++;
        } else {
            word[j] = '\0';

            if (strlen(word) > strlen(longest)) {
                strcpy(longest, word);
            }

            j = 0;

            if (str[i] == '\0' || str[i] == '\n')
                break;
        }

        i++;
    }

    printf("Longest word = %s", longest);

    return 0;
}