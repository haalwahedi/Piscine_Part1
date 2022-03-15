/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 18:40:59 by halwahed          #+#    #+#             */
/*   Updated: 2021/07/08 18:25:12 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int half;

	if (nb == 2147483647)
		return (1);
	half = nb / 2;
	if (nb < 2)
		return (0);
	while (half > 1)
	{
		if (nb % half == 0)
			return (0);
		half--;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
		return (nb);
	return (ft_find_next_prime(nb + 1));
}
