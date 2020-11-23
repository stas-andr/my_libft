/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstrider <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 18:39:09 by bstrider          #+#    #+#             */
/*   Updated: 2020/11/14 19:25:06 by bstrider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ret;
	unsigned int	cnt_cop;

	cnt_cop = 0;
	ret = (char *)malloc((len + 1) * sizeof(char));
	if (!ret)
		return (NULL);
	while (s[start] && cnt_cop < len && start < ft_strlen(s))
	{
		ret[cnt_cop++] = s[start++];
	}
	ret[cnt_cop] = '\0';
	return (ret);
}
