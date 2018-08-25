/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmukwind <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 07:27:32 by cmukwind          #+#    #+#             */
/*   Updated: 2018/08/21 15:24:12 by cmukwind         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

long long		ft_putwnbr(long long nbr1)
{
	long long	nbr2;

	nbr2 = nbr1;
	if ((unsigned long)nbr1 == -9223372036854775808u)
		ft_putstr("-9223372036854775808");
	else if (nbr1 < 0)
	{
		ft_putchar('-');
		ft_putwnbr(-nbr1);
	}
	else if (nbr2 >= 10)
	{
		ft_putwnbr(nbr2 / 10);
		ft_putchar(nbr2 % 10 + '0');
	}
	else
		ft_putchar(nbr2 + '0');
	return (0);
}
