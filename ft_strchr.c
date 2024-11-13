/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 15:09:35 by leothoma          #+#    #+#             */
/*   Updated: 2024/11/12 15:09:35 by leothoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{

		
	while (*s)
	{

		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s++);
	return (0);
}
