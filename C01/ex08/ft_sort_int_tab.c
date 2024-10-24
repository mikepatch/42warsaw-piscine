/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlata <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 22:58:34 by mlata             #+#    #+#             */
/*   Updated: 2024/10/23 23:48:29 by mlata            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	swapped;

	i = 0;
	while (i < size - 1)
	{
		swapped = 0;
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				ft_swap(&tab[j], &tab[j + 1]);
				swapped = 1;
			}
			j++;
		}
		i++;
		if (swapped == 0)
			break ;
	}
}
/*
int	main(void)
{
	int	tab[] = {4, 2, 3, 5, 1};
	int	i;

	ft_sort_int_tab(tab, 5);
	i = 0;
	while (i < 5)
	{
		printf("%d", tab[i]);
		i++;
	}
	return (0);
}*/
