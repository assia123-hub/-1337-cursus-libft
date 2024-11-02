#include <stdio.h>

void *memset(void *b, int c, size_t len)
{
    unsigned char *dest = (unsigned char*) b;
    size_t i = 0;

    while (i < len)
    {
        dest[i] = (unsigned char)c;
        i++;
    }
    return (b);
}
int main()
{
    char arr[] = "assia chalh";
    memset(arr , '*' ,15);
    for (int i = 0; arr[i]; i++)
    printf("%c", arr[i]);
    return (0);

}