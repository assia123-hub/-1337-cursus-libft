#include <stdio.h>
#include <stdlib.h>

char *ft_strrchr(const char *s, int c)
{
    unsigned char a = (unsigned char)c;
    const char * last = NULL;

    while (*s)
    {
        if (*s == a)
        {
            last = s;

        }
        s++;
    }
    
    if (a == '\0')
    {
        return (char *)s;
    }

    return (char *)last;
}
int main()
{
    char arr[] = "assia chalh";
    char *result = ft_strrchr(arr, 'a');
    printf("%s", result);
    return 0;
}