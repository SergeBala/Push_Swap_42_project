/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbalasho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 15:46:50 by sbalasho          #+#    #+#             */
/*   Updated: 2023/01/17 17:39:15 by sbalasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isdigit(int a)
{
	if (a >= 48 && a <= 57)
	{
		return (1);
	}
	return (0);
}
