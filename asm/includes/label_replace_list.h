/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   label_replace_list.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/11 14:30:33 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/11 14:33:22 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LABEL_REPLACE_LIST_H
# define LABEL_REPLACE_LIST_H

# include "label_replace.h"

typedef struct s_label_replace_list		t_label_replace_list;

struct						s_label_replace_list
{
	t_label_replace			*label;
	t_label_replace_list	*next;
};

#endif
