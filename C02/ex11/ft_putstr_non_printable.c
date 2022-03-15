/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 20:26:09 by halwahed          #+#    #+#             */
/*   Updated: 2021/07/03 20:31:39 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

static void	ft_print_hexa(char np, char *hex)
{
	if (np > 16)
	{
		ft_print_hexa(np / 16, hex);
		ft_print_hexa(np % 16, hex);
	}
	else
		ft_putchar(hex[np]);
}

void		ft_putstr_non_printable(char *str)
{
	int		i;
	char	*hex;

	hex = "0123456789abcdef";
	i = 0;
	while (str[i])
	{
		if ((str[i] < 32 && str[i] >= 0) || str[i] == 127)
		{
			ft_putchar('\\');
			if (str[i] < 16)
				ft_putchar('0');
			ft_print_hexa(str[i], hex);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
