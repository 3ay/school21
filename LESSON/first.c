/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vclarita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 17:52:20 by vclarita          #+#    #+#             */
/*   Updated: 2020/09/15 18:38:36 by vclarita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
int function (int a, int b)
{
	int i;
	i = a * b;
	return (i);
}

void function2 (char a, char  b)
{
	char  i[2];

	i[0] = a;
	i[1] = b;
	write(1, &i, 2);
}

int		main(void)
{
	int a;
	int b;
	int res;

	a = 3;
	b = 6;
	res = function(a, b);
	printf("%d\n", res);
	function2('h', 'w');
	return (0);
}
