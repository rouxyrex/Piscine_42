/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdebord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 15:56:02 by rdebord           #+#    #+#             */
/*   Updated: 2017/08/22 15:56:32 by rdebord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

char	*addition(int a, int b)
{
	int		res;
	char	*mes;

	res = a + b;
	mes = ft_itoa(res);
	return (mes);
}

char	*soustraction(int a, int b)
{
	int		res;
	char	*mes;

	res = a - b;
	mes = ft_itoa(res);
	return (mes);
}

char	*multiplication(int a, int b)
{
	int		res;
	char	*mes;

	res = a * b;
	mes = ft_itoa(res);
	return (mes);
}

char	*modulo(int a, int b)
{
	int		res;
	char	*mes;

	if (b == 0)
		mes = "Stop : modulo by zero";
	else
	{
		res = a % b;
		mes = ft_itoa(res);
	}
	return (mes);
}

char	*division(int a, int b)
{
	int		res;
	char	*mes;

	if (b == 0)
		mes = "Stop : division by zero";
	else
	{
		res = a / b;
		mes = ft_itoa(res);
	}
	return (mes);
}
