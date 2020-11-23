/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstrider <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 20:41:53 by bstrider          #+#    #+#             */
/*   Updated: 2020/10/28 20:47:10 by bstrider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned int	cnt;
	char			*temp;

	cnt = 0;
	temp = (char*)s;
	while (cnt < n)
		temp[cnt++] = 0;
}
