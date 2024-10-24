/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlata <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:36:54 by mlata             #+#    #+#             */
/*   Updated: 2024/10/24 16:07:36 by mlata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>

int	ft_fibonacci(int index);

int	main(void)
{
	int	res;

	res = ft_fibonacci(7);
	printf("%d", res);
	return (0);
}*/

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index <= 2)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index -2));
}
