/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_instruction.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/09 13:42:26 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/10 11:47:02 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

void	parse_instruction(t_bin *bin, t_parser *p)
{
	t_instruction	*instruction;

	instruction = create_instruction();
	instruction->type = read_instrution(p);
	if (instruction->type == LIVE)
		read_mnemo_live(bin, p);
	else if (instruction->type == LD)
		read_mnemo_ld(bin, p);
	else if (instruction->type == ST)
		read_mnemo_st(bin, p);
	else if (instruction->type == ADD)
		read_mnemo_add(bin, p);
	else if (instruction->type == SUB)
		read_mnemo_sub(bin, p);
	else if (instruction->type == AND)
		read_mnemo_and(bin, p);
	else if (instruction->type == OR)
		read_mnemo_or(bin, p);
	else if (instruction->type == XOR)
		read_mnemo_xor(bin, p);
	else if (instruction->type == ZJMP)
		read_mnemo_zjmp(bin, p);
	else if (instruction->type == LDI)
		read_mnemo_ldi(bin, p);
	else if (instruction->type == STI)
		read_mnemo_sti(bin, p);
	else if (instruction->type == FORK)
		read_mnemo_fork(bin, p);
	else if (instruction->type == LLD)
		read_mnemo_lld(bin, p);
	else if (instruction->type == LLDI)
		read_mnemo_lldi(bin, p);
	else if (instruction->type == LFORK)
		read_mnemo_lfork(bin, p);
	else if (instruction->type == AFF)
		read_mnemo_aff(bin, p);
	else
		parse_error(p, "Invalid instruction");
	/*i = 0;
	while (i < op->arg_nb)
	{
		while (p->line[p->i] == ' ' || p->line[p->i] == '\t')
			p->i++;
		ft_putendl(p->line + p->i);
		read_arg(bin, p, op->arg_type[i]);
		while (p->line[p->i] == ' ' || p->line[p->i] == '\t')
			p->i++;
		if (i < op->arg_nb - 1)
		{
			if (p->line[p->i] != SEPARATOR_CHAR)
				parse_error(p, "Expected SEPRATOR_CHAR");
			p->i++;
		}
		else if (p->line[p->i] != '\0')
			parse_error(p, "Unexpected parameter");
		i++;
	}*/
}
