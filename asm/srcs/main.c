/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/07 17:07:13 by acazuc            #+#    #+#             */
/*   Updated: 2016/03/11 15:36:53 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

static char		*get_output_name(char *input_name)
{
	char	*output;
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(input_name) - 2;
	if (!(output = malloc(sizeof(*output) * (len + 5))))
		ERROR("Failed to malloc output file name");
	while (i < len)
	{
		output[i] = input_name[i];
		i++;
	}
	output[i++] = '.';
	output[i++] = 'c';
	output[i++] = 'o';
	output[i++] = 'r';
	output[i++] = '\0';
	return (output);
}

static void		print_labels(t_bin *bin)
{
	t_label_list	*lst;

	lst = bin->labels;
	while (lst)
	{
		ft_putstr("label: {name: ");
		ft_putstr(lst->label->name);
		ft_putstr(", position: ");
		ft_putul(lst->label->position);
		ft_putendl("}");
		lst = lst->next;
	}
}

static void		print_labels_replace(t_bin *bin)
{
	t_label_replace_list	*lst;

	lst = bin->labels_replace;
	while (lst)
	{
		ft_putstr("label_replace: {name: ");
		ft_putstr(lst->label->name);
		ft_putstr(", position: ");
		ft_putul(lst->label->position);
		ft_putendl("}");
		lst = lst->next;
	}
}

int				main(int ac, char **av)
{
	t_bin	bin;

	if (ac != 2)
	{
		ft_putstr("Usage: ");
		ft_putstr(av[0]);
		ft_putendl(" <sourcefile.s>");
		return (-1);
	}
	if (av[1][ft_strlen(av[1]) - 1] != 's'
			|| av[1][ft_strlen(av[1]) - 2] != '.')
		ERROR("Invalid file name, must finish with .s");
	bin = parse_file(av[1]);
	print_labels(&bin);
	print_labels_replace(&bin);
	print_bin(&bin, get_output_name(av[1]));
	return (0);
}
