/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmukwind <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 10:37:25 by cmukwind          #+#    #+#             */
/*   Updated: 2018/08/23 17:32:13 by cmukwind         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_putnbr_base(int nb, char *base)
{
	int		a;
	int		len_str;

	if (nb == -2147483648)
		return (nb);
	if (nb < 0)
	{
		ft_putchar('-');
		nb = nb * -1;
	}
	len_str = ft_strlen(base);
	a = nb % len_str;
	nb = nb / len_str;
	if (nb > 0)
		ft_putnbr_base(nb, base);
	return (ft_putchar(base[a]));
}
