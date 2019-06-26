/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdebord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 19:15:36 by rdebord           #+#    #+#             */
/*   Updated: 2017/08/03 20:33:44 by rdebord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	printijk(int i, int j, int k)
{
	if ((i < j) && (j < k))
	{
		ft_putchar(48 + i);
		ft_putchar(48 + j);
		ft_putchar(48 + k);
		if ((i != 7) || (j != 8) || (k != 9))
		{
			ft_putchar((char)(44));
			ft_putchar((char)(32));
		}
	}
}

void	ft_print_comb(void)
{
	int i;
	int j;
	int k;

	i = 0;
	while (i <= 9)
	{
		j = 1;
		while (j <= 9)
		{
			k = 2;
			while (k <= 9)
			{
				printijk(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}
