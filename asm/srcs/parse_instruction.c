/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_instruction.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/09 13:42:26 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/10 09:42:18 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

void	parse_instruction(t_bin *bin, t_parser *p)
{
	char	*mnemo;
	int		start;

	start = p->i;
	while (p->line[p->i] && p->line[p->i] != ' ' && p->line[p->i] != '\t')
		p->i++;
	if (!(mnemo = ft_strsub(p->line, start, p->i)))
		ERROR("Failed to sub mnemonic");
	if (!ft_strcmp(mnemo, "live"))
		read_mnemo_live(bin, p);
	else if (!ft_strcmp(mnemo, "ld"))
		read_mnemo_ld(bin, p);
	else if (!ft_strcmp(mnemo, "st"))
		read_mnemo_st(bin, p);
	else if (!ft_strcmp(mnemo, "add"))
		read_mnemo_add(bin, p);
	else if (!ft_strcmp(mnemo, "sub"))
		read_mnemo_sub(bin, p);
	else if (!ft_strcmp(mnemo, "and"))
		read_mnemo_and(bin, p);
	else if (!ft_strcmp(mnemo, "or"))
		read_mnemo_or(bin, p);
	else if (!ft_strcmp(mnemo, "xor"))
		read_mnemo_xor(bin, p);
	else if (!ft_strcmp(mnemo, "zjmp"))
		read_mnemo_zjmp(bin, p);
	else if (!ft_strcmp(mnemo, "ldi"))
		read_mnemo_ldi(bin, p);
	else if (!ft_strcmp(mnemo, "sti"))
		read_mnemo_sti(bin, p);
	else if (!ft_strcmp(mnemo, "fork"))
		read_mnemo_fork(bin, p);
	else if (!ft_strcmp(mnemo, "lld"))
		read_mnemo_lld(bin, p);
	else if (!ft_strcmp(mnemo, "lldi"))
		read_mnemo_lldi(bin, p);
	else if (!ft_strcmp(mnemo, "lfork"))
		read_mnemo_lfork(bin, p);
	else if (!ft_strcmp(mnemo, "aff"))
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
