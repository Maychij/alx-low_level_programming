#include <stdio.h>
#include <math.h>
int main() {
long number = 612852475143;
long largest_prime_factor = 1;
while (number % 2 == 0) {
largest_prime_factor = 2;
number /= 2;
}
for (long long divisor = 3; divisor <= sqrt(number); divisor += 2) {
while (number % divisor == 0) {
largest_prime_factor = divisor;
number /= divisor;
}
}
if (number > 1) {
largest_prime_factor = number;
}
printf("%lld\n", largest_prime_factor);
return 0;
}
