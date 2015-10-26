void	ft_putnbr(int nb)
{
	int q;

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		q = nb + '0';
		write(1, &q, 1);
	}
}
