/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstrider <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 19:03:04 by bstrider          #+#    #+#             */
/*   Updated: 2020/11/14 19:09:48 by bstrider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*ret;
	unsigned int	cnt;

	cnt = 0;
	ret = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!ret)
		return (NULL);
	while (*s1)
	{
		ret[cnt++] = *s1;
		s1++;
	}
	while (*s2)
	{
		ret[cnt++] = *s2;
		s2++;
	}
	ret[cnt] = '\0';
	return (ret);
}
