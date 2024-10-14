/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victda-s <victda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 17:39:17 by victda-s          #+#    #+#             */
/*   Updated: 2024/10/13 21:23:25 by victda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	diff;
	int	*arr;
	int	i;

	if (min >= max)
	{
		return (0);
	}
	diff = max - min;
	arr = (int *) malloc(diff * sizeof(int));
	i = 0;
	if (arr == NULL)
		return (0);
	while (i < diff)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}
/*
int main(void)
{
	int i;
	int min = 0, max = 10;
	int *array = ft_range(min, max);

	i = 0;
	if(array != NULL)
	{
		while(i < (max - min))
		{
			 printf("%d\n", array[i]);
			 i++;
		}
	}
}




// int main(void)
// {
//  int *array;

//  array = ft_range(10, 0);
//  if(array == 0)
//  {
// 	return (0);
//  }
//  for (int i = 0; array[i] != '\0'; i++)
//  { 
//   printf("aqui: %d \n", array[i]);
//  }
//  free(array);
// }
*/
