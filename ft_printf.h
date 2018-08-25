/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmukwind <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/16 14:21:03 by cmukwind          #+#    #+#             */
/*   Updated: 2018/08/25 14:52:07 by cmukwind         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include <wchar.h>
# include <locale.h>

int						pf_hex_p(va_list ap);
int						ft_atoi(const char *str);
int						move_on(va_list ap);
int						cspec(char p);
int						check_flag(char *p, int i, va_list ap);
int						ft_printf(const char *format, ...);
int						pf_putstr(va_list ap);
int						pf_wdec(va_list ap);
int						pf_woctal(va_list ap);
int						pf_woctal_b(va_list ap);
int						pf_octal_b(va_list ap);
int						pf_putwstr(va_list ap);
int						pf_putwchar(va_list ap);
int						pf_putnbr(va_list ap);
int						pf_putwnbr(va_list ap);
int						pf_putchar(va_list ap);
int						pf_ptradd(va_list ap);
int						pf_binary(va_list ap);
int						pf_octal(va_list ap);
int						pf_dec(va_list ap);
int						pf_percent(va_list ap);
int						pf_hex_x(va_list ap);
int						pf_hex_h(va_list ap);
int						pf_hex_a(va_list ap);
int						pf_soctal(va_list ap);
int						digit_count(intmax_t nb);
int						pf_hex(va_list ap);
void					specs_init(int (**specs)(va_list ap));
int						ft_putchar(char c);
int						ft_putstr(char const *str);
int						ft_putwstr(wchar_t *wstr);
int						ft_putwchar(wchar_t wchar);
int						ft_putnbr(int nbr1);
int						ft_putnbr_base(int nb, char *base);
int						ft_put_unbr_base(uintmax_t nb, char *base);
int						ft_strlen(const char *str);
char					*ft_strdup(const char *str);
char					*ft_itoa_base(int value, int base);
int						flags(va_list ap);
long long				ft_putwnbr(long long nbr1);
long long				ft_putwnbr_base(long long nb, char *base);
unsigned long long		ft_put_wunbr_base(unsigned long long nb, char *base);
int						ft_uputnbr(unsigned int nbr1);
int						check_flag_15a(char *p, va_list ap);
int						check_flag_15b(char *p, va_list ap);
int						check_flag_18a(char *p, va_list ap);
int						check_flag_18b(char *p, va_list ap);
int						plus_flag(va_list ap);

#endif
