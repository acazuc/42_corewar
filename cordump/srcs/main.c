/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/08 09:43:31 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/08 10:07:35 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "disassembler.h"

int		main(int ac, char **av)
{
	t_bin	bin;

	if (ac != 2)
	{
		ft_putendl("./disassemble <filename.cor>");
		exit(-1);
	}
	bin = read_bin(av[1]);
	dump(&bin);
}
