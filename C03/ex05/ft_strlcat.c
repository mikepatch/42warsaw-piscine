/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlata <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 17:58:20 by mlata             #+#    #+#             */
/*   Updated: 2024/10/20 12:21:54 by mlata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	destl;
	unsigned int	srcl;
	unsigned int	i;

	destl = ft_strlen(dest);
	srcl = ft_strlen(src);
	if (size <= destl)
		return (size + srcl);
	i = 0;
	while (src[i] && (destl + i) < (size - 1))
	{
		dest[destl + i] = src[i];
		i++;
	}
	dest[destl + i] = '\0';
	return (destl + srcl);
}
/*
int	main(void)
{
	char	dest[20] = " @#42452";
	char	src[] = "  .,/ ";
	int	res;

	res = ft_strlcat(dest, src, 3);
	printf("%d\n", res);
	return (0);
}*/
