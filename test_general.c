/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_general.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaqliu <yaqliu@student.42barcelona.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 22:03:43 by yaqliu            #+#    #+#             */
/*   Updated: 2026/01/29 22:37:12 by yaqliu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>

//---Define colors---
#define RESET	"\033[0m"
#define GREEN	"\033[0;32m"
#define RED	"\033[0;31m"

static void check_test(int test_num, int res1, int res2)
{
	printf("Ret: %d | %d\n", res1, res2);
	if(res1 == res2)
		printf(GREEN "Test %d: OK\n" RESET, test_num);
	else
		printf(RED "Test %d: KO\n" RESET, test_num);
	printf("------------------------------\n\n")
}

int main(void)
{
	int	res1;
	int	res2;
	int	test_num;

	test_num = 1;
	printf("-----STARTING TESTS-----\n\n");

	printf("--- Test %d: ft_isalpha 2 ---\n", test_num);
	res1 = isalpha('2');
	res2 = ft_isalpha('2');
	check_test(test_num++, res1, res2);

	printf("--- Test %d: ft_isalpha A ---\n", test_num);
	res1 = isalpha('A');
	res2 = ft_isalpha('A');
	check_test(test_num++, res1, res2);

	printf("--- Test %d: ft_isalpha (space) ---\n", test_num);
	res1 = isalpha(' ');
	res2 = ft_isalpha(' ');
	check_test(test_num++, res1, res2);

	printf("--- Test %d: ft_isalpha z ---\n", test_num);
	res1 = isalpha('z');
	res2 = ft_isalpha('z');
	check_test(test_num++, res1, res2);

	printf("--- Test %d: ft_isalpha ASCII 126 ---\n", test_num);
	res1 = isalpha(126);
	res2 = ft_isalpha(126);
	check_test(test_num++, res1, res2);

	printf("--- Test %d: ft_isalnum ASCII 123---\n", test_num);
	res1 = isalnum(123);
	res2 = ft_isalnum(123);
	check_test(test_num++, res1, res2);

	printf("--- Test %d: ft_isalnum ASCII 48---\n", test_num);
	res1 = isalnum(48);
	res2 = ft_isalnum(48);
	check_test(test_num++, res1, res2);

	printf("--- Test %d: ft_isalnum ASCII 1---\n", test_num);
	res1 = isalnum(1);
	res2 = ft_isalnum(1);
	check_test(test_num++, res1, res2);

	printf("--- Test %d: ft_isdigit ASCII 9---\n", test_num);
	res1 = isdigit(9);
	res2 = ft_isdigit(9);
	check_test(test_num++, res1, res2);

	printf("--- Test %d: ft_isdigit ASCII 39---\n", test_num);
	res1 = isdigit(39);
	res2 = ft_isdigit(39);
	check_test(test_num++, res1, res2);

	printf("--- Test %d: ft_isdigit A---\n", test_num);
	res1 = isdigit('A');
	res2 = ft_isdigit('A');
	check_test(test_num++, res1, res2);

	printf("--- Test %d: ft_isascii 19---\n", test_num);
	res1 = isascii(19);
	res2 = ft_isascii(19);
	check_test(test_num++, res1, res2);

	printf("--- Test %d: ft_isascii 149---\n", test_num);
	res1 = isascii(149);
	res2 = ft_isascii(149);
	check_test(test_num++, res1, res2);

	printf("--- Test %d: ft_isascii 999---\n", test_num);
	res1 = isascii(999);
	res2 = ft_isascii(999);
	check_test(test_num++, res1, res2);

	printf("--- Test %d: ft_strlen ´hello world´ ---\n", test_num);
	res1 = strlen("hello world");
	res2 = ft_strlen("hello world");
	check_test(test_num++, res1, res2);

	printf("--- Test %d: ft_strlen ´hello world´ ---\n", test_num);
	res1 = strlen("hello world");
	res2 = ft_strlen("hello world");
	check_test(test_num++, res1, res2);

	printf("--- Test %d: ft_strlen (empty word) ---\n", test_num);
	res1 = strlen("");
	res2 = ft_strlen("");
	check_test(test_num++, res1, res2);

	printf("--- Test %d: ft_strlen (space) ---\n", test_num);
	res1 = strlen(" ");
	res2 = ft_strlen(" ");
	check_test(test_num++, res1, res2);

	printf("--- Test %d: ft_strlen NULL ---\n", test_num);
	res1 = strlen(NULL);
	res2 = ft_strlen(NULL);
	check_test(test_num++, res1, res2);
}

