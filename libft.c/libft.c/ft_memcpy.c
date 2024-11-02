#include <stdio.h>

void *memcpy(void *dst, const void *src, size_t n)
{
    unsigned char *a = (unsigned char*)dst;
    unsigned char *b = (unsigned char*)src;
    size_t i = 0;

    if (src == NULL && dst == NULL)
    return (dst);
    while (b[i] != '\0' && b[i] < n)
    {
        a[i] = b[i];
        i++;
    }
    a[i] = '\0';
    return (dst);
}
int main()
{
    char dst[20];
    char src[] = "assia chalh";
    printf("%s", memcpy(dst, src, 12));
    return 0;
}