/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbalasho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 17:12:09 by sbalasho          #+#    #+#             */
/*   Updated: 2023/01/17 17:12:19 by sbalasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isalnum(int a)
{
	if ((a > 64 && a < 91) || (a > 96 && a < 123) || (a >= 48 && a <= 57))
	{
		return (1);
	}
	return (0);
}
