/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstrider <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 17:01:44 by bstrider          #+#    #+#             */
/*   Updated: 2020/11/16 00:51:51 by bstrider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ret;
	size_t	cnt;

	cnt = 0;
	if (size == 0 || nmemb == 0)
		return (malloc(0));
	ret = (char *)malloc(nmemb * size);
	if (ret)
		while (cnt < nmemb * size)
		{
			ret[cnt++] = 0;
		}
	return (void *)ret;
}
