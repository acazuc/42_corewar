/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   build_valid_args.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/10 14:20:57 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/10 14:59:35 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

char	*build_valid_args_3(char a1, char a2, char a3)
{
	char	*args;

	if (!(args = malloc(sizeof(*args) * 4)))
		ERROR("Failed to malloc valid args tab");
	args[0] = a1;
	args[1] = a2;
	args[2] = a3;
	args[3] = -1;
	return (args);
}

char	*build_valid_args_2(char a1, char a2)
{
	char	*args;

	if (!(args = malloc(sizeof(*args) * 3)))
		ERROR("Failed to malloc valid args tab");
	args[0] = a1;
	args[1] = a2;
	args[2] = -1;
	return (args);
}

char	*build_valid_args_1(char a1)
{
	char	*args;

	if (!(args = malloc(sizeof(*args) * 2)))
		ERROR("Failed to malloc valid args tab");
	args[0] = a1;
	args[1] = -1;
	return (args);
}
