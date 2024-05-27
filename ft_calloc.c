#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size) {
    void *array;
    
    if (nmemb != 0 && size != 0) {
        if ((nmemb * size) / size != nmemb) {
            return NULL;
        }
    }

    array = malloc(nmemb * size);
    if (array == NULL) {
        return NULL;
    }
    
    ft_bzero(array, nmemb * size);
    return array;
}