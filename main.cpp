#include <iostream>

long long apply_collatz(long n);

int main() {
  long long n_cases = 100000000000;
  long long n_proved = 0;
  long long n = 1;
  for (long long i = 1; i < n_cases + 1; i++) {
    while (n != 1) {
      n = apply_collatz(n);
    }

    n_proved++;
  }

  std::cout << "N cases: " << n_cases << std::endl;
  std::cout << "Proved cases: " << n_proved << std::endl;
}

long long apply_collatz(long n) {
  if ((n % 2) == 0) {
    return n / 2;
  }

  return 3 * n + 1;
}
