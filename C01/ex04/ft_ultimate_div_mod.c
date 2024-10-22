/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlata <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 12:29:28 by mlata             #+#    #+#             */
/*   Updated: 2024/10/22 12:11:50 by mlata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;

	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
int	main(void)
{

	int	a;
	int	b;

	int *pA;
	int *pB;

	pA = &a;
	pB = &b;

	a = 5;
	b = 2;
	ft_ultimate_div_mod(pA, pB);
	printf ("Div: %d, mod: %d", *pA, *pB);
	return (0);
}*/
