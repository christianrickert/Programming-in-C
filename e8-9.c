#include <stdio.h>

// greatest common denominator
int gcd(int u, int v)
{
    int temp;

    while ( v != 0 )
    {
        temp = u % v;
        u =v;
        v = temp;
    }

    return u;
}

// least common multiple
int lcm(int u, int v)
{
   if ( (u * v) >= 0 )
      return (u*v/gcd(u, v));
   else
      return 1;
}

int main(int argc, char const *argv[])
{
   int gcd(int, int);
   int lcm(int, int);

   printf("%i\n", lcm(15, 10));

   return 0;
}
