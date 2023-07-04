/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emedina- <emedina-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 19:21:06 by emedina-          #+#    #+#             */
/*   Updated: 2023/07/04 21:09:43 by emedina-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define HEX_UPP_BASE "0123456789ABCDEF"
# define HEX_LOW_BASE "0123456789abcdef"

# include <stdio.h>
# include <stdarg.h>
# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

int     ft_printf(char const *str, ...);
void    ft_putchar_counter(char c, size_t *counter);
void    ft_putunsignedint_counter(unsigned int n, size_t *counter);
void    ft_putptr_counter(void *ptr, size_t *counter);
void    ft_putstr_counter(char *str, size_t *counter);
void    ft_putnbr_counter(int n, size_t *counter);
size_t  ft_strlen(const char *s);
size_t  ft_len(unsigned long long n, char *base);
char    *ft_aux(unsigned long long n, char *base);
void    ft_puthex_counter(unsigned int n, size_t *counter, char *base);
#endif