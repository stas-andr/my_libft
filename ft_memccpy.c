/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstrider <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 16:44:49 by bstrider          #+#    #+#             */
/*   Updated: 2020/11/08 19:23:01 by bstrider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memccpy(void *restrict dst,
		const void *restrict src, int c, size_t n)
{
	unsigned char	*temp_dst;
	unsigned char	*temp_src;
	size_t			counter;

	counter = 0;
	temp_dst = (unsigned char *)dst;
	temp_src = (unsigned char *)src;
	while (counter < n)
	{
		temp_dst[counter] = temp_src[counter];
		if (temp_dst[counter] == (unsigned char)c)
			return (temp_dst + counter + 1);
		counter++;
	}
	return (NULL);
}
