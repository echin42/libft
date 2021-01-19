/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echin <echin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 21:23:04 by echin             #+#    #+#             */
/*   Updated: 2021/01/19 22:00:32 by echin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_free_splits(char **splits, int n)
{
	int	i;

	i = -1;
	while (++i < n)
		free(splits[i]);
	free(splits);
}

static int		ft_count_words(char const *s, char c)
{
	int n_words;
	int i;

	n_words = 0;
	i = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
		{
			n_words++;
			while (s[i] == c)
				i++;
		}
		else
			i++;
	}
	if (i > 0 && s[i - 1] != c)
		n_words++;
	return (n_words);
}

static int		ft_create_splits(char **splits, char const *s, char c)
{
	int i;
	int w;
	int j;
	int len;

	i = -1;
	w = -1;
	while (s[++i])
	{
		if (s[i] != c)
		{
			len = 0;
			if (i == 0 || (i > 0 && s[i - 1] == c))
			{
				j = 0;
				while (s[i + len] && s[i + len] != c)
					len++;
				if (!(splits[++w] = ft_calloc(sizeof(char), len + 1)))
					return (w);
			}
			splits[w][j] = s[i];
			splits[w][++j] = '\0';
		}
	}
	return (0);
}

char			**ft_split(char const *s, char c)
{
	int		words_count;
	char	**splits;
	int		nb_malloc;

	if (s == 0)
		return (0);
	words_count = ft_count_words(s, c);
	if (!(splits = ft_calloc(sizeof(char *), words_count + 1)))
		return (0);
	if ((nb_malloc = ft_create_splits(splits, s, c)))
	{
		ft_free_splits(splits, nb_malloc);
		return (0);
	}
	splits[words_count] = 0;
	return (splits);
}
