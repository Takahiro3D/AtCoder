#include <vector>

using namespace std;

template <typename T>
struct Sieve {
  T n;
  vector<T> primes;
  vector<T> factor;

  Sieve(T n) : n(n), factor(n + 1, -1) {
    for (int64_t i = 2; i <= n; i++) {
      if (factor[i] != -1) {
        continue;
      }
      factor[i] = i;
      primes.push_back(i);
      for (int64_t j = i * i; j <= n; j += i) {
        if (factor[j] == -1) {
          factor[j] = i;
        }
      }
    }
  }

  bool is_prime(T i) const { return factor[i] == i; }
  vector<T> prime_factorization(T x) const {
    vector<T> res;
    while (x != 1) {
      res.push_back(factor[x]);
      x /= factor[x];
    }
    return res;
  }
};
