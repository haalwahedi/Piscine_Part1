/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halwahed <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 11:26:53 by halwahed          #+#    #+#             */
/*   Updated: 2021/07/04 11:39:28 by halwahed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int dsize;

	i = 0;
	dsize = 0;
	while (dest[i] != '\0')
	{
		dsize++;
		i++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[dsize + i] = src[i];
		i++;
	}
	dest[dsize + i] = '\0';
	return (dest);
}
