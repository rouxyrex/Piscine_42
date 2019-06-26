/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdebord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 00:25:09 by rdebord           #+#    #+#             */
/*   Updated: 2017/08/04 16:19:05 by rdebord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_printmin(void);

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		if (nb == -2147483648)
		{
			ft_printmin();
		}
		else
		{
			ft_putchar('-');
			nb = -nb;
		}
	}
	if (nb >= 0)
	{
		if (nb <= 9)
		{
			ft_putchar(48 + nb);
		}
		else
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
	}
}

void	ft_printmin(void)
{
	ft_putchar('-');
	ft_putchar('2');
	ft_putnbr(147483648);
}
