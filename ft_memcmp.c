/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstrider <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 00:21:13 by bstrider          #+#    #+#             */
/*   Updated: 2020/11/12 21:11:59 by bstrider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int				cmp;
	size_t			cnt;
	unsigned char	*temp_s1;
	unsigned char	*temp_s2;

	temp_s1 = (unsigned char*)s1;
	temp_s2 = (unsigned char*)s2;
	cmp = 0;
	cnt = 0;
	while (cnt < n)
	{
		cmp = *temp_s1 - *temp_s2;
		if (*temp_s1 != *temp_s2)
			break ;
		temp_s1++;
		temp_s2++;
		cnt++;
	}
	return (cmp);
}
