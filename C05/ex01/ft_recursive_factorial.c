/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlata <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:25:06 by mlata             #+#    #+#             */
/*   Updated: 2024/10/24 16:22:07 by mlata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	main(void)
{
	int	res;

	res = ft_recursive_factorial(6);
	printf("%d", res);
	return (0);
}*/

int	ft_recursive_factorial(int nb)
{
	int	res;

	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	res = nb * (ft_recursive_factorial(nb - 1));
	return (res);
}
