#include "libft.h"

int ft_isalnum(char c)
{
        if(c >= 48 && c <= 57)          
                return (1);
        if(c >= 65 && c <= 90)          
                return (1);     
        if(c >= 97 && c <= 122) 
                return (1);
	return (0);
}
