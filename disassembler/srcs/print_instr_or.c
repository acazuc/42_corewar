/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_instr_or.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/14 10:59:52 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/14 16:32:59 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "disassembler.h"

void	print_instr_or(t_bin *bin)
{
	char	ocp;

	ft_putstr("or ");
	ocp = read_int8(bin);
	if (read_ocp_val(ocp, 1) == REG_CODE)
		print_register(read_int8(bin));
	else if (read_ocp_val(ocp, 1) == IND_CODE)
		print_indirect(read_int16(bin));
	else
		print_direct(read_int32(bin));
	print_arg_sep();
	if (read_ocp_val(ocp, 2) == REG_CODE)
		print_register(read_int8(bin));
	else if (read_ocp_val(ocp, 2) == IND_CODE)
		print_indirect(read_int16(bin));
	else
		print_direct(read_int32(bin));
	print_arg_sep();
	print_register(read_int8(bin));
	ft_putchar('\n');
}
