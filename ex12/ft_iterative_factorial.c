/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victda-s <victda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 15:59:15 by victda-s          #+#    #+#             */
/*   Updated: 2024/10/13 20:42:28 by victda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i <= nb)
	{
		result = result * i;
		i++;
	}
	return (result);
}
/*
int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	i = 1;
	result = 1;
	if (nb == 0)
		return (1);
	if (!(nb < 11 && nb > 1))
		return (0);
	while (i <= nb)
	{
		result = result * i;
		i++;
	}
	return (result);
}


#include <stdio.h>
int main(void)
{
	int nb = 0;
	int teste = ft_iterative_factorial(nb);
	printf("\nresultado: %d \nnb: %d\n \n--------\n", teste, nb);
}
*/
