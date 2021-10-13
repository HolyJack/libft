/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejafer <ejafer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 14:59:01 by ejafer            #+#    #+#             */
/*   Updated: 2021/10/11 14:59:01 by ejafer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*s, const char *subs, size_t len)
{
	char		*str;
	const char	*position;
	const int	sublen = ft_strlen(subs);

	str = (char *) s;
	position = (char *) subs;
	if (sublen == 0)
		return (str);
	while (len-- > 0 && *str)
	{
		if (*str == *position)
		{
			position++;
			if (*position == '\0')
				return (str - sublen);
		}
		else
		{
			position = (char *) subs;
		}
		str++;
	}
	return (NULL);
}
