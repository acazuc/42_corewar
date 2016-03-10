/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_instruction.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/09 13:43:28 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/10 11:45:54 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

static t_instruction_type	return_free(char *mdr, t_instruction_type type)
{
	free(mdr);
	return (type);
}

t_instruction_type			read_instruction(t_parser *p)
{
	char	*instruction;
	int		start;

	start = p->i;
	while (p->line[p->i] && p->line[p->i] != ' ' && p->line[p->i] != '\t')
		p->i++;
	if (!(instruction = ft_strsub(p->line, start, p->i)))
		ERROR("Failed to sub instruction");
	if (!ft_strcmp(instruction, "live"))
		return (return_free(instruction, LIVE));
	else if (!ft_strcmp(instruction, "ld"))
		return (return_free(instruction, LD));
	else if (!ft_strcmp(instruction, "st"))
		return (return_free(instruction, ST));
	else if (!ft_strcmp(instruction, "add"))
		return (return_free(instruction, ADD));
	else if (!ft_strcmp(instruction, "sub"))
		return (return_free(instruction, SUB));
	else if (!ft_strcmp(instruction, "and"))
		return (return_free(instruction, AND));
	else if (!ft_strcmp(instruction, "or"))
		return (return_free(instruction, OR));
	else if (!ft_strcmp(instruction, "xor"))
		return (return_free(instruction, XOR));
	else if (!ft_strcmp(instruction, "zjmp"))
		return (return_free(instruction, ZJMP));
	else if (!ft_strcmp(instruction, "ldi"))
		return (return_free(instruction, LDI));
	else if (!ft_strcmp(instruction, "sti"))
		return (return_free(instruction, STI));
	else if (!ft_strcmp(instruction, "fork"))
		return (return_free(instruction, FORK));
	else if (!ft_strcmp(instruction, "lld"))
		return (return_free(instruction, LLD));
	else if (!ft_strcmp(instruction, "lldi"))
		return (return_free(instruction, LLDI));
	else if (!ft_strcmp(instruction, "lfork"))
		return (return_free(instruction, LFORK));
	else if (!ft_strcmp(instruction, "aff"))
		return (return_free(instruction, AFF));
	parse_error(p, "Unknown instruction");
	return (0);
}
