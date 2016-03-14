/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_instr_st.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/14 10:53:55 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/14 16:31:19 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "disassembler.h"

void	print_instr_st(t_bin *bin)
{
	char	ocp;

	ft_putstr("st ");
	ocp = read_int8(bin);
	print_register(read_int8(bin));
	print_arg_sep();
	if (read_ocp_val(ocp, 2) == REG_CODE)
		print_register(read_int8(bin));
	else if (read_ocp_val(ocp, 2) == IND_CODE)
		print_indirect(read_int16(bin));
	ft_putchar('\n');
}
