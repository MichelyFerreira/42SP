#include <unistd.h>

void	ft_putchar(char a);

void	my_condition(int cont_y, int y, int cont_x, int x)
{
	if ((cont_x == 1 && cont_y == 1) || (cont_x == 1 && cont_y == y))
	{
		ft_putchar('A');
	}
	else if ((cont_x == x && cont_y == 1) || (cont_x == x && cont_y == y))
	{
		ft_putchar('C');
	}
	else if ((cont_x != 1 && cont_y != 1) && (cont_x != x && cont_y != y))
	{
		ft_putchar(' ');
	}
	else
	{
		ft_putchar('B');
	}
}

void	rush03(int x, int y)
{
	int	cont_y;
	int cont_x;

	cont_y = 1;
	cont_x = 1;
	if (x > 0 && y > 0)
	{
		while (cont_y <= y)
		{
			cont_x = 1;
			while (cont_x <= x)
			{
				my_condition(cont_y, y, cont_x, x);
				cont_x++;
			}
			write (1, "\n", 1);
			cont_y++;
		}
	}	
}