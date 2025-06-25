#include <stddef.h>

char *strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i, j;

    if (!*needle)
        return (char *)haystack;

    for (i = 0; haystack[i] && i < len; i++)
    {
        for (j = 0; needle[j] && (i + j) < len && haystack[i + j] == needle[j]; j++)
            ;
        if (!needle[j])
            return (char *)&haystack[i];
    }
    return ((void *)0);
}
