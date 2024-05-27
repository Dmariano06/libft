#include <string.h>
void *ft_memmove(void *dest, const void *src, size_t n)
{
    char *temp_dest = (char *)dest;
    const char *temp_src = (const char *)src;
    size_t i;

    i = 0;

    if (dest < src || (*temp_dest >= (temp_src[n])) || (*temp_src >= (temp_dest[n]))) {
        return memcpy(dest, src, n);
    }

    while (i < n) {
        temp_dest[i] = temp_src[i];
        i++;
    }

    return dest;
}
/*#include <stdio.h>
int main()
{
    char str[10] = "Hellccdzao";
    char dest[10] = "";
    memmove(dest, str, 8);
    //ft_memmove(dest, str, 8);
    printf("%s", dest);
}*/