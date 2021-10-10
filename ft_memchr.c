/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejafer <ejafer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 16:10:10 by ejafer            #+#    #+#             */
/*   Updated: 2021/10/10 16:10:10 by ejafer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *src;

	src = (const unsigned char) s;
	while(n-- > 0)
	{
		if (*src == c)
			return (src);
		src++;
	}
	return (NULL);
}