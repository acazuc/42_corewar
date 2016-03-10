/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_argument.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/10 10:20:16 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/10 10:26:02 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

t_argument	*create_argument(void)
{
	t_argument	*argument;

	if (!(argument = malloc(sizeof(*argument))))
		ERROR("Failed to malloc argument");
	argument->type = 0;
	argument->value = 0;
}
