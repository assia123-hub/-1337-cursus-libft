#include <stdio.h>
#include <stdlib.h>

void *ft_calloc(size_t count, size_t size)
{
    char *c;
    size_t i = 0;
    size_t tt = count * size;

    c = (char*)malloc(tt);
    if (c == 0)
    return (0);
    while (c[i] < tt)
    {
        c[i] = 0;
        i++;
    }
    return (c);
}
int main() 
{
    printf("%c", ft_calloc(1, 1));
    return 0;
}
