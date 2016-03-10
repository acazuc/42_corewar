/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_mnemo_live.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/10 09:25:14 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/10 18:19:10 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

void	read_mnemo_live(t_parser *p, t_bin *bin, t_instruction *instr)
{
	check_valid_args(p, instr, build_valid_args_1(T_DIR));
	bin_append_int8(bin, OP_LIVE);
	bin_append_int32(bin, instr->arguments->argument->value);
}
