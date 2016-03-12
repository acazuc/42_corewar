/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bin.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/12 15:30:22 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/12 15:54:04 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BIN_H
# define BIN_H

# include "header.h"

typedef struct	s_bin
{
	t_header	header;
	char		*data;
	size_t		i;
	int			fd;
}				t_bin;

#endif
