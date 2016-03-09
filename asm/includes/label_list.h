/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   label_list.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/09 13:23:42 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/09 13:25:05 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LABEL_LIST_H
# define LABEL_LIST_H

# include "label.h"

typedef struct s_label_list	t_label_list;

struct		s_label_list
{
	t_label			*label;
	t_label_list	*next;
};

#endif
