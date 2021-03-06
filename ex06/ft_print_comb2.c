/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojpark <qkrtjwls8546@naver.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 16:33:30 by seojpark          #+#    #+#             */
/*   Updated: 2020/07/08 17:51:41 by seojpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	char num[6];
	int n;
	int n2;

	num[2] = ' ';
	n = 0;
	while (n < 99)
	{
		n2 = n + 1;
		num[1] = n % 10 + '0';
		num[0] = n / 10 % 10 + '0';
		while (n2 < 100)
		{
			num[4] = n2 % 10 + '0';
			num[3] = n2 / 10 % 10 + '0';
			write(1, num, 5);
			if (n == 98 && n2 == 99)
				break ;
			write(1, ",", 2);
			n2++;
		}
		n++;
	}
}
