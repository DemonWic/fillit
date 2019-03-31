/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahintz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 16:16:05 by ahintz            #+#    #+#             */
/*   Updated: 2019/03/31 17:53:39 by ahintz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	mat_print(int **mat, int len)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < len)
	{
		j = 0;
		printf("\n");
		while (j < len)
		{
			printf("%-3d ", mat[i][j]);
			j++;
		}
		i++;
	}
	printf("\n");
}

int		**tp(int **mat, int len)
{
	int i;
	int j;
	int **t_mat;
	t_mat = (int **)malloc(sizeof(int *) * 4);
	i = 0;
	while (i < 4)
		t_mat[i++] = (int *)malloc(sizeof(int) * 4);

	//int t_mat[len][len];

	i = -1;
	j = -1;
	while (++i < len)
	{
		j = -1;
		while (++j < len)
			t_mat[j][i] = mat[i][j];
	}
	return (t_mat);
}


int main()
{
	int **mat = (int **)malloc(sizeof(int *) * 4);
	int i = 0;
	while (i < 4)
	{
		mat[i] = (int *)malloc(sizeof(int ) * 4);
		if (mat[i] == NULL)
			return (1);
		i++;
	}

	i = 0;
	int j = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (i == 2)
				mat[i][j] = 1;
			else
				mat[i][j] = 0;

			j++;
		}
		i++;
	}

	int **B;

	mat_print(mat, 4);
	B = tp(mat, 4);
	mat_print(B, 4);
	return (0);
}



