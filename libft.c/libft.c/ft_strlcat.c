#include <stdio.h>

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i = 0;

    while (src[i])
    {
        i++;
    }
    return (i);
    i = 0;
    while (dst[i])
    {
        i++;
    }
    return (i);
    i = 0;
    if(src[i] == dstsize)
    {
        return(src[i] + dst[i]);
    }
    else if (dstsize > src[i] + dst[i])
    {
        dst[i] = src[i];
    }
    else
    {
            return (dstsize);
    }
    return (src[i] + dst[i]);
}
int main()
{
    char arr[] = "asssiachalh";
    char ass[] = "hello world";
    size_t res = ft_strlcat(ass, arr, 8);
    printf("%s", res);
    return (0);
}