/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejafer <ejafer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:43:42 by ejafer            #+#    #+#             */
/*   Updated: 2021/10/11 15:43:42 by ejafer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	buf;
	int	sign;

	// Have to add another 3 spaces.
	sign = 1;
	while (*nptr == ' ' || *nptr == '\t' || *nptr == '\n'
		|| *nptr == '\t' || *nptr == '\t' || *nptr == '\t')
		nptr++;
	if (*nptr == '-')
		sign = -1;
	nptr++;
	buf = 0;
	while (ft_isdigit(*nptr) && *nptr)
	{
		buf *= 10;
		buf += *nptr - '0';
		nptr++;
	}
	return (sign * buf);
}
