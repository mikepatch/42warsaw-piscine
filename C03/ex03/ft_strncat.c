/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlata <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 14:31:12 by mlata             #+#    #+#             */
/*   Updated: 2024/10/20 12:25:39 by mlata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	char			*start;

	start = dest;
	while (*dest)
		dest++;
	i = 0;
	while (*src && i < nb)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (start);
}
/*
int	main(void)
{
	char	dest[] = "elo";
	char	src[] = " 42030";
	char	*res;

	//dest = "elo";
	//src = "eelo";
	res = ft_strncat(dest, src, 6);
	printf("%s", res);
	return (0);
}*/
