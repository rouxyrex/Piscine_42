/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdebord <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/22 14:13:14 by rdebord           #+#    #+#             */
/*   Updated: 2017/08/22 15:55:16 by rdebord          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include <unistd.h>
# include <stdlib.h>

int		main(int argc, char **argv);
void	ft_match(char *operateur, int a, int b);

void	ft_aff(char *str);

int		ft_isspace(char c);
int		ft_strlen(char *str);
void	gestion_spaces(char c, int i);
int		ft_atoi(char *str);

char	*addition(int a, int b);
char	*soustraction(int a, int b);
char	*multiplication(int a, int b);
char	*modulo(int a, int b);
char	*division(int a, int b);

int		ft_nbchiffres(int n);
char	*ft_neg(char *res, int n, int nb);
char	*ft_pos(char *res, int n, int nb);
char	*ft_itoa(int n);

#endif
