/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_label_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/10 10:12:46 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/10 10:13:35 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

int	is_label_char(char c)
{
	char	*chars;
	int		i;

	chars = LABEL_CHARS;
	i = 0;
	while (chars[i])
	{
		if (c == chars[i])
			return (1);
		i++;
	}
	return (0);
}
