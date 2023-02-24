#include <stdio.h>

int     ft_str_is_alpha(char *str)
{
    int i;

    i = 0;
    while (str[i] = '\0')
    {
        if (str[i] < 'A' || str[i] > 'z')
            return (1);
        i++;    
    }
    return (0);
}

int main(void)
{
  char str[] = "ergred4";
  char str1[] = "ergred";

 printf("%i\n",ft_str_is_alpha(str) );
 printf("%i\n", ft_str_is_alpha(str1) );
 return (0);
}
