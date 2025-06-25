#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int    ft_strlen(char const *s)
{
    unsigned int    i;

    i = 0;
    while(s[i])
        i++;
    return (i);
}

unsigned int    ft_count(const char *s, char c)
{
    unsigned int    start;
    unsigned int    len;
    unsigned int    count_word;
    unsigned int    i;

    start = 0;
    len = ft_strlen(s);
    count_word = 0;
    i = 0;
    while (s[i])
    {
        if (s[i] != c)
            start = 1;
        if ((start > 0) && ((s[i] == c) || (i == (len - 1))))
            start = 2;
        if (start == 2)
        {   
            count_word++;
            start = 0;
        }
        i++;
    }
    return (count_word);
}

char    *ft_assign(char *s, char c)
{
    unsigned int    start;
    unsigned int    end;
    unsigned int    i;
    char            *out_sub;

    i = 0;
    while (s[i] == c)
        i++;
    start = i;
    while (s[i] != c)
        i++;
    end = i;
    i = 0;
    out_sub = (char *)malloc(end - start + 1);
    while (start < end)
    {
        out_sub[i] = s[start];
        i++;
        start++;
    }
    s = s + end;
    out_sub[i] = '\0';
    return (out_sub);
}
char    **ft_split(char const *s, char c)
{
    //1st count how may strings remaining
    //2nd assign the array to has how many strings
    //Read the whole strings, assign the value to new strings
    char            **out;
    char            *s_temp;
    unsigned int    count;
    unsigned int    i;

    i = 0;
    count = ft_count(s, c);
    s_temp = (char *)s;
    out = (char **)malloc(sizeof(char *)*(count + 1));
    if (!out)
        return (0);
    while (i <= count && s_temp)
    {
        out[i] = ft_assign(s_temp, c);
        s_temp = s_temp + ft_strlen(out[i]) + 1;
        i++;
    }
    out[i] = NULL;
    return (out);
}

int main()
{
  char first[] = "H1you1baby";
  char c = '1';
  unsigned int count = ft_count(first, c);
  //printf("The string %s has been cut by %c to %i strings \n", first, c, count);
  char **out = ft_split(first, c);
  for (int i = 0; i <= count; i++)
    printf("New string is %s \n", out[i]);
    //printf("New string is %s \n", out);
  return(0);
}