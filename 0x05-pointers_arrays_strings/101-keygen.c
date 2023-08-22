#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define PASSWORD_LENGTH 63
int main(void)
{
char valid_characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
char password[PASSWORD_LENGTH + 1];
srand(time(NULL));
int length = rand() % 7 + 6;
for (int i = 0; i < length; i++)
{
        int index = rand() % (sizeof(valid_characters) - 1);
        password[i] = valid_characters[index];
    }

    password[length] = '\0'; // Null-terminate the password

    printf("%s\n", password);

    return 0;
}
