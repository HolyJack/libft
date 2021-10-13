/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejafer <ejafer@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 13:55:01 by ejafer            #+#    #+#             */
/*   Updated: 2021/10/11 13:55:01 by ejafer           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;

	str = (char *) s;
	str = str + ft_strlen(str) - 1;
	while (*str)
	{
		if (*str == c)
			return (str);
		str--;
	}
	return (NULL);
}
