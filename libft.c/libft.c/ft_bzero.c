#include <stdio.h>

void bzero(void *s, size_t n)
{
    unsigned char *dest = (unsigned char*) s;
    size_t i = 0;

    while (dest[i] < n)
    {
        dest[i] = 0;
        i++;
    }
}
int main()
{
    char arr[] = "assia chalh";
    bzero(arr ,11);
    for (int i = 0; i < 5; i++)
    printf("%d", arr[i]);
    return (0);
}