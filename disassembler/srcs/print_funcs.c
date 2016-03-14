/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_funcs.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/14 14:03:17 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/14 14:10:42 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "disassembler.h"

void	print_register(int8_t value)
{
	ft_putchar('r');
	ft_putnbr(value);
}

void	print_indirect(int16_t val)
{
	ft_putnbr(val);
}

void	print_direct(int32_t val)
{
	ft_putchar(DIRECT_CHAR);
	ft_putnbr(val);
}

void	print_arg_sep(void)
{
	ft_putchar(SEPARATOR_CHAR);
	ft_putchar(' ');
}
