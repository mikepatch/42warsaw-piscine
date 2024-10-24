/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlata <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:29:05 by mlata             #+#    #+#             */
/*   Updated: 2024/10/24 16:07:19 by mlata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	main (void)
{
	int	res;

	res = ft_iterative_power(3, 3);
	printf("%d", res);
	return (0);
}*/

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	tmp;
	int	res;

	if (power < 0)
		return (0);
	if (nb == 0 || power == 0)
		return (1);
	i = 1;
	tmp = 1;
	while (i <= power)
	{
		res = tmp * nb;
		tmp = res;
		i++;
	}
	return (res);
}
