#include <stdio.h>
#include <stdlib.h>

size_t ft_strlen(const char *s)
{
    size_t i = 0;

    while (s[i] != '\0')
    {
        i++;
    }
    return (i);
}

char *strdup(const char *s1)
{
    char *cpy;
    int i = 0;
    size_t len = ft_strlen(s1);

    cpy = (char*)malloc(sizeof(len + 1));
    if (!cpy)
    return (NULL);

    while (s1[i])
    {
        cpy[i]= s1[i];
        i++;
    }
    return (cpy);
}
int main()
{
    char arr[] = "hellloooooo";
    printf("%s", strdup(arr));
}