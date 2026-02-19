/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joavieir <joavieir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/18 17:55:32 by joavieir          #+#    #+#             */
/*   Updated: 2026/02/19 15:10:35 by joavieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

char	*ft_strdup(char *src)
{
	char	*ret;
	int		size;

	size = 0;
	while (src[size])
		size++;
	ret = (char *) malloc(sizeof(char) * size + 1);
	size = 0;
	while (src[size])
	{
		ret[size] = src[size];
		size++;
	}
	ret[size] = '\0';
	return (ret);
}

/*
int	main(void)
{
	char	*string;

	string = "Hellope!\n";
	printf("%s", ft_strdup(string));
}
*/
