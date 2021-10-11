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

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	const char	*position;
	const int	lenlittle = ft_strlen(little);

	position = little;
	if (lenlittle == 0)
		return (big);
	while (len-- > 0)
	{
		if (*big == *position)
		{
			position++;
			if (*position == '\0')
				return (big - lenlittle);
		}
		else
		{
			position = little;
		}
		if (big == '\0')
			return (NULL);
		big++;
	}
}
