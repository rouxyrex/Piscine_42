/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdebord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 18:35:25 by rdebord           #+#    #+#             */
/*   Updated: 2017/08/14 18:35:27 by rdebord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

int		ft_isnum(char c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}

int		ft_isalphanum(char c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)
		|| (c >= 48 && c <= 57))
	{
		return (1);
	}
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	ft_strlowcase(str);
	while (ft_isalphanum(str[i]) == 0 && str[i] != '\0')
		i++;
	if (str[i] != '\0')
	{
		str[i] = str[i] - 32;
		i++;
	}
	while (str[i] != '\0')
	{
		if (ft_isalphanum(str[i]) == 0 && ft_isalphanum(str[i + 1]) == 1
			&& ft_isnum(str[i + 1]) == 0)
			str[i + 1] = str[i + 1] - 32;
		i++;
	}
	return (str);
}
