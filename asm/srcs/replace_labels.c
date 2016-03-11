/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace_labels.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/11 15:41:36 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/11 16:52:05 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

static size_t	get_label_position(t_bin *bin, char *name)
{
	t_label_list	*lst;

	lst = bin->labels;
	while (lst)
	{
		if (!ft_strcmp(lst->label->name, name))
			return (lst->label->position);
		lst = lst->next;
	}
	return (0);
}

static int		get_param_size(char op, char ocp, int arg_pos)
{
	char	ocp_val;

	if (arg_pos == 1)
		ocp_val = ocp >> 6;
	else if (arg_pos == 2)
		ocp_val = (ocp & 0x30) >> 4;
	ocp_val = (ocp & 0xC) >> 2;
	if (ocp_val == REG_CODE)
		return (T_REG);
	if (ocp_val == IND_CODE)
		return (T_IND);
	if (op == OP_STI || op == OP_FORK || op == OP_ZJMP
			|| op == OP_LDI || op == OP_LLDI)
		return (T_IND);
	return (T_DIR);
}

static int		get_offset(t_bin *bin, size_t l_pos, int arg_pos)
{
	char	op;

	op = bin->data[l_pos];
	if (op == OP_LIVE || op == OP_ZJMP || op == OP_FORK || op == OP_LFORK)
		return (1);
	if (op == OP_LDI || op == OP_LLDI)
	{
		if (arg_pos == 0)
			return (2);
		return (4);
	}
	if (op == OP_STI)
	{
		if (arg_pos == 1)
			return (3);
		return (3 + get_param_size(op, bin->data[l_pos + 1], 3));
	}
	if (op == OP_LD || op == OP_LLD)
		return (2);
	if (op == OP_AND || op == OP_OR || op == OP_XOR)
	{
		if (arg_pos == 0)
			return (2);
		return (2 + get_param_size(op, bin->data[l_pos + 1], 2));
	}
	if (op == OP_ST)
		return (3);
	return (0);
}

static void		replace_label(t_bin *bin, t_label_replace *label, size_t rep_pos)
{
	size_t	pos;
	char	opc;
	char	ocp;

	pos = label->position;
	opc = bin->datas[pos];
	ocp = bin->datas[pos + 1];
	pos += get_offset(bin, pos, label->arg_pos);
}

void	replace_labels(t_bin *bin)
{
	t_label_replace_list	*lst;

	lst = bin->labels_replace;
	while (lst)
	{
		replace_label(bin, lst->label, get_label_position(bin, lst->label->name));
		lst = lst->next;
	}
}
