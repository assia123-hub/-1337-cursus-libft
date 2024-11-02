#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *a = (unsigned char *)s;
    char b = (char )c;

    while (*a && *a < n)
    {
        if (*a == b)
        {
            return (char *)a;
        }
        *a++;
    }
    
    if (a == '\0')
    {
        return (char *)a;
    }

    return NULL;
}
int main()
{
    char arr[] = "assia chalh";
    char *result = ft_memchr(arr, 'a', 2);
    printf("%s", result);
    return 0;
}