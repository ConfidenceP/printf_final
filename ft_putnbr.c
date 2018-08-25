/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmukwind <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 07:27:32 by cmukwind          #+#    #+#             */
/*   Updated: 2018/08/25 09:16:09 by cmukwind         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_putnbr(int nbr1)
{
	int	nbr2;

	nbr2 = nbr1;
	if (nbr1 == -2147483648)
		ft_putstr("-2147483648");
	else if (nbr1 < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nbr1);
	}
	else if (nbr2 >= 10)
	{
		ft_putnbr(nbr2 / 10);
		ft_putchar(nbr2 % 10 + '0');
	}
	else
		ft_putchar(nbr2 + '0');
	return (0);
}
