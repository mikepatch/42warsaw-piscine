/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlata <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 16:53:56 by mlata             #+#    #+#             */
/*   Updated: 2024/10/20 15:59:24 by mlata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	char	*start;

	start = str;
	while (*str)
		str++;
	return (str - start);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (*s1 && *s2 && i < n)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
		i++;
	}
	if (i < n)
		return (*s1 - *s2);
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		if (ft_strncmp(str, to_find, ft_strlen(to_find)) == 0)
			return (str);
		str++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	haystack[] = "Elo 420 30";
	char	needle[] = "420";
	char	*res;
	
	res = ft_strstr(haystack, needle);
	printf("Result: %s", res);
	return (0);
}*/
