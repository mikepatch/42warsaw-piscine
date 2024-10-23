/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlata <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 14:30:39 by mlata             #+#    #+#             */
/*   Updated: 2024/10/12 22:56:51 by mlata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
{
	char	*temp;
	unsigned int	i;

	temp = dest;
	i = 0;
	while (src[i] != '\0' && i < n)
	{
		temp[i] = src[i];
		i++;
	}
	while (i < n)
	{
		temp[i] = '\0';
		i++;
	}
	return(dest);
}*/
/*
int	main(void)
{
	char	dest[10];
	char*	src;
//	char*	res;

	src = "elo 42030";
	ft_strncpy(dest, src, 2);
	//printf("%s", res);
	printf("%s", dest);
	return (0);
} */
