/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstrider <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/19 11:45:26 by bstrider          #+#    #+#             */
/*   Updated: 2020/11/12 21:12:47 by bstrider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	int		cmp;
	size_t	cnt;

	cmp = 0;
	cnt = 0;
	while (!(*s1 == '\0' && *s2 == '\0') && cnt < n)
	{
		cmp = (unsigned char)*s1 - (unsigned char)*s2;
		if (*s1 != *s2)
			break ;
		s1++;
		s2++;
		cnt++;
	}
	return (cmp);
}
