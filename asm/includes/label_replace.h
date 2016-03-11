/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   label_replace.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/11 13:12:10 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/11 14:35:11 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LABEL_REPLACE_H
# define LABEL_REPLACE_H

typedef struct		s_label_replace
{
	char			*name;
	size_t			position;
	int				arg_pos;
	int				is_16b;
}					t_label_replace;

#endif
