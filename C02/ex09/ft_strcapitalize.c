/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlata <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 12:49:57 by mlata             #+#    #+#             */
/*   Updated: 2024/10/19 12:26:01 by mlata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	is_alphanumeric(char c)
{
	return ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'));
}

char	to_uppercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - ('a' - 'A'));
	return (c);
}

char	to_lowercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + ('a' - 'A'));
	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = 0;
	new_word = 1;
	while (str[i] != '\0')
	{
		if (is_alphanumeric(str[i]))
		{
			if (new_word && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] = to_uppercase(str[i]);
			else if (!new_word && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] = to_lowercase(str[i]);
			new_word = 0;
		}
		else
			new_word = 1;
		i++;
	}
	return (str);
}
/*
char	*ft_strcapitalize(char *str)
{
	int	i;
	
	i = 0;
	if (str == NULL || str[0] == '\0')
		return str;
	while (str[i] != '\0')
	{
		if (i != 0 && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] += 32;
		else if (((str[i - 1] > 31 && str[i - 1] < 48) || i == 0)
			&& (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		i++;
	}
	return (str);
}
*/
/*
int	main(void)
{
	char	str[] = 
	"salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	
	ft_strcapitalize(str);
	printf ("%s", str);
	return (0);
}
*/
