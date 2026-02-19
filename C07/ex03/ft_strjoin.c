/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joavieir <joavieir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 13:59:08 by joavieir          #+#    #+#             */
/*   Updated: 2026/02/19 15:05:28 by joavieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strarrlen(int size, char **strs)
{
	int	t_len;
	int	i;

	t_len = 0;
	i = 0;
	while (i < size)
		t_len += ft_strlen(strs[i++]);
	return (t_len);
}

int	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ret;
	int		i;
	int		k;

	if (size == 0 || strs == NULL || sep == NULL)
		return (malloc(sizeof(char)));
	ret = malloc(ft_strarrlen(size, strs)
			+ (ft_strlen(sep) * (size - 1)) + 1);
	i = 0;
	k = 0;
	while (i < size)
	{
		k += ft_strcpy(&ret[k], strs[i]);
		if (i < size - 1)
			k += ft_strcpy(&ret[k], sep);
		i++;
	}
	ret[k] = '\0';
	return (ret);
}

/*
int	main(void)
{
	char	*strings[] = {"Hi, my name is taco",
				"I'm quite the big fan of programming",
				"I dream of working on video-game production."
			     };
	char	*separator = " and ";
	printf("%s\n", ft_strjoin(3, strings, separator));
}
*/
