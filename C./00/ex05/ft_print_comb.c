#include <unistd.h>

void	ft_putchar(char c, char d, char u)
{
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &u, 1);
	if (c != '7')
		write(1, ", ", 2);
}

void	ft_print_comb(void)

{
	char	c;
	char	d;
	char	u;

	c = '0';
	d = '1';
	u = '2';
	while (c < '8')
	{
		while (d < '9')
		{
			while (u <= '9')
			{
				ft_putchar(c, d, u);
				u++;
			}
			u = ++d + 1;
		}
		d = ++c + 1;
		u = d + 1;
	}	
}

void	ft_print_comb(void);

int		main(void)
{
	ft_print_comb();
	return(0);
}
