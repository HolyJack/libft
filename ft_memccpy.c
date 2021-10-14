/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejafer <ejafer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 22:00:14 by ejafer            #+#    #+#             */
/*   Updated: 2021/10/14 22:08:20 by ejafer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	
	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	char	*d;
	char	*s;

	d = (char *) dst;
	s = (char *) src;
	while (n-- > 0)
	{
		*d = *s;
		d++;
		if (*s == (unsigned char) c)
			return (d);
		s++;
	}
	return (NULL);
}
