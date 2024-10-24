/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlata <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:34:01 by mlata             #+#    #+#             */
/*   Updated: 2024/10/24 16:08:25 by mlata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	main(void)
{
	int	res;

	res = ft_recursive_power(2, 3);
	printf("%d", res);
	return (0);
}*/

int	ft_recursive_power(int nb, int power)
{
	int	res;

	if (power < 0)
		return (0);
	else if (nb == 0 || power == 0)
		return (1);
	res = nb * ft_recursive_power(nb, power - 1);
	return (res);
}
