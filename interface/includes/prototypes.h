/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prototypes.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/15 08:53:13 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/15 09:19:55 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROTOTYPES_H
# define PROTOTYPES_H

# include "caps.h"

void	error_quit(char *message, char *file, int line);
void	caps_init(t_caps *caps);
void	draw_arena(t_caps *caps);
void	move_to(t_caps *caps, int x, int y);

#endif
