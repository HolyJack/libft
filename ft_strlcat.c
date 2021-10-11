/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejafer <ejafer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:02:09 by ejafer            #+#    #+#             */
/*   Updated: 2021/10/11 15:02:09 by ejafer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	const int	dstlen = ft_strlen(dst);
	const int	srclen = ft_strlen(src);
	const int	appendlen = size - dstlen - 1;
	char		*offset;

	offset = dst + dstlen;
	if (srclen < appendlen)
		ft_memcpy(offset, src, srclen + 1);
	else if (appendlen > 0)
	{
		ft_memcpy(offset, src, appendlen);
		*(offset + appendlen) = '\0';
	}
	// Have to test
	return (dstlen + srclen);
}
