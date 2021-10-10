/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejafer <ejafer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 15:55:30 by ejafer            #+#    #+#             */
/*   Updated: 2021/10/10 15:55:30 by ejafer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;

	d = (char *) dest;
	s = (const char *) src;
	if (d <= s)
	{
		while (n-- > 0)
			*d++ = *s++;
	}
	else
	{
		d = (char *) d + n;
		s = (const char *) src + n;
		while (n-- > 0)
			*d-- = *s--;
	}
	return (dest);
}
