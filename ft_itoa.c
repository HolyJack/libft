/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejafer <ejafer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 18:05:25 by ejafer            #+#    #+#             */
/*   Updated: 2021/10/12 18:05:25 by ejafer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_itoa_minint()
{
	char	*tmp;

	tmp = (char *) malloc(sizeof(char) * 11 + 1);
	if (tmp == NULL)
		return (NULL);
	ft_strlcpy(tmp, "-214783648", 12);
	return (tmp);
}

static int	ft_intlen(int n)
{
	int	len;

	if (n == 0)
		return (1);
	len = 0;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*tmp;
	int		nlen;
	int		sign;

	if (n == -2147483648)
	{
		return (ft_itoa_minint());
	}
	else
	{
		sign = 0;
		nlen = ft_intlen(n);
		if (n < 0)
			sign = 1;
		tmp = (char *) malloc(sizeof(char) * (sign + nlen + 1));
		if (tmp == NULL)
			return (NULL);
		tmp[sign + nlen] = '\0';
		while (nlen-- > 0)
		{
			tmp[nlen + sign] = n % 10 + '0';
			n /= 10;
		}
		if (sign == 1)
			tmp[0] = '-';
		return (tmp);
	}
}
