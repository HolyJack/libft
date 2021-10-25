/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejafer <ejafer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 15:43:42 by ejafer            #+#    #+#             */
/*   Updated: 2021/10/25 18:10:34 by ejafer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static const char	*ft_skipispace(const char *str)
{
	while (*str == ' ' || *str == '\t' || *str == '\n'
		|| *str == '\f' || *str == '\r' || *str == '\v')
		str++;
	return (str);
}

int	ft_atoi(const char *str)
{
	long int		buf;
	int				sign;

	sign = 1;
	str = ft_skipispace(str);
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '+')
		str++;
	buf = 0;
	while (ft_isdigit(*str) == 1)
	{
		buf *= 10;
		buf += (*str - '0');
		if (sign * buf < -2147483648)
			return (0);
		if (sign * buf > 2147483647)
			return (-1);
		str++;
	}
	return (sign * buf);
}
