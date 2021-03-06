/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_label.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/09 10:36:20 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/10 10:13:08 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

void		check_label(t_bin *bin, t_parser *p)
{
	size_t	i;
	char	*name;

	i = 0;
	while (is_label_char(p->line[i]))
		i++;
	if (p->line[i] == LABEL_CHAR)
	{
		if (!(name = ft_strsub(p->line, 0, i)))
			ERROR("Failed to sub label name");
		add_label(bin, name);
		p->i = i + 1;
	}
}
