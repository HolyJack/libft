/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejafer <ejafer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 19:42:54 by ejafer            #+#    #+#             */
/*   Updated: 2021/10/12 19:42:54 by ejafer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_countwords(char const *s, char c)
{
	unsigned int	counter;
	char			*str;

	str = (char *) s;
	counter = 0;
	while (*str)
	{
		if (*str != c)
		{
			counter++;
			while (*str != c && *str)
				str++;
		}
		else
			str++;
	}
	return (counter);
}

static int	ft_wordlen(char *str, char c)
{
	int	len;

	len = 0;
	while (*str != c && *str)
	{
		len++;
		str++;
	}
	return (len);
}

static void	ft_getwords(char **array, char *str, char c, unsigned int wnbr)
{
	unsigned int	index;
	unsigned int	wordlen;

	index = 0;
	while (index < wnbr)
	{
		wordlen = ft_wordlen(str, c);
		ft_strlcpy(array[index], str, wordlen);
		str = str + wordlen;
		while (*str && *str == c)
			str++;
		index++;
	}
}

static void	ft_freestr(char *str)
{
	if (str != NULL)
		free(str);
}

char	**ft_split(char const *s, char c)
{
	char			**array;
	char			*str;
	unsigned int	wnbr;

	if (s == NULL || c == 0)
		return (NULL);
	str = ft_strtrim(s, &c);
	if (str == NULL)
		return (NULL);
	wnbr = ft_countwords(str, c);
	array = (char **) malloc(sizeof(char *) * wnbr + 1);
	if (array == NULL)
	{
		ft_freestr(str);
		return (NULL);
	}
	array[wnbr] = NULL;
	ft_getwords(array, str, c, wnbr);
	ft_freestr(str);
	return (array);
}
