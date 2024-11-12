/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:09:35 by leothoma          #+#    #+#             */
/*   Updated: 2024/11/12 15:09:35 by leothoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int	i;
	char	*res;

	i = 0;
	res = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (res = (char *)&s[i]);
		i++;
	}
	return (res);
}
