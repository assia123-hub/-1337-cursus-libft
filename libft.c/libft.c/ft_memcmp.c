#include <stdio.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *a = (unsigned char *)s1;
    unsigned char *b = (unsigned char *)s2;
    size_t i = 0;

    if (n == 0)
    {
        return (0);
    }
    while  (a[i] == b[i] && a[i] && b[i] && i < n - 1)
    {
        i++;
    }
    return (a[i] - b[i]);
}
int main()
{
    char arr[] = "assia";
    char ass[] = "assim";
    int m = ft_memcmp(arr, ass, 5);
    printf("%d", m);
    return (0);
}