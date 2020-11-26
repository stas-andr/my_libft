/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstrider <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 19:12:20 by bstrider          #+#    #+#             */
/*   Updated: 2020/11/25 20:16:55 by bstrider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char		*ft_strtrim(char const *s1, char const *set)
{
	unsigned char	cnt_trim;

	cnt_trim = 0;
	while (ft_strchr(set, *s1) && *s1)
		s1++;
	while (*s1)
	{
		cnt_trim++;
		s1++;
	}
	while (ft_strchr(set, *(s1--)) && cnt_trim != 0)
		cnt_trim--;
	return (ft_substr(s1 - cnt_trim + 1, 0, cnt_trim + 1));
}
