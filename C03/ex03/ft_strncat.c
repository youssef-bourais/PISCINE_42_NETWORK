/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 23:28:47 by ybourais          #+#    #+#             */
/*   Updated: 2022/04/02 18:57:46 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char	*dest,	char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
		j = 0;
	while (dest[i] != '\0')
	{
		i ++;
	}
	j = 0;
	while (j < nb && src[j] != '\0')
	{
		dest [i + j] = src[j];
		j ++;
	}
	dest[i + j] = '\0';
	return (dest);
}
