#include <string.h>
size_t ft_strlen(const char *str) {
    size_t i = 0;
    while (str[i]) {
        i++;
    }
    return i;
}

size_t ft_strlcat(char *dest, const char *src, size_t size) {
    size_t dest_len = ft_strlen(dest);
    size_t src_len = ft_strlen(src);
    size_t total_len = dest_len + src_len;
    size_t i = 0;

    if (size <= dest_len)
        return src_len + size;

    while (src[i] && dest_len + i < size - 1) {
        dest[dest_len + i] = src[i];
        i++;
    }

    dest[dest_len + i] = '\0';

    return total_len;
}
