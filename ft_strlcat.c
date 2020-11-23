/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstrider <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 19:28:54 by bstrider          #+#    #+#             */
/*   Updated: 2020/11/09 22:33:48 by bstrider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int cnt;

	cnt = 0;
	while (*dst)
	{
		dst++;
		if (cnt < (int)size)
			cnt++;
	}
	while (*src)
	{
		if (cnt < (int)(size - 1))
		{
			*dst = *src;
			dst++;
		}
		src++;
		cnt++;
	}
	if (size)
		*dst = '\0';
	return (cnt);
}
