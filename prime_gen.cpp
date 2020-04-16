#include "prime_check.h"

void prime_generater()
{
  /* Start at 3, the first prime and skip even numbers.
   * 18446744073709551615 is the maximum size. */
  for(std::size_t n = 3; n <= 18446744073709551615; n += 2)
  {
    if (prime_check(n))
    {
      std::cout<<n<<std::endl;
    }
  }
}


int main()
{
    prime_generater();
    return 0;
}
