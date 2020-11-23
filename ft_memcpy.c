/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstrider <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 20:58:46 by bstrider          #+#    #+#             */
/*   Updated: 2020/11/04 21:26:23 by bstrider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t			cnt;
	char			*temp_dst;
	char			*temp_src;

	if (!dst && !src)
		return (dst);
	else
	{
		temp_dst = (char *)dst;
		temp_src = (char *)src;
		cnt = 0;
		while (cnt < n)
		{
			temp_dst[cnt] = temp_src[cnt];
			cnt++;
		}
	}
	return (dst);
}
