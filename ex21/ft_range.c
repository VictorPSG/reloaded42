/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victda-s <victda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:39:17 by victda-s          #+#    #+#             */
/*   Updated: 2024/10/09 10:23:16 by victda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	diff;
	int	*arr;
	int	i;

	diff = max - min;
	arr = (int *) malloc(diff * sizeof(int));
	i = 0;
	while (i <= diff)
	{
		arr[i] = min;
		min++;
		i++;
	}
	arr [min] = '\0';
	return (arr);
}
/*
int main(void)
{
 int *array;

 array = ft_range(-3, 10);
 for (int i = 0; array[i] != '\0'; i++)
 { 
  printf("aqui: %d \n", array[i]);
 }
 free(array);
}
*/