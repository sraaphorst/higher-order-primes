# Higher-order primes / Super-primes

Countably list all primes:

$$p_1, p_2, p_3, p_4, p_5, \ldots$$

such that, for all $i$:

1. $p_i$ is prime.
2. $p_i < p_{i+1}$.
3. There is no prime $q$ such that $p_i < q < p_{i+1}$.

Here is a list of the first 1000 primes in order for convenience:

https://en.wikipedia.org/wiki/List_of_prime_numbers#The_first_1000_prime_numbers

We create a table as follows. The ordering will be explained below.

| $i$ | $p_i$ | $i$ | $p_i$ | $i$ | $p_i$ | $i$  | $p_1$ | $i$  | $p_{p_{p_{p_{p_i}}}}$  |
|-----|-------|-----|-------|-----|-------|------|-------|------|--------|
| 1   | 2     | 2   | 3     | 3   | 5     | 5    | 11    | 11   | 31     |
| 4   | 7     | 7   | 17    | 17  | 59    | 59   | 277   | 277  | 1787   |
| 6   | 13    | 13  | 41    | 41  | 179   | 179  | 1063  | 1063 | ...    |
| 8   | 19    | 19  | 67    | 67  | 331   | 331  | 2221  | ...  | ...    |
| 9   | 23    | 23  | 83    | 83  | 431   | 431  | 3001 | ...   | ...  | ...    |
| 10  | 29    | 29  | 109   | 109 | 461   | 3259  | ...  | ...   | ...  | ...    |
| 12  | 37    | 37  | 157   | 919 | 7193  | ...  | ...   | ...  | ...    |
| 14  | 43    | 43  | 191   | 