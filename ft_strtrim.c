/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejafer <ejafer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 19:43:33 by ejafer            #+#    #+#             */
/*   Updated: 2021/10/12 19:43:33 by ejafer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*str;
	unsigned int	nstart;
	unsigned int	nlen;

	str = s1;
	if (str == NULL || set == NULL)
		return (NULL);
	while (*str && ft_strchr(set, *str))
		str++;
	nstart = s1 - str;
	nlen = ft_strlen(str);
	while (nlen > 0 && ft_strchr(set, *(str + nlen)))
		nlen--;
	return (ft_substr(s1, nstart, nlen));
}
