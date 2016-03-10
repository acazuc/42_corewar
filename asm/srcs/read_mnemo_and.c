/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_mnemo_and.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/10 09:25:14 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/10 18:03:44 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

void	read_mnemo_and(t_parser *p, t_bin *bin, t_instruction *instr)
{
	check_valid_args(p, instr, build_valid_args_3(T_REG | T_DIR | T_IND
				, T_REG | T_IND | T_DIR, T_REG));
	bin_append_int8(bin, OP_AND);
	print_ocp(bin, instr);
	bin_append_size(bin, instr->arguments->argument->value
			, get_argument_size(instr->arguments->argument));
	bin_append_size(bin, instr->arguments->next->argument->value
			, get_argument_size(instr->arguments->next->argument));
	bin_append_int8(bin, instr->arguments->next->next->argument->value);
}
