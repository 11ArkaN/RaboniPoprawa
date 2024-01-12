#include <stdio.h>

void strncpyFor(char *dest, const char *src, const int count)
{
    int i;
    for (i = 0; i < count && src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }
    if (i < count)
    {
        dest[i] = '\0';
    }
}

void strncpyWhile(char *dest, const char *src, const int count)
{
    int i = 0;
    while (i < count && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    if (i < count)
    {
        dest[i] = '\0';
    }
}

void strncpyDoWhile(char *dest, const char *src, const int count)
{
    int i = 0;
    do
    {
        if (i < count && src[i] != '\0')
        {
            dest[i] = src[i];
        }
    }
    while (i++ < count);

    if (i < count)
    {
        dest[i] = '\0';
    }
}
int main() {

  char src[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed semper quam nibh, ac sagittis leo sodales ut. Suspendisse in metus sapien. Nunc vel accumsan metus.";
  char dest[9]; // n + 1
  printf("src: %s\n", src);
  strncpyDoWhile(dest, src, 8);
  printf("dest: %s\n", dest);
  return 0;
}
