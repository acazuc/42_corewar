/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_mnemo_st.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/10 09:25:14 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/10 18:37:46 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

void	read_mnemo_st(t_parser *p, t_bin *bin, t_instruction *instr)
{
	check_valid_args(p, instr, build_valid_args_2(T_REG, T_IND | T_REG));
	bin_append_int8(bin, OP_ST);
	print_ocp(bin, instr);
	bin_append_int8(bin, instr->arguments->argument->value);
	bin_append_size(bin, instr->arguments->next->argument->value
			, get_argument_size(instr->arguments->next->argument));
}
