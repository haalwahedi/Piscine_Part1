/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/28 10:46:11 by halwahed          #+#    #+#             */
/*   Updated: 2021/06/29 13:39:20 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int r;

	

	i = 0;
	while (i < (size / 2))
	{
		r = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = r;
		i++;
	}
}
