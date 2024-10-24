/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlata <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:42:33 by mlata             #+#    #+#             */
/*   Updated: 2024/10/24 16:09:37 by mlata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int	ft_sqrt(int nb);

int	main(void)
{
	int	res;

	res = ft_sqrt(16);
	printf("%d", res);
	return (0);
}*/

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
