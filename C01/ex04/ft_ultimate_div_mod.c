/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybourais <ybourais@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 18:02:05 by ybourais          #+#    #+#             */
/*   Updated: 2022/03/27 20:14:02 by ybourais         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	if (*b != 0)
	{
		c = *a / *b;
		*b = *a % *b;
		*a = c;
	}	
}
