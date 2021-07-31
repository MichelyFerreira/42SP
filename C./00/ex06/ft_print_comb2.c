#include <unistd.h>

void	my_print(int a, int b, int c, int d);

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = '0';
	b = '0';
	while (a <= '9')
	{
		d = b + 1;
		c = a;
		my_print (a, b, c, d);
		b = b + 1;
		if (b > '9')
		{
			a++;
			b = '0';
		}
	}
}

void	my_print(int a, int b, int c, int d)
{
	while (c <= '9')
	{
		if (d <= '9')
		{
			write (1, &a, 1);
			write (1, &b, 1);
			write (1, " ", 1);
			write (1, &c, 1);
			write (1, &d, 1);
			if (a == '9' && b == '8' && c == '9' && d == '9')
			{
			}
			else
			{
				write (1, ", ", 2);
			}
			d++;
		}
		if (d > '9')
		{
			c++;
			d = '0';
		}
	}
}
  
void	ft_print_comb2(void);

int		main(void)
{
	ft_print_comb2();
	return(0);
}