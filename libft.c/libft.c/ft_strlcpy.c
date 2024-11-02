#include <stdio.h>

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t i = 0;

    while (src[i])
    {
        i++;
    }
    return (i);
    while (src[i])
    {
        if (src < dstsize + 1)
        {
            dst[i] = src[i];
        }
        else
        dst[i] = dstsize - 1;
        i++;
    }
    return (src[i]);
}
int main()
{
    char arr[] = "asssiachalh";
    char *ass;
    size_t res = ft_strlcpy(ass, arr, 4);
    printf("%s", res);
    return (0);
}