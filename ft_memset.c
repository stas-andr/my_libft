/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstrider <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 19:10:22 by bstrider          #+#    #+#             */
/*   Updated: 2020/11/22 18:32:46 by bstrider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned int	cnt;
	char			*temp;

	cnt = 0;
	temp = (char*)b;
	while (cnt < len)
		temp[cnt++] = c;
	return (void*)b;
}
