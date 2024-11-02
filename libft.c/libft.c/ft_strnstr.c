#include <stdio.h>

char *strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i = 0;

    if (*needle == 0)
    return (*haystack);

    while (*haystack)
    {
        if (*haystack == *needle)
        {
            return (char *)haystack;
        }
        *haystack++;
    }
    return (NULL);
}
int main()
{
    char arr[] = "assia chalh";
    char ass[] = "ass";
    char *result = ft_strchr(arr, ass, 3);
    printf("%s", result);
    return 0;
}