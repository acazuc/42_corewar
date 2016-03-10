/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruction.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/10 09:53:33 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/10 12:44:15 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INSTRUCTION_H
# define INSTRUCTION_H

# include "instruction_type.h"
# include "argument_list.h"

typedef struct			s_instruction
{
	t_instruction_type	type;
	t_argument_list		*arguments;
}						t_instruction;

#endif
