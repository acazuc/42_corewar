/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bin_init.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/07 18:16:50 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/09 09:33:28 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

void	bin_init(t_bin *bin)
{
	int		i;

	bin->data = NULL;
	bin->len = 0;
	i = 0;
	while (i <= PROG_NAME_LENGTH)
	{
		bin->name[i] = '\0';
		i++;
	}
	i = 0;
	while (i <= COMMENT_LENGTH)
	{
		bin->comment[i] = '\0';
		i++;
	}
	bin->has_name = 0;
	bin->has_comment = 0;
}
