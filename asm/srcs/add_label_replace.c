/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_label_replace.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/10 13:10:00 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/14 09:58:22 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

static void		push_label_replace(t_bin *bin, t_label_replace *label)
{
	t_label_replace_list	*new;

	if (!(new = malloc(sizeof(*new))))
		ERROR("Failed to malloc new label replace list");
	new->next = bin->labels_replace;
	new->label = label;
	bin->labels_replace = new;
}

void			add_label_replace(t_bin *bin, char *name, size_t position
		, short datas)
{
	t_label_replace		*replace;
	char				instr;
	char				pos;

	instr = (datas & 0xFF00) >> 8;
	pos = datas & 0x00FF;
	if (!(replace = malloc(sizeof(*replace))))
		ERROR("Failed to malloc label replace");
	replace->name = name;
	replace->position = position;
	if (instr == OP_STI || instr == OP_FORK || instr == OP_ZJMP
			|| instr == OP_LDI || instr == OP_LLDI)
		replace->is_16b = 1;
	else
		replace->is_16b = 0;
	replace->arg_pos = pos;
	push_label_replace(bin, replace);
}
