/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstrider <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 19:04:55 by bstrider          #+#    #+#             */
/*   Updated: 2020/11/05 21:51:18 by bstrider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	int		cnt;
	char	*temp_dst;
	char	*temp_src;

	if (dst || src)
	{
		temp_dst = (char *)dst;
		temp_src = (char *)src;
		if (dst > src)
		{
			cnt = len;
			while (cnt--)
				temp_dst[cnt] = temp_src[cnt];
		}
		else
		{
			cnt = -1;
			while (++cnt < (int)len)
				temp_dst[cnt] = temp_src[cnt];
		}
	}
	return (dst);
}
