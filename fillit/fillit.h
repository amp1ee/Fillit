#ifndef FILLIT_H
# define FILLIT_H

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

t_tetrimino		tetriminos[] =
{
	{
		'O',
		{{ 1, 0 },
		 { 0, 1 },
		 { 1, 1 }},
	},
	{ 	/* T1 */
		'T',
		{{ -1, 1 },
		 { 0, 1 },
		 { 1, 1 }},
	},
	{ 	/* T2 */
		'T',
		{{ 0, 1 },
		 { 1, 1 },
		 { 0, 2 }},
	},
	{ 	/* T3 */
		'T',
		{{ -1, 1 },
		 { 0, 1 },
		 { 0, 2 }},
	},
	{ 	/* T4 */
		'T',
		{{ 1, 0 },
		 { 2, 0 },
		 { 1, 1 }},
	},
	{	/* I1 */
		'I',
		{{ 1, 0 },
		 { 2, 0 },
		 { 3, 0 }},
	},
	{	/* I2 */
		'I',
		{{ 0, 1 },
		 { 0, 2 },
		 { 0, 3 }},
	},
	{	/* J1 */
		'J',
		{{ 1, 0 },
		 { 0, 1 },
		 { 0, 2 }},
	},
	{	/* J2 */
		'J',
		{{ 1, 0 },
		 { 2, 0 },
		 { 2, 1 }},
	},
	{	/* J3 */
		'J',
		{{ 0, 1 },
		 { -1, 2 },
		 { 0, 2 }},
	},
	{	/* J4 */
		'J',
		{{ 0, 1 },
		 { 1, 1 },
		 { 2, 1 }},
	},
	{	/* L1 */
		'L',
		{{ 1, 0 },
		 { 1, 1 },
		 { 1, 2 }},
	},
	{	/* L2 */
		'L',
		{{ 1, 0 },
		 { 2, 0 },
		 { 0, 1 }},
	},
	{	/* L3 */
		'L',
		{{ 0, 1 },
		 { 0, 2 },
		 { 1, 2 }},
	},
	{	/* L4 */
		'L',
		{{ -2, 1 },
		 { -1, 1 },
		 { 0, 1 }},
	},
	{	/* S1 */
		'S',
		{{ 1, 0 },
		 { -1, 1 },
		 { 0, 1 }},
	},
	{	/* S2 */
		'S',
		{{ 0, 1 },
		 { 1, 1 },
		 { 1, 2 }},
	},
	{	/* Z1 */
		'Z',
		{{ 1, 0 },
		 { 1, 1 },
		 { 2, 1 }},
	},
	{	/* Z2 */
		'Z',
		{{ -1, 1 },
		 { 0, 1 },
		 { -1, 2 }},
	}
};

#endif