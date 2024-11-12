#include <string.h>
#include <stdio.h>
int     ft_strlcpy(char *dst, const char *src, size_t size)
{
        size_t     i;

        i = 0;
        while (i <= size)
        {
                dst[i] = src[i];
                i++;
        }
        return (i);
}


int main(void)
{
        char    buff[150];
        printf("%d", ft_strlcpy(buff, "xddd", 10));
        return  (0);
}
