/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bin.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/07 18:02:49 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/11 16:05:20 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BIN_H
# define BIN_H

# include "header.h"

typedef struct				s_bin
{
	t_label_replace_list	*labels_replace;
	t_label_list			*labels;
	t_header				header;
	unsigned char			*data;
	size_t					len;
	int						has_name;
	int						has_comment;
}							t_bin;

#endif
