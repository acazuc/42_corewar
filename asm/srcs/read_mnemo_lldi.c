/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_mnemo_lldi.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/10 09:25:14 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/10 19:43:34 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

void	read_mnemo_lldi(t_parser *p, t_bin *bin, t_instruction *instr)
{
	check_valid_args(p, instr, build_valid_args_3(T_REG | T_DIR | T_IND
				, T_DIR | T_REG, T_REG));
	bin_append_int8(bin, OP_LLDI);
	print_ocp(bin, instr);
	if (instr->arguments->argument->type == T_DIR)
		instr->arguments->argument->type = T_IND;
	if (instr->arguments->next->argument->type == T_DIR)
		instr->arguments->next->argument->type = T_IND;
	bin_append_size(bin, instr->arguments->argument);
	bin_append_size(bin, instr->arguments->next->argument);
	bin_append_int8(bin, instr->arguments->next->next->argument->value);
}
