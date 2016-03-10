/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument_list.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/10 09:42:36 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/10 09:58:47 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARGUMENT_LIST_H
# define ARGUMENT_LIST_H

# include "argument.h"

typedef struct s_argument_list	t_argument_list;

struct				s_argument_list
{
	t_argument		*argument;
	t_argument_list	*next;
};

#endif
