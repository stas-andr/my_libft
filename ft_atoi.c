/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstrider <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/20 19:02:35 by bstrider          #+#    #+#             */
/*   Updated: 2020/11/16 00:05:53 by bstrider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_space(const char ch)
{
	int result;

	result = 0;
	if (ch == ' ' || (ch >= 9 && ch <= 13))
	{
		result = 1;
	}
	return (result);
}

int			ft_atoi(const char *str)
{
	int sign;
	int result;

	sign = 1;
	result = 0;
	while (is_space(*str))
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		str++;
		sign = -1;
	}
	while (ft_isdigit(*str))
	{
		if (result * 10 < result)
			return (sign == 1) ? (-1) : (0);
		result *= 10;
		result += (*str - '0');
		str++;
	}
	return (sign * result);
}
