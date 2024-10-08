/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victda-s <victda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 19:03:26 by victda-s          #+#    #+#             */
/*   Updated: 2024/10/08 14:16:41 by victda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char s1[], char s2[])
{
	int	i;
	int	lenght;

	lenght = 0;
	i = 0;
	while (s1[lenght] != '\0')
		lenght++;
	while (i <= lenght)
	{
		if (s1[i] != s2[i])
		{
			if (s1[i] > s2[i])
				return (1);
			else
				return (-1);
			i++;
		}
	}
	return (0);
}

int	ft_strlen(char arr[])
{
	int	i;

	i = 0;
	while (arr[i] != '\0')
		i++;
	return (i);
}
void	ft_sort_params(char array[])
{
	int	i;
	int cmp;

	i = 0;
	while(array[i])
	{
		cmp = ft_strcmp(&array[i], &array[i + 1]);
		if(cmp > 0)
		{
			i++;
		}
		else{
			printf("resultado: %d", i);
			// array[i] = '5';
			i = 0;
		}
	}
}

int main(void)
{
	char teste[6] = {'5','4','1','2', '1'};
	ft_sort_params(teste);
	return (0);
}