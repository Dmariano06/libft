#include <string.h>
size_t ft_strlcpy(char *dest, const char *src, size_t size) {
    size_t src_len = 0;
    size_t i = 0;

    while (src[src_len] != '\0') {
        src_len++;
    }

    if (size > 0) {
        while (i < size - 1 && src[i] != '\0') {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }

    return src_len;
}