/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstrider <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 10:50:14 by bstrider          #+#    #+#             */
/*   Updated: 2020/11/09 19:27:59 by bstrider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int cnt;

	cnt = 0;
	while (*src)
	{
		if (cnt < (int)(size - 1))
		{
			*dst = *src;
			dst++;
		}
		cnt++;
		src++;
	}
	if (size)
		*dst = '\0';
	return (cnt);
}
