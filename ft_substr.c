/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejafer <ejafer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 19:33:37 by ejafer            #+#    #+#             */
/*   Updated: 2021/10/12 19:33:37 by ejafer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*tmp;
	size_t			index;
	const size_t	slen = ft_strlen(s);

	if (slen < start + len)
		len = slen - start;
	if (len <= 0)
		return (NULL);
	tmp = (char *) malloc(sizeof(char) * (len + 1));
	if (tmp == NULL)
		return (NULL);
	index = 0;
	while (len-- > 0)
	{
		tmp[index] = s[start + index];
		index++;
	}
	tmp[index] = '\0';
	return (tmp);
}
