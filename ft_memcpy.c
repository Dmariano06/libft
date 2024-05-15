#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
  	size_t	i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	if (dest != src)
	{
		while (i < n)
		{
			((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}

/*#include <stdio.h>
void *ft_memcpy(void *dest, const void *src, size_t n);

int main() {
    char src[] = "Hello, world!";
    char dest[20];

    ft_memcpy(dest, src, strlen(src) + 1);
    printf("dest: %s\n", dest);

    return 0;
}*/