#include "prime_check.h"

bool prime_check(std::size_t n)
{
    /* Check edge cases */
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;

    /* Check if divisible by 2 or 3.
     * Now we can skip five numbers in below loop
     * n & 0x1 is a faster bitwise n % 2. */
    if (n & 0x1 == 0 || n % 3 == 0)
        return false;

    for (std::size_t i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;

    return true;
}
