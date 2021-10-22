#include <unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	cal_first_depth(int	end)
{
	int	j;

	j = 1;
	while (j <= end)
	{
		if (j == 1)
		{
			ft_putchar('A');
		}
		else if (j == end)
		{
			ft_putchar('C');
		}
		else
		{
			ft_putchar('B');
		}
		if (j == end)
		{
			ft_putchar(10);
		}
		j ++;
	}
}

void	cal_inter_depth(int	end)
{
	int	j;

	j = 1;
	while (j <= end)
	{
		if (j == 1 || j == end)
		{
			ft_putchar('B');
		}
		else
		{
			ft_putchar(32);
		}
		if (j == end)
		{
			ft_putchar(10);
		}
		j ++;
	}
}

void	rush(int	width, int	depth)
{
	int	i;

	i = 1;
	while (i <= depth)
	{
		if (i == 1 || i == depth)
		{
			cal_first_depth(width);
		}
		else
		{
			cal_inter_depth(width);
		}
		i ++;
	}
}

int	main(void)
{
	rush(1, 3);
	return (0);
}
