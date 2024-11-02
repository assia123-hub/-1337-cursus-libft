#include <stdio.h>
#include <stdlib.h>

char *ft_strchr(const char *s, int c)
{
    unsigned char a = (unsigned char)c;

    while (*s)
    {
        if (*s == a)
        {
            return (char *)s;
        }
        *s++;
    }
    
    if (a == '\0')
    {
        return (char *)s;
    }

    return NULL;
}

int main()
{
    char arr[] = "assia chalh";
    char *result = ft_strchr(arr, 'k');
    printf("%s", result);
    return 0;
}