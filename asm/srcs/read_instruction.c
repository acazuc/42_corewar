/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_instruction.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/09 13:43:28 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/10 15:39:21 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

static char		return_free(char *mdr, char type)
{
	free(mdr);
	return (type);
}

static char		return_2(t_parser *p, char *instruction)
{
	if (!ft_strcmp(instruction, "ldi"))
		return (return_free(instruction, OP_LDI));
	else if (!ft_strcmp(instruction, "sti"))
		return (return_free(instruction, OP_STI));
	else if (!ft_strcmp(instruction, "fork"))
		return (return_free(instruction, OP_FORK));
	else if (!ft_strcmp(instruction, "lld"))
		return (return_free(instruction, OP_LLD));
	else if (!ft_strcmp(instruction, "lldi"))
		return (return_free(instruction, OP_LLDI));
	else if (!ft_strcmp(instruction, "lfork"))
		return (return_free(instruction, OP_LFORK));
	else if (!ft_strcmp(instruction, "aff"))
		return (return_free(instruction, OP_AFF));
	parse_error(p, "Unknown instruction");
	return (0);
}

static char		return_1(t_parser *p, char *instruction)
{
	if (!ft_strcmp(instruction, "live"))
		return (return_free(instruction, OP_LIVE));
	else if (!ft_strcmp(instruction, "ld"))
		return (return_free(instruction, OP_LD));
	else if (!ft_strcmp(instruction, "st"))
		return (return_free(instruction, OP_ST));
	else if (!ft_strcmp(instruction, "add"))
		return (return_free(instruction, OP_ADD));
	else if (!ft_strcmp(instruction, "sub"))
		return (return_free(instruction, OP_SUB));
	else if (!ft_strcmp(instruction, "and"))
		return (return_free(instruction, OP_AND));
	else if (!ft_strcmp(instruction, "or"))
		return (return_free(instruction, OP_OR));
	else if (!ft_strcmp(instruction, "xor"))
		return (return_free(instruction, OP_XOR));
	else if (!ft_strcmp(instruction, "zjmp"))
		return (return_free(instruction, OP_ZJMP));
	return (return_2(p, instruction));
}

char			read_instruction(t_parser *p)
{
	char	*instruction;
	int		start;

	while (p->line[p->i] == ' ' || p->line[p->i] == '\t')
		p->i++;
	start = p->i;
	while (p->line[p->i] && p->line[p->i] != ' ' && p->line[p->i] != '\t')
		p->i++;
	if (!(instruction = ft_strsub(p->line, start, p->i - start)))
		ERROR("Failed to sub instruction");
	return (return_1(p, instruction));
}
