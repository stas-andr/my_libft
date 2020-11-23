/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstrider <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 21:18:56 by bstrider          #+#    #+#             */
/*   Updated: 2020/11/18 23:48:22 by bstrider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_cnt_num(int n)
{
	int cnt;

	cnt = 1;
	while (n >= 10 || n <= -10)
	{
		n /= 10;
		cnt++;
	}
	return (cnt);
}

char		*ft_itoa(int n)
{
	char	*ret;
	int		cnt_num;
	int		has_minus;

	has_minus = (n < 0) ? 1 : 0;
	cnt_num = ft_cnt_num(n) + has_minus;
	if (!(ret = (char *)malloc((cnt_num + 1) * sizeof(char))))
		return (ret);
	ret[cnt_num] = '\0';
	while (cnt_num--)
	{
		if (has_minus)
			ret[cnt_num] = -(n % 10) + '0';
		else
			ret[cnt_num] = (n % 10) + '0';
		n /= 10;
	}
	if (has_minus)
		ret[0] = '-';
	return (ret);
}
