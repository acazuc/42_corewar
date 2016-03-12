/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_name_comment.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/12 15:56:41 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/12 15:59:16 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "disassembler.h"

void	print_name(t_bin *bin)
{
	ft_putstr(".name \"");
	ft_putstr(bin->header.name);
	ft_putendl("\"");
}

void	print_comment(t_bin *bin)
{
	ft_putstr(".comment \"");
	ft_putstr(bin->header.comment);
	ft_putendl("\"");
}
