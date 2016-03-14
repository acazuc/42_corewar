/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_instr_add.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/14 10:55:02 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/14 11:26:36 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "disassembler.h"

void	print_instr_add(t_bin *bin)
{
	char	r1;
	char	r2;
	char	r3;

	r1 = read_int8(bin);
	r2 = read_int8(bin);
	r3 = read_int8(bin);
	ft_putstr("add r");
	ft_putnbr(r1);
	ft_putchar(SEPARATOR_CHAR);
	ft_putstr(" r");
	ft_putnbr(r2);
	ft_putchar(SEPARATOR_CHAR);
	ft_putstr(" r");
	ft_putnbr(r3);
	ft_putchar('\n');
}
