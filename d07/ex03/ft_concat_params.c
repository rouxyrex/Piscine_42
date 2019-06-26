/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdebord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/17 15:18:30 by rdebord           #+#    #+#             */
/*   Updated: 2017/08/17 15:18:32 by rdebord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_nballoc(int argc, char **argv)
{
	int		i;
	int		j;
	int		n;

	i = 1;
	n = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			n++;
			j++;
		}
		i++;
	}
	n += argc - 1;
	return (n);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		i;
	int		j;
	int		h;

	i = 1;
	h = 0;
	str = (char *)malloc(ft_nballoc(argc, argv) * sizeof(char));
	if (!str)
		return (NULL);
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			str[h] = argv[i][j];
			h++;
			j++;
		}
		if (h != ft_nballoc(argc, argv) - 1)
			str[h++] = '\n';
		i++;
	}
	str[h] = '\0';
	return (str);
}
