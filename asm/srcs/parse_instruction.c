/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_instruction.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/09 13:42:26 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/09 16:19:56 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

void	parse_instruction(t_bin *bin, t_parser *p)
{
	t_op	*op;
	int		i;

	op = read_instruction(p);
	i = 0;
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
	}
}
