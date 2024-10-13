/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victda-s <victda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 14:32:27 by victda-s          #+#    #+#             */
/*   Updated: 2024/10/11 18:02:19 by victda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (*tab)
	{
		if (f(tab[i]) == 1)
		{
			count++;
		}
		tab++;
	}
	return (count);
}

/*
int ft_alphabet(char *l)
{
    if((*l >= 'a' && *l <= 'z') || (*l >= 'A' && *l <= 'Z'))
        return (1);
    return (0);
}
int main(void)
{
    int count;
    char *tab[] = {"3", "a", "&", "a", NULL};
    count = ft_count_if(tab, &ft_alphabet);
    printf("Caracteres do alfabeto: %d\n", count);
    return 0;
}

*/