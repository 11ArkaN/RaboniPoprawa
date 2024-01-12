#include <stdio.h>

int strncmpFor(const char *str1, const char *str2, const int liczba)
{
    for (int i = 0; i < liczba; i++)
    {
        if (str1[i] != str2[i])
        {
            return str1[i] - str2[i];
        }

        if (str1[i] == '\0' || str2[i] == '\0')
            break;
    }
    return 0;
}

int strncmpWhile(const char *str1, const char *str2, const int liczba)
{
    int i = 0;
    while (i < liczba)
    {
        if (str1[i] != str2[i])
        {
            return str1[i] - str2[i];
        }

        if (str1[i] == '\0' || str2[i] == '\0')
            break;
        i++;
    }
    return 0;
}

int strncmpDoWhile(const char *str1, const char *str2, const int liczba)
{
    int i = 0;
    do
    {
        if (i < liczba)
        {
            if (str1[i] != str2[i])
            {
                return str1[i] - str2[i];
            }

            if (str1[i] == '\0' || str2[i] == '\0') break;
        }
    }
    while (i++ < liczba);
    return 0;
}

int main() {
  char str1[] = "AAAA";
  char str2[] = "BBBB";
  // Wywołanie funkcji strncmp
  const int wynik = strncmpDoWhile(str1, str2, 8);

  // Wyświetlenie wyniku
  printf("str1: %s\n", str1);
  printf("str2: %s\n", str2);
  printf("Wynik: %d\n", wynik);

  return 0;
}

