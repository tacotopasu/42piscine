/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joavieir <joavieir@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 15:10:16 by joavieir          #+#    #+#             */
/*   Updated: 2026/02/01 16:57:14 by joavieir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_char_is_lowercase_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	ft_char_is_uppercase_alpha(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

int	ft_char_is_alpha(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = 0;
	new_word = 1;
	while (str[i])
	{
		if (!ft_char_is_alpha(str[i]))
		{
			new_word = 1;
		}
		if (new_word && ft_char_is_lowercase_alpha(str[i]))
		{
			str[i] -= 32;
			new_word = 0;
		}
		else if (new_word && ft_char_is_uppercase_alpha(str[i]))
			new_word = 0;
		else if (new_word && ft_char_is_alpha(str[i]))
			new_word = 0;
		else if (!new_word && ft_char_is_uppercase_alpha(str[i]))
			str[i] += 32;
		i++;
	}
	return (str);
}
