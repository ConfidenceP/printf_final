/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unbr_base.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmukwind <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 11:27:05 by cmukwind          #+#    #+#             */
/*   Updated: 2018/08/25 14:21:27 by cmukwind         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int		ft_put_unbr_base(uintmax_t n, int base)
{
	char			*s;
	size_t			nlen;
	uintmax_t		num;
	int			count;

	nlen = 1;
	num = n;
	while (num /= base)
		nlen++;
	if (!(s = (char *)malloc(sizeof(char) * nlen))
		return (NULL);
	while (nlen > 0)
	{
		s[--nlen] = (n % base) + ((n % base > 9) ? 'a' - 10 : '0');
		n /= base;
	}
	s[--nlen] = '\0';
	write (1, s, ft_strlen(s));
	count = ft_strlen(s);
	free(s);
	return (count);
}
/*
{
	int				a;
	int				count;
	unsigned int	len_str;

	count = 0;
	len_str = ft_strlen(base);
	a = nb % len_str;
	if (nb > 0)
	{
		nb = nb / len_str;
		count += ft_put_unbr_base(nb, base);
		ft_putchar(base[a]);
		count++;
	}
	return (count);
}*/
