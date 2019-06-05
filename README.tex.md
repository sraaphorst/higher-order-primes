# Higher-order primes / Super-primes

We begin by countably listing all primes and labelling them:

$$p_1, p_2, p_3, p_4, p_5, \ldots$$

such that, for all $i$:

1. $p_i$ is prime.
2. $p_i < p_{i+1}$.
3. There is no prime $q$ such that $p_i < q < p_{i+1}$.

Here is a list of the first 1000 primes in order for convenience:

https://en.wikipedia.org/wiki/List_of_prime_numbers#The_first_1000_prime_numbers

We create a partial segment of a table as follows. The ordering will be explained below.

| $i$      | $p_i$    | $p_{p_i}$   | $p_{p_{p_i}}$ | $p_{p_{p_{p_i}}}$ | $p_{p_{p_{p_{p_i}}}}$  |
|----------|----------|-------------|---------------|-------------------|------------------------|
| 1        | 2        | 3           | 5             | 11                | 31                     |
| 4        | 7        | 17          | 59            | 277               | 1787                   |
| 6        | 13       | 41          | 179           | 1063              | ...                    |
| 8        | 19       | 67          | 331           | 2221              | ...                    |
| 9        | 23       | 83          | 431           | 3001              | ...                    |
| 10       | 29       | 109         | 461           | 3259              | ...                    |
| 12       | 37       | 157         | 919           | 7193              | ...                    |
| 14       | 43       | 191         | 1153          | ...               | ...                    |
| 15       | 47       | 211         | 1297          | ...               | ...                    |
| 16       | 53       | 241         | 1523          | ...               | ...                    |
| 18       | 61       | 283         | 1847          | ...               | ...                    |
| 20       | 71       | 353         | 2381          | ...               | ...                    |
| 21       | 73       | 359         | 2417          | ...               | ...                    |
| 22       | 79       | 401         | 2749          | ...               | ...                    |
| 24       | 89       | 461         | 3259          | ...               | ...                    |
| 25       | 97       | 509         | 3637          | ...               | ...                    |
| 26       | 101      | 547         | 3943          | ...               | ...                    |
| 27       | 103      | 563         | 4091          | ...               | ...                    |
| 28       | 107      | 587         | 4273          | ...               | ...                    |
| 30       | 127      | 709         | 5381          | ...               | ...                    |
| 32       | 131      | 739         | 5623          | ...               | ...                    |
| 33       | 137      | 773         | 5869          | ...               | ...                    |
| 34       | 139      | 797         | 6113          | ...               | ...                    |
| 35       | 149      | 859         | 6661          | ...               | ...                    |
| 36       | 151      | 877         | ...           | ...               | ...                    |
| 38       | 163      | 967         | ...           | ...               | ...                    |
| 39       | 167      | 991         | ...           | ...               | ...                    |
| 40       | 173      | 1031        | ...           | ...               | ...                    |
| 42       | 181      | 1087        | ...           | ...               | ...                    |
| 44       | 193      | 1171        | ...           | ...               | ...                    |
| 45       | 197      | 1201        | ...           | ...               | ...                    |
| 46       | 199      | 1217        | ...           | ...               | ...                    |
| 48       | 223      | 1409        | ...           | ...               | ...                    |
| 49       | 227      | 1433        | ...           | ...               | ...                    |
| 50       | 229      | 1447        | ...           | ...               | ...                    |
| $\vdots$ | $\vdots$ | $\vdots$    | $\vdots$      | $\vdots$          | $\vdots$               |

Write:

$$p^k_i = \underbrace{p_{p_{p_{...p_i}}}}_{\textrm{$k$ times}.$$

This notation may be confusing, so we provide an example to explain the first two rows of the table.

For the first row:
1. $i = 1$, so we are interested in the first prime.
2. $p_1$ is the first prime, namely 2.
3. $p_{p_1} = p_2$ is the second prime, namely 3.
4. $p_{p_{p_1}} = p_{p_2} = p_3$ is the third prime, namely 5.
5. $p_{p_{p_{p_1}}} = p_{p_{p_2}} = p_{p_3} = p_5$ is the fifth prime, namely 11.
6. $p_{p_{p_{p_{p_1}}}} = p_{p_{p_{p_2}}} = p_{p_{p_3}} = p_{p_5} = p_{11}$ is the eleventh prime, namely 31.
7. etc.

We can rewrite this as:
1. $p^0(1) = 1$
2. $p^1(1) = 2$
3. $p^2(1) = 3$
4. $p^3(1) = 5$
5. $p^4(1) = 11$
6. $p^4(1) = 31$
7. etc.

The second row can be written as:
1. $p^0(4) = 4$
2. $p^1(4) = p_{p_4}} = 7$
3. $p^2(4) = p_{p_{p_4}} = 17$
4. $p^3(4) = p_{p_{p_{p_4}}} = 59$
5. $p^4(4) = p_{p_{p_{p_{p_4}}}} = 277$
6. $p^5(4) = p_{p_{p_{p_{p_{p_4}}}}} = 1787$
7. etc.

Things to note:
1. Every prime appears in the table.
2. The rows of the table constitute a partition of the natural numbers, with the first element being the only non-prime.
3. The columns of the table also constitute a partition of the natural numbers, with the first column comprising the non-prime numbers.


### Definition 1.1: Primality

Consider a prime number $q$ and let $c$ be a non-prime number where there exists a $k \ge 1$ such that:

$$p^k(c) = q.$$

Then we say that $q$ has primality $k$.

### Theorem 1.2: Uniqueness

For a given prime $q$ in **Definition 1.1**, the numbers $c$ and $k$ are always unique.


#### Examples and Explanation

**Example: 17**

Let's consider number 17. By our table, we have that:

$$p^2(4) = 17.$$

Thus, 17 has **primality 2** and falls in the row-partition of our table containing the non-prime number 6.

The significance of primality is as follows:

1. 17 is prime and is the 7th prime, i.e. $p_7 = 17$.
2. 7 is prime and is the 4th prime, i.e. $p_4 = 7$. 

So. not only is 17 prime, but when we list all of the primes, the index of 17 - namely 7 - is **also** prime.

In this sense, 17 can be viewed as "more prime" than 7, which only has primality 1.

**Another Example: 179**

1. 179 is prime and is the 41st prime, i.e. $p_{41} = 179$.
2. 41 is the 13th prime, i.e. $p_{13} = 41$, and also $p_{p_{13}} = p^2_{13} = 179$.
3. 13 is the 6th prime, i.e. $p_6 = 13$, and also $p_{p_{p_6}} = p^3_{6} = 179$.

Thus, not only is 179 prime, but:
1. The index of 179 amongst primes (41) is also prime.
2. The index of 41 amongst primes (13) is also prime.
3. The index of 13 amongst primes (6) is NOT prime.

In this case, we say that 179 has primality 3.

### Definition 1.2: Higher-Order Primality / Super-Primality

Let $n$ be a natural number such that, by **Theorem 1.2**, we have $c$ and $k$ such that:

$$p^k(c) = n.$$

Then we have that:
1. If $k = 0$, the number is _non-prime (aka composite)_ and $c = n$.
2. If $k \ge 1$, the number $n$ is _prime_.
3. If $k > 1$, the number $n$ is a _higher-order prime (aka super-prime)_.

### Table notes

As mentioned, the table uniquely partitions the natural numbers in two different ways, namely via the rows
and via the columns.

The columns partition the natural numbers according to their primality:
1. The first column consists of all non-prime numbers.
2. For $n > 0$, the $n$th column consists of all prime numbers of primality $n$.
3. There are infinite numbers of primality $n$.

The rows partition the natural numbers into _chains_ where, for a given chain $S$:

$$S = (s_0, s_1, s_2, s_3, \ldots) = (p^0(c), p^1(c), p^2(c), p^3(c), \ldots)$$

we have the following properties:
1. The first cell $s_0$ in the chain is the unique non-prime $c$ in the chain, and thus we say
that $s_0 = c$ _generates_ the chain, as you can see by the above expansion of $S$. Thus, to
uniquely identify $S$, we refer to $S$ as $S(c)$.
2. Every non-prime $c$ generates a unique, infinitely long chain $S(c)$.
3. For any two non-primes $c$ and $d$ with $c \neq d$, we have that $S(c) \cap S(d) = \emptyset$.
2. For any chain $S(c)$, there is exactly one number of primality $k$ in $S(c)$, namely $p^k(c)$.

This repository is just some casual information about super-primality and some programs that assist in
studying super-primality.
