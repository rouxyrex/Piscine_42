/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdebord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 23:21:15 by rdebord           #+#    #+#             */
/*   Updated: 2017/08/03 23:40:06 by rdebord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_split(int n)
{
	int a;
	int b;

	a = n / 10;
	b = n % 10;
	ft_putchar(48 + a);
	ft_putchar(48 + b);
}

void	ft_print_comb2(void)
{
	int n;
	int m;

	n = 0;
	while (n <= 99)
	{
		m = 0;
		while (m <= 99)
		{
			if (m > n)
			{
				ft_split(n);
				ft_putchar(' ');
				ft_split(m);
				if (n != 98)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
			m++;
		}
		n++;
	}
}
