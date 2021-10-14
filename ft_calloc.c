/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejafer <ejafer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 15:02:01 by ejafer            #+#    #+#             */
/*   Updated: 2021/10/14 17:35:19 by ejafer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*tmp;

	if (count == 0 || size == 0)
		return (NULL);
	tmp = (void *) malloc(count * size);
	if (tmp == NULL)
		return (NULL);
	ft_bzero(tmp, count);
	return (tmp);
}
