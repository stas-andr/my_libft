/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstrider <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 17:26:41 by bstrider          #+#    #+#             */
/*   Updated: 2020/11/23 12:23:09 by bstrider         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <errno.h>
#include <stdlib.h>

static char	*ft_strndup(const char *s, size_t n)
{
	size_t	cnt;
	char	*dest;

	dest = (char *)malloc((n + 1) * sizeof(char));
	cnt = 0;
	if (dest != NULL)
	{
		while (cnt < n)
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

static int	ft_cnt_words(char const *str, char c)
{
	int	ret;
	int	is_word;

	ret = 0;
	is_word = 0;
	while (*str)
	{
		if (*str != c && !is_word)
		{
			is_word = 1;
			ret++;
		}
		else if (*str == c)
			is_word = 0;
		str++;
	}
	return (ret);
}

static void	ft_free_arr(char **arr, int index)
{
	while (index--)
		free(arr[index]);
	free(arr);
}

char		**ft_split(char const *s, char c)
{
	char		**ret;
	char const	*word;
	int			cnt;

	cnt = 0;
	word = NULL;
	if (!(ret = (char **)malloc((ft_cnt_words(s, c) + 1) * sizeof(char *))))
		return (ret);
	while (*s)
	{
		if (*s != c)
			word = (!word) ? s : word;
		else
		{
			if (word && !(ret[cnt++] = ft_strndup(word, s - word)))
			{
				ft_free_arr(ret, cnt - 1);
				return (NULL);
			}
			word = NULL;
		}
		s++;
	}
	ret[cnt] = (word) ? ft_strndup(word, s - word) : NULL;
	return (ret);
}
