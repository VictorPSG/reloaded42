/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: victda-s <victda-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 21:53:54 by victda-s          #+#    #+#             */
/*   Updated: 2024/10/13 22:07:22 by victda-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_args(int length, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < length)
	{
		j = 0;
		while (argv[i][j])
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] == str2[i] && str1[i] && str2[i])
		i++;
	return (str1[i] - str2[i]);
}

void	sort_args(int length, char **argv)
{
	int		i;
	char	*temp;

	i = 1;
	while (i < length - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			temp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = temp;
			i = 1;
		}
		else
		{
			i++;
		}
	}
}
/*
int		main(int argc, char **argv)
{
	sort_args(argc, argv);
	print_args(argc, argv);
	return (0);
}
*/