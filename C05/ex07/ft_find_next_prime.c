/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlata <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:49:27 by mlata             #+#    #+#             */
/*   Updated: 2024/10/24 16:08:46 by mlata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int	ft_find_next_prime(int nb);

int	main(void)
{
	int	res;

	res = ft_find_next_prime(8);
	printf("%d", res);
	return (0);
}*/

int	ft_is_prime(int nb)
{
	int	i;
	int	tmp;

	i = 1;
	tmp = 0;
	while (i <= nb)
	{
		if (nb % i == 0)
			tmp++;
		i++;
	}
	if (tmp == 2)
		return (1);
	return (0);
}

int	ft_find_next_prime(int nb)
{
	nb++;
	while (!ft_is_prime(nb))
	{
		nb++;
	}
	return (nb);
}
