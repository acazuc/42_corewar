/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_instr_zjmp.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/14 11:00:45 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/14 13:26:11 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "disassembler.h"

void	print_instr_zjmp(t_bin *bin)
{
	int16_t		val;

	val = read_int16(bin);
	ft_putstr("zjmp ");
	ft_putchar(DIRECT_CHAR);
	ft_putnbr(val);
	ft_putchar('\n');
}
