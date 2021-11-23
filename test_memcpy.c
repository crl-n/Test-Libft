/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnysten <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 09:46:58 by cnysten           #+#    #+#             */
/*   Updated: 2021/11/08 14:43:07 by cnysten          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_libft.h"


static void	test_adr(void *expected, void *actual, char *test_name)
{

}

static void	test_mem(void *expected, void *actual, char *test_name)
{
	if (memcmp(expected, actual) != 0)
		print_failed(test_name);
	else
		print_passed(test_name);
}

void	test_memcpy(void)
{
	printf_ft("FT_MEMCPY");

	char str[] = "Hello world.";

	printf("%s\n", str);
	memcpy(str + 2, str, 3);
	printf("%s\n", str);
	return (0);
}
