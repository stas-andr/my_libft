/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstrider <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 00:03:24 by bstrider          #+#    #+#             */
/*   Updated: 2020/11/18 23:58:04 by bstrider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		my_pow(int a, int b)
{
	int cnt;
	int result;

	cnt = 0;
	result = 1;
	if (b == 0)
		return (result);
	while (cnt++ < b)
		result *= a;
	return (result);
}

int		cnt_number(int nb)
{
	int result;

	result = 1;
	while (nb > 9 || nb < -9)
	{
		nb /= 10;
		result++;
	}
	return (result);
}

void	ft_putnbr_fd(int n, int fd)
{
	int cnt;
	int sign;
	int ch;

	ch = '-';
	cnt = cnt_number(n) - 1;
	sign = 1;
	if (n < 0)
	{
		sign = -1;
		write(fd, &ch, 1);
	}
	while (cnt >= 0)
	{
		ch = '0' + (n / my_pow(10, cnt) % 10) * sign;
		write(fd, &ch, 1);
		cnt--;
	}
}
