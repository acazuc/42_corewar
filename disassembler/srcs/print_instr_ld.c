/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_instr_ld.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/14 10:52:55 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/14 15:19:51 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "disassembler.h"

void	print_instr_ld(t_bin *bin)
{
	char	ocp;

	ft_putstr("ld ");
	ocp = read_int8(bin);
	if (read_ocp_val(ocp, 1) == IND_CODE)
		print_indirect(read_int16(bin));
	else
		print_direct(read_int32(bin));
	print_arg_sep();
	print_register(read_int8(bin));
	ft_putchar('\n');
}
