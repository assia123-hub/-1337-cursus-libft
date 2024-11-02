#include <stdio.h>

void *memmove(void *dst, const void *src, size_t len)
{
    unsigned char *a;
    const unsigned char *b;
    size_t i = 0;

    if (dst == NULL && src == NULL)
    return (0);

    a = (unsigned char*)dst;
    b = (const unsigned char*)src;

    if (a[i]  <= b[i])
    {
        while (len > 0)
        {
            a[i] = b[i];
            i++;
        }
    }
    if (a[i] > b[i])
    {
        while (i < len)
        {
            a[i] = b[i];
            i++;
        }
    }
    a[i] = '\0';
    return (dst);
}
int main()
{

}