/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_instruction.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/09 13:42:26 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/10 15:38:14 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

static void		switch_case_2(t_parser *p, t_bin *bin
		, t_instruction *instruction)
{
	if (instruction->type == OP_LDI)
		read_mnemo_ldi(p, bin, instruction);
	else if (instruction->type == OP_STI)
		read_mnemo_sti(p, bin, instruction);
	else if (instruction->type == OP_FORK)
		read_mnemo_fork(p, bin, instruction);
	else if (instruction->type == OP_LLD)
		read_mnemo_lld(p, bin, instruction);
	else if (instruction->type == OP_LLDI)
		read_mnemo_lldi(p, bin, instruction);
	else if (instruction->type == OP_LFORK)
		read_mnemo_lfork(p, bin, instruction);
	else if (instruction->type == OP_AFF)
		read_mnemo_aff(p, bin, instruction);
	else
		parse_error(p, "Unknown instruction");
}

static void		switch_case(t_parser *p, t_bin *bin, t_instruction *instruction)
{
	if (instruction->type == OP_LIVE)
		read_mnemo_live(p, bin, instruction);
	else if (instruction->type == OP_LD)
		read_mnemo_ld(p, bin, instruction);
	else if (instruction->type == OP_ST)
		read_mnemo_st(p, bin, instruction);
	else if (instruction->type == OP_ADD)
		read_mnemo_add(p, bin, instruction);
	else if (instruction->type == OP_SUB)
		read_mnemo_sub(p, bin, instruction);
	else if (instruction->type == OP_AND)
		read_mnemo_and(p, bin, instruction);
	else if (instruction->type == OP_OR)
		read_mnemo_or(p, bin, instruction);
	else if (instruction->type == OP_XOR)
		read_mnemo_xor(p, bin, instruction);
	else if (instruction->type == OP_ZJMP)
		read_mnemo_zjmp(p, bin, instruction);
	else
		switch_case_2(p, bin, instruction);
}

void			parse_instruction(t_bin *bin, t_parser *p)
{
	t_instruction	*instruction;
	t_argument		*argument;

	instruction = create_instruction();
	instruction->type = read_instruction(p);
	while ((argument = read_arg(bin, p)))
	{
		add_argument(instruction, argument);
		while (p->line[p->i] == ' ' || p->line[p->i] == '\t')
			p->i++;
		if (p->line[p->i] == SEPARATOR_CHAR)
			p->i++;
	}
	switch_case(p, bin, instruction);
}
