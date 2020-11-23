/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstrider <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 23:32:53 by bstrider          #+#    #+#             */
/*   Updated: 2020/11/23 14:28:14 by bstrider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t good_index;

	if (!ft_strlen(little))
		return ((char *)big);
	if (ft_strlen(big) < ft_strlen(little))
		return (NULL);
	if (ft_strlen(little) > len)
		return (NULL);
	good_index = len - ft_strlen(little) + 1;
	while (good_index--)
	{
		if (!ft_strncmp(big, little, ft_strlen(little)))
			return (char *)(big);
		big++;
	}
	return (NULL);
}
