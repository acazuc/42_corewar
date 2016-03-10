/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/10 09:44:09 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/10 10:29:07 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARGUMENT_H
# define ARGUMENT_H

# include "argument_type.h"

typedef struct			s_argument
{
	t_argument_type		type;
	int32_t				value;
}						t_argument;

#endif
