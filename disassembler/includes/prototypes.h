/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prototypes.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/08 09:47:44 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/08 09:57:09 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROTOTYPES_H
# define PROTOTYPES_H

# include "bin.h"

t_bin	read_bin(char *name);
void	dump(t_bin *bin);
void	bin_init(t_bin *bin);
void	bin_append(t_bin *bin, unsigned char *data, size_t len);

#endif
