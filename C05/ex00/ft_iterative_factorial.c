/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlata <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:20:49 by mlata             #+#    #+#             */
/*   Updated: 2024/10/24 15:24:17 by mlata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	int	res;

	res = ft_iterative_factorial(6);
	printf("%d", res);
	return (0);
}*/

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	i = 1;
	res = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
		res *= i++;
	return (res);
}
