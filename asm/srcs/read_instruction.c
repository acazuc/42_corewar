/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_instruction.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/09 13:43:28 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/10 10:52:56 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

t_instruction_type	*read_instruction(t_parser *p)
{
	char	*instruction;
	int		start;

	start = p->i;
	while (p->line[p->i] && p->line[p->i] != ' ' && p->line[p->i] != '\t')
		p->i++;
	if (!(instruction = ft_strsub(p->line, start, p->i)))
		ERROR("Failed to sub instruction");
	if (!ft_strcmp(instruction, "live"))
		return (LIVE);
	else if (!ft_strcmp(instruction, "ld"))
		return (LD);
	else if (!ft_strcmp(instruction, "st"))
		return (LD);
	else if (!ft_strcmp(instruction, "add"))
		return (LD);
	else if (!ft_strcmp(instruction, "sub"))
		return (LD);
	else if (!ft_strcmp(instruction, "and"))
		return (LD);
	else if (!ft_strcmp(instruction, "or"))
		return (LD);
	else if (!ft_strcmp(instruction, "xor"))
		return (LD);
	else if (!ft_strcmp(instruction, "zjmp"))
		return (LD);
	else if (!ft_strcmp(instruction, "ldi"))
		return (LD);
	else if (!ft_strcmp(instruction, "sti"))
		return (LD);
	else if (!ft_strcmp(instruction, "fork"))
		return (LD);
	else if (!ft_strcmp(instruction, "lld"))
		return (LD);
	else if (!ft_strcmp(instruction, "lldi"))
		return (LD);
	else if (!ft_strcmp(instruction, "lfork"))
		return (LD);
	else if (!ft_strcmp(instruction, "aff"))
		return (LD);
	else
		parse_error(p, "Unknown instruction");
}
