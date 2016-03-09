/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_label.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/09 13:31:53 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/09 13:35:53 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

void	add_label(t_bin *bin, char *name)
{
	t_label_list	*list;

	if (!(list = malloc(sizeof(*list))))
		ERROR("Failed to malloc label list");
	if (!(list->label = malloc(sizeof(*list->label))))
		ERROR("Failed to malloc label struct");
	list->label->name = name;
	list->label->position = bin->len;
	list->next = bin->labels;
	bin->labels = list;
}
