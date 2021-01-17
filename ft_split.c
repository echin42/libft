/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echin <echin@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 21:23:04 by echin             #+#    #+#             */
/*   Updated: 2020/11/26 22:48:31 by echin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	if (s[i - 1] != c)
		n_words++;
	return (n_words);
}

static int		*ft_get_words_size(char const *s, char c)
{
	int	w;
	int	i;
	int	words_count;
	int	*words_size;

	words_count = ft_count_words(s, c);
	if (!(words_size = (int *)malloc((words_count + 1) * sizeof(int))))
		return (0);
	i = -1;
	while (++i <= words_count)
		words_size[i] = 0;
	i = 0;
	w = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] != c)
			words_size[w]++;
		else if (i > 0 && s[i - 1] != c && s[i] == c)
			w++;
		i++;
	}
	return (words_size);
}

static int		ft_create_splits(char **splits, char const *s, char c)
{
	int i;
	int w;
	int j;
	int *sizes;

	i = -1;
	w = -1;
	sizes = ft_get_words_size(s, c);
	while (s[++i])
	{
		if (s[i] != c)
		{
			if (i == 0 || (i > 0 && s[i - 1] == c))
			{
				j = 0;
				w++;
				splits[w] = (char *)malloc((sizes[w] + 1) * sizeof(char));
				if (!splits[w])
					return (0);
			}
			splits[w][j] = s[i];
			splits[w][++j] = '\0';
		}
	}
	return (1);
}

char			**ft_split(char const *s, char c)
{
	int		words_count;
	char	**splits;

	words_count = ft_count_words(s, c);
	if (!(splits = (char **)malloc((words_count + 1) * sizeof(char *))))
		return (0);
	if (!ft_create_splits(splits, s, c))
		return (0);
	splits[words_count] = 0;
	return (splits);
}
