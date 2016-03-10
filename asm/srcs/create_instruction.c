/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_instruction.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/10 11:40:02 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/10 11:41:23 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

t_instruction	*create_instruction(void)
{
	t_instruction	*instruction;

	if (!(instruction = malloc(sizeof(*instruction))))
		ERROR("Failed to mallco instruction");
	instruction->argument = NULL;
	return (instruction);
}
