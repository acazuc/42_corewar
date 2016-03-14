/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dump.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/08 09:58:24 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/08 10:08:23 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "disassembler.h"

static void	print_hex_char(char c)
{
	if (c >= 10)
		ft_putchar(c - 10 + 'a');
	else
		ft_putchar(c + '0');
}

static void	print_byte(unsigned char byte, int is_last)
{
	ft_putstr("0x");
	print_hex_char(byte / 16);
	print_hex_char(byte % 16);
	if (!is_last)
		ft_putchar(',');
	else
		ft_putchar('\n');
}

void		dump(t_bin *bin)
{
	size_t	i;

	i = 0;
	while (i < bin->len)
	{
		print_byte(bin->data[i], i == bin->len - 1);
		i++;
	}
}
