/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_instr_sti.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/14 11:01:46 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/14 16:24:34 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "disassembler.h"

void	print_instr_sti(t_bin *bin)
{
	char	ocp;

	ft_putstr("sti ");
	ocp = read_int8(bin);
	print_register(read_int8(bin));
	print_arg_sep();
	if (read_ocp_val(ocp, 2) == REG_CODE)
		print_register(read_int8(bin));
	else if (read_ocp_val(ocp, 2) == IND_CODE)
		print_indirect(read_int16(bin));
	else
		print_direct(read_int16(bin));
	print_arg_sep();
	if (read_ocp_val(ocp, 3) == REG_CODE)
		print_register(read_int8(bin));
	else
		print_direct(read_int16(bin));
	ft_putchar('\n');
}
