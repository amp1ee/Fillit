#ifndef FILLIT_H
# define FILLIT_H

typedef int bool;

enum { false, true };

typedef struct	s_coordinates
{
    int x;
    int y;
}				t_coordinates;

typedef struct	s_tetrimino
{
    char letter;
    t_coordinates *blocks;
}				t_tetrimino;

t_coordinates	tetriminos[19][3] =
{
	/*
	**	##		0
	**	##
	*/
	{{ 1, 0 },
	{ 0, 1 },	
	{ 1, 1 }},	
	/*
	**	.#.		1
	**	###
	*/
	{{ -1, 1 },
	{ 0, 1 },
	{ 1, 1 }},
	/*
	**	#.		2
	**	##
	**	#.
	*/
	{{ 0, 1 },
	{ 1, 1 },
	{ 0, 2 }},
	/*
	**	.#		3
	**	##
	**	.#
	*/
	{{ -1, 1 },
	{ 0, 1 },
	{ 0, 2 }},
	/*
	**	###		4
	**	.#.
	*/
	{{ 1, 0 },
	{ 2, 0 },
	{ 1, 1 }},
	/*
	**	####	5
	*/
	{{ 1, 0 },
	{ 2, 0 },
	{ 3, 0 }},
	/*
	**	#		6
	**	#
	**	#
	**	#
	*/
	{{ 0, 1 },
	{ 0, 2 },
	{ 0, 3 }},
	/*
	**	##		7
	**	#.
	**	#.
	*/
	{{ 1, 0 },
	{ 0, 1 },
	{ 0, 2 }},
	/*
	**	###		8
	**	..#
	*/
	{{ 1, 0 },
	{ 2, 0 },
	{ 2, 1 }},
	/*
	**	.#		9
	**	.#
	**	##
	*/
	{{ 0, 1 },
	{ -1, 2 },
	{ 0, 2 }},
	/*
	**	#..		10
	**	###
	*/
	{{ 0, 1 },
	{ 1, 1 },
	{ 2, 1 }},
	/*
	**	##		11
	**	.#
	**	.#
	*/
	{{ 1, 0 },
	{ 1, 1 },
	{ 1, 2 }},
	/*
	**	###		12
	**	#..
	*/
	{{ 1, 0 },
	{ 2, 0 },
	{ 0, 1 }},
	/*
	**	#.		13
	**	#.
	**	##
	*/
	{{ 0, 1 },
	{ 0, 2 },
	{ 1, 2 }},
	/*
	**	..#		14
	**	###
	*/
	{{ -2, 1 },
	{ -1, 1 },
	{ 0, 1 }},
	/*
	**	.##		15
	**	##.
	*/
	{{ 1, 0 },
	{ -1, 1 },
	{ 0, 1 }},
	/*
	**	#.		16
	**	##
	**	.#
	*/
	{{ 0, 1 },
	{ 1, 1 },
	{ 1, 2 }},
	/*
	**	##.		17
	**	.##
	*/
	{{ 1, 0 },
	{ 1, 1 },
	{ 2, 1 }},
	/*
	**	.#		18
	**	##
	**	#.
	*/
	{{ -1, 1 },
	{ 0, 1 },
	{ -1, 2 }},
};

#endif