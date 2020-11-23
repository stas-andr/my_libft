/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstrider <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 21:13:29 by bstrider          #+#    #+#             */
/*   Updated: 2020/11/18 23:44:29 by bstrider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
#include <stdlib.h>
#include "libft.h"

char		*ft_strdup(const char *s)
{
	size_t	cnt;
	char	*dest;

	dest = (char *)malloc(ft_strlen(s) + 1);
	cnt = 0;
	if (dest != NULL)
	{
		while (cnt < ft_strlen(s))
		{
			dest[cnt] = s[cnt];
			cnt++;
		}
		dest[cnt] = '\0';
	}
	else
	{
		errno = ENOENT;
	}
	return (dest);
}
