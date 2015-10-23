void ft_strncat(char *dest, const char *src, int n)
{
        int i;
        int j;

        i = 0;
        j = 0;
        while (dest[j] != '\0')
                j++;
        while (src[i] != '\0' && n > 0)
        {
                dest[j + i] = src[i];
                i++;
       		n--;
	 }
}
