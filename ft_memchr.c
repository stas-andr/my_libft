/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstrider <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 00:30:46 by bstrider          #+#    #+#             */
/*   Updated: 2020/11/08 00:50:19 by bstrider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*temp_s;
	size_t			cnt;

	temp_s = (unsigned char *)s;
	cnt = 0;
	while (cnt < n)
	{
		if (temp_s[cnt] == (unsigned char)c)
			return (temp_s + cnt);
		cnt++;
	}
	return (NULL);
}
