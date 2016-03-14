/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_instr_lld.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/14 11:02:36 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/14 15:27:41 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "disassembler.h"

void	print_instr_lld(t_bin *bin)
{
	char	ocp;

	ft_putstr("lld ");
	ocp = read_int8(bin);
	if (read_ocp_val(ocp, 1) == DIR_CODE)
		print_register(read_int8(bin));
	else
		print_indirect(read_int16(bin));
	print_arg_sep();
	print_register(read_int8(bin));
	ft_putchar('\n');
}
