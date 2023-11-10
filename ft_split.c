#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i] != 0)
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == 0))
			words++;
		i++;
	}
	return (words);
}

static	int	word_size(char const *s, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;

	while(s[i] && s[i] != c)
	{
		i++;
		len++;
	}
	return (len);
}


char	**ft_split(char const *s, char c)
{
	int	i;
	int	size;
	int	words;
	char	**res;

	words = count_words(s, c);
	i = 0;
	if (!s)
		return (NULL);
*res = malloc(sizeof(char *) * (words + 1));
	if (!res)
		return (NULL);
	while (i < words)
	{
		while(*s && *s == c)
			s++;
		size = word_size(s, c);
		res[i] = ft_strndup(s, size);
		if (!res[i])
		{
			free(res[i]);
			return(NULL);
		}
		s += size;
		i++;
	}
	res[words] = 0;
	return (res);
}
