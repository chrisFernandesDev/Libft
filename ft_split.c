/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaciel- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:32:44 by cmaciel-          #+#    #+#             */
/*   Updated: 2024/10/25 11:32:44 by cmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
	Função que divide uma string em substrings usando 
	um delimitador especificado. Ela retorna um array 
	de strings, com NULL ao final para indicar o término.
*/
int	word_count(const char *str, char c)
{
	int	i;
	int	j;
	int	word;

	i = 0;
	j = 0;
	word = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			word = 0;
		else if (word == 0)
		{
			word = 1;
			j++;
		}
		i++;
	}
	return (j);
}
/*
void	*ft_free(char **str, size_t j)
{
	size_t	i;

	i = 0;
	while (i < j)
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}
*/

char	*fill_word(const char *s, int start, int end)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = end - start;
	str = (char *)malloc((j + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (start < end)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_splitword(char	**str, char const *s, char c)
{
	size_t	i;
	int		start;
	int		j;

	i = 0;
	j = 0;
	start = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && start < 0)
			start = i;
		else if ((s[i] == c || i == ft_strlen(s)) && start >= 0)
		{
			str[j] = fill_word(s, start, i);
			start = -1;
			j++;
		}
		i++;
	}
	str[j] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;

	str = (char **)malloc((word_count(s, c) + 1) * sizeof(char *));
	if (!s)
		return (NULL);
	if (!str)
		return (NULL);
	return (ft_splitword(str, s, c));
}
/*
int	main(void)
{
	char	str[] = "banana,,uva,maca,morango,";
	char	c = ',';
	char **result = ft_split(str, c);
	int	i = 0;

	while (result[i] != NULL)
	{
		printf("%s\n", result[i]);
		i++;
	}
	ft_free(result, i);
	return (0);
}
*/