/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstrider <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 23:25:42 by bstrider          #+#    #+#             */
/*   Updated: 2020/11/18 23:57:36 by bstrider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ret;
	unsigned int	cnt;

	cnt = 0;
	if (!(ret = (char *)malloc((ft_strlen(s) + 1) * sizeof(char))))
		return (ret);
	while (s[cnt])
	{
		ret[cnt] = f(cnt, s[cnt]);
		cnt++;
	}
	ret[cnt] = '\0';
	return (ret);
}
