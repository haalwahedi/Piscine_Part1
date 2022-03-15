/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 17:11:50 by halwahed          #+#    #+#             */
/*   Updated: 2021/07/07 17:23:37 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int number;

	number = 1;
	if (nb > 0)
	{
		while (number * number <= nb)
		{
			if (number * number == nb)
				return (number);
			else if (number >= 46340)
				return (0);
			number++;
		}
	}
	return (0);
}
