#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define PASSWORD_LENGTH 12
int main(void)
{
char valid_characters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
char password[PASSWORD_LENGTH + 1];
int i;
srand(time(NULL));
for (i = 0; i < PASSWORD_LENGTH; i++)
{
int index = rand() % (int)(sizeof(valid_characters) - 1);
password[i] = valid_characters[index];  }
password[PASSWORD_LENGTH] = '\0';
printf("%s\n", password);
return 0;
}
