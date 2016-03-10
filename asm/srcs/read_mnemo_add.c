/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_mnemo_add.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/10 09:25:14 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/10 18:09:42 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

void	read_mnemo_add(t_parser *p, t_bin *bin, t_instruction *instr)
{
	check_valid_args(p, instr, build_valid_args_3(T_REG, T_REG, T_REG));
	bin_append_int8(bin, OP_ADD);
	print_ocp(bin, instr);
	bin_append_int8(bin, instr->arguments->argument->value);
	bin_append_int8(bin, instr->arguments->next->argument->value);
	bin_append_int8(bin, instr->arguments->next->next->argument->value);
}
