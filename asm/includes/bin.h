/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bin.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/07 18:02:49 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/09 09:33:14 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BIN_H
# define BIN_H

# include "defines.h"

typedef struct		s_bin
{
	unsigned char	*data;
	size_t			len;
	char			name[PROG_NAME_LENGTH + 1];
	char			comment[COMMENT_LENGTH + 1];
	int				has_name;
	int				has_comment;
}					t_bin;

#endif
