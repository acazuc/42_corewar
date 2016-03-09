/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_instruction.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/09 13:43:28 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/09 14:33:25 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

t_op	*g_ops;

t_op	*read_instruction(t_parser *p)
{
	int		i;

	i = 0;
	while (g_ops[i].opcode != 0)
	{
		if (ft_strstr(p->line + p->i, g_ops[i].name) == p->line + p->i)
		{
			ft_putendl(g_ops[i].name);
			return (&(g_ops[i]));
		}
		i++;
	}
	return (NULL);
}
