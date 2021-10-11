/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejafer <ejafer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 15:02:01 by ejafer            #+#    #+#             */
/*   Updated: 2021/10/10 15:02:01 by ejafer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*temp;

	if (nmemb == 0 || size == 0)
		return (NULL);
	temp = malloc(nmemb * size);
	if (temp == NULL)
		return (NULL);
	return (temp);
}
