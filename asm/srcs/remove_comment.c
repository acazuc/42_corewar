/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_comment.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/09 16:00:59 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/09 16:03:39 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

void	remove_comment(char **line)
{
	size_t	i;

	i = 0;
	while ((*line)[i] && (*line)[i] != COMMENT_CHAR)
		i++;
	if ((*line)[i] == COMMENT_CHAR)
	{
		if (!(*line = ft_strsub(*line, 0, i)))
			ERROR("Failed to sub comment removing");
	}
}
