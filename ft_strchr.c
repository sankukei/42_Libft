/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:09:35 by leothoma          #+#    #+#             */
/*   Updated: 2024/11/12 15:09:35 by leothoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{

//	if (*s == '\0')
//		return ((char *)s);
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
	return (0);
}

int main(void)
{
#include <stdio.h>
	printf("%p\n", ft_strchr("hello", '\0'));
	printf("%p\n", strchr("hello", '\0'));
}
