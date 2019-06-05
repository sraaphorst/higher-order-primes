# Higher-order primes / Super-primes

We begin by countably listing all primes and labelling them:

<p align="center"><img src="/tex/30c022d9bb6a8a8000a8d320215eb819.svg?invert_in_darkmode&sanitize=true" align=middle width=133.93253939999997pt height=10.2739725pt/></p>

such that, for all <img src="/tex/77a3b857d53fb44e33b53e4c8b68351a.svg?invert_in_darkmode&sanitize=true" align=middle width=5.663225699999989pt height=21.68300969999999pt/>:

1. <img src="/tex/0d19b0a4827a28ecffa01dfedf5f5f2c.svg?invert_in_darkmode&sanitize=true" align=middle width=12.92146679999999pt height=14.15524440000002pt/> is prime.
2. <img src="/tex/0a003b21199dc790cc50a2f2b1a274c9.svg?invert_in_darkmode&sanitize=true" align=middle width=65.22638099999999pt height=17.723762100000005pt/>.
3. There is no prime <img src="/tex/d5c18a8ca1894fd3a7d25f242cbe8890.svg?invert_in_darkmode&sanitize=true" align=middle width=7.928106449999989pt height=14.15524440000002pt/> such that <img src="/tex/d04b42b415850d560d342f8707827fb2.svg?invert_in_darkmode&sanitize=true" align=middle width=95.07209909999999pt height=17.723762100000005pt/>.

Here is a list of the first 1000 primes in order for convenience:

https://en.wikipedia.org/wiki/List_of_prime_numbers#The_first_1000_prime_numbers

We create a partial segment of a table as follows. The ordering will be explained below.

| <img src="/tex/77a3b857d53fb44e33b53e4c8b68351a.svg?invert_in_darkmode&sanitize=true" align=middle width=5.663225699999989pt height=21.68300969999999pt/>      | <img src="/tex/0d19b0a4827a28ecffa01dfedf5f5f2c.svg?invert_in_darkmode&sanitize=true" align=middle width=12.92146679999999pt height=14.15524440000002pt/>    | <img src="/tex/49fdb142f149013451c8306acd1ae369.svg?invert_in_darkmode&sanitize=true" align=middle width=19.43256974999999pt height=14.15524440000002pt/>   | <img src="/tex/b14d56c9020b5ad0ac659d0cf37e113c.svg?invert_in_darkmode&sanitize=true" align=middle width=25.512375899999988pt height=14.15524440000002pt/> | <img src="/tex/f2c3520be1e62e7a1b1fad3ca26a1664.svg?invert_in_darkmode&sanitize=true" align=middle width=31.59218369999999pt height=16.800303299999978pt/> | <img src="/tex/e44e19681cd1fc8521268bd7a3c44245.svg?invert_in_darkmode&sanitize=true" align=middle width=37.67199149999999pt height=20.087924999999977pt/>  |
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
| <img src="/tex/5f73ac7f4b10f3b9bf369b4b37f93371.svg?invert_in_darkmode&sanitize=true" align=middle width=4.5662248499999905pt height=29.771689199999994pt/> | <img src="/tex/5f73ac7f4b10f3b9bf369b4b37f93371.svg?invert_in_darkmode&sanitize=true" align=middle width=4.5662248499999905pt height=29.771689199999994pt/> | <img src="/tex/5f73ac7f4b10f3b9bf369b4b37f93371.svg?invert_in_darkmode&sanitize=true" align=middle width=4.5662248499999905pt height=29.771689199999994pt/>    | <img src="/tex/5f73ac7f4b10f3b9bf369b4b37f93371.svg?invert_in_darkmode&sanitize=true" align=middle width=4.5662248499999905pt height=29.771689199999994pt/>      | <img src="/tex/5f73ac7f4b10f3b9bf369b4b37f93371.svg?invert_in_darkmode&sanitize=true" align=middle width=4.5662248499999905pt height=29.771689199999994pt/>          | <img src="/tex/5f73ac7f4b10f3b9bf369b4b37f93371.svg?invert_in_darkmode&sanitize=true" align=middle width=4.5662248499999905pt height=29.771689199999994pt/>               |

Write:

<p align="center"><img src="/tex/a16c57beb073cb0766bd5728b3404977.svg?invert_in_darkmode&sanitize=true" align=middle width=84.58574519999999pt height=45.7444086pt/></p>

This notation may be confusing, so we provide an example to explain the first two rows of the table.

For the first row:
1. <img src="/tex/0ac75c805f5e7bf3181cb114d8ac5ae4.svg?invert_in_darkmode&sanitize=true" align=middle width=35.80006649999999pt height=21.68300969999999pt/>, so we are interested in the first prime.
2. <img src="/tex/e48fedf0490f51b6457b8c979bc10c27.svg?invert_in_darkmode&sanitize=true" align=middle width=14.823113249999992pt height=14.15524440000002pt/> is the first prime, namely 2.
3. <img src="/tex/18178d26312f5a8c500395bc72cbffda.svg?invert_in_darkmode&sanitize=true" align=middle width=59.02529984999998pt height=14.15524440000002pt/> is the second prime, namely 3.
4. <img src="/tex/deee2d7554645b95e1d1ef6dda84de7c.svg?invert_in_darkmode&sanitize=true" align=middle width=110.12920874999999pt height=14.15524440000002pt/> is the third prime, namely 5.
5. <img src="/tex/ad55a01e85e6de4adc550d446b4c5793.svg?invert_in_darkmode&sanitize=true" align=middle width=168.13483994999999pt height=16.43825699999998pt/> is the fifth prime, namely 11.
6. <img src="/tex/9507fa9fbcaf51b8117abb2810eb6a0d.svg?invert_in_darkmode&sanitize=true" align=middle width=239.5947378pt height=19.72587539999998pt/> is the eleventh prime, namely 31.
7. etc.

We can rewrite this as:
1. <img src="/tex/6812fc82734f2e074b3771e348f1fb72.svg?invert_in_darkmode&sanitize=true" align=middle width=66.78650879999998pt height=26.76175259999998pt/>
2. <img src="/tex/8e7adaa9f0b9f9a265d23f815467ac50.svg?invert_in_darkmode&sanitize=true" align=middle width=66.78650879999998pt height=26.76175259999998pt/>
3. <img src="/tex/37e71b6ee177fcbdea0851b394db6566.svg?invert_in_darkmode&sanitize=true" align=middle width=66.78650879999998pt height=26.76175259999998pt/>
4. <img src="/tex/16b802e7d55e79f8679dbf6f634878e2.svg?invert_in_darkmode&sanitize=true" align=middle width=66.78650879999998pt height=26.76175259999998pt/>
5. <img src="/tex/47174945b7cc31f3012dac92dee10a0f.svg?invert_in_darkmode&sanitize=true" align=middle width=75.0057198pt height=26.76175259999998pt/>
6. <img src="/tex/4706740a02fa0c564159e8f89df5947e.svg?invert_in_darkmode&sanitize=true" align=middle width=75.0057198pt height=26.76175259999998pt/>
7. etc.

The second row can be written as:
1. <img src="/tex/94d0270434e61b5c1b5a5f7b3aa0fc1e.svg?invert_in_darkmode&sanitize=true" align=middle width=66.78650879999998pt height=26.76175259999998pt/>
2. <img src="/tex/3f44d38a93fe7f764844cca47621a380.svg?invert_in_darkmode&sanitize=true" align=middle width=110.98869704999997pt height=26.76175259999998pt/>
3. <img src="/tex/b66473b67b5c3bdeaa2f85d93715e5eb.svg?invert_in_darkmode&sanitize=true" align=middle width=126.10962704999999pt height=26.76175259999998pt/>
4. <img src="/tex/c1f95e3b724c1a3e01ef01a1282b4e7a.svg?invert_in_darkmode&sanitize=true" align=middle width=133.01134935pt height=26.76175259999998pt/>
5. <img src="/tex/7767d5c4e3246b7801fdc7ae33d8fd45.svg?invert_in_darkmode&sanitize=true" align=middle width=148.13228099999998pt height=26.76175259999998pt/>
6. <img src="/tex/9c6b9c3fe73da1acc763f8798223a7a7.svg?invert_in_darkmode&sanitize=true" align=middle width=163.253211pt height=26.76175259999998pt/>
7. etc.

Things to note:
1. Every prime appears in the table.
2. The rows of the table constitute a partition of the natural numbers, with the first element being the only non-prime.
3. The columns of the table also constitute a partition of the natural numbers, with the first column comprising the non-prime numbers.


### Definition 1.1: Primality

Consider a prime number <img src="/tex/d5c18a8ca1894fd3a7d25f242cbe8890.svg?invert_in_darkmode&sanitize=true" align=middle width=7.928106449999989pt height=14.15524440000002pt/> and let <img src="/tex/3e18a4a28fdee1744e5e3f79d13b9ff6.svg?invert_in_darkmode&sanitize=true" align=middle width=7.11380504999999pt height=14.15524440000002pt/> be a non-prime number where there exists a <img src="/tex/5d5ff37aaa3fb241525e4317f76637e6.svg?invert_in_darkmode&sanitize=true" align=middle width=39.21220214999999pt height=22.831056599999986pt/> such that:

<p align="center"><img src="/tex/6eeef572d999d73cb82c97b83dc62a32.svg?invert_in_darkmode&sanitize=true" align=middle width=70.66968974999999pt height=18.88772655pt/></p>

Then we say that <img src="/tex/d5c18a8ca1894fd3a7d25f242cbe8890.svg?invert_in_darkmode&sanitize=true" align=middle width=7.928106449999989pt height=14.15524440000002pt/> has primality <img src="/tex/63bb9849783d01d91403bc9a5fea12a2.svg?invert_in_darkmode&sanitize=true" align=middle width=9.075367949999992pt height=22.831056599999986pt/>.

### Theorem 1.2: Uniqueness

For a given prime <img src="/tex/d5c18a8ca1894fd3a7d25f242cbe8890.svg?invert_in_darkmode&sanitize=true" align=middle width=7.928106449999989pt height=14.15524440000002pt/> in **Definition 1.1**, the numbers <img src="/tex/3e18a4a28fdee1744e5e3f79d13b9ff6.svg?invert_in_darkmode&sanitize=true" align=middle width=7.11380504999999pt height=14.15524440000002pt/> and <img src="/tex/63bb9849783d01d91403bc9a5fea12a2.svg?invert_in_darkmode&sanitize=true" align=middle width=9.075367949999992pt height=22.831056599999986pt/> are always unique.


#### Examples and Explanation

**Example: 17**

Let's consider number 17. By our table, we have that:

<p align="center"><img src="/tex/4e786a4f28ae84078dc0eb6389adf5f8.svg?invert_in_darkmode&sanitize=true" align=middle width=79.57194299999999pt height=18.312383099999998pt/></p>

Thus, 17 has **primality 2** and falls in the row-partition of our table containing the non-prime number 6.

The significance of primality is as follows:

1. 17 is prime and is the 7th prime, i.e. <img src="/tex/3da8480f06b2b51b225ed9f83ca19083.svg?invert_in_darkmode&sanitize=true" align=middle width=54.00107624999998pt height=21.18721440000001pt/>.
2. 7 is prime and is the 4th prime, i.e. <img src="/tex/b996b035a443789bd1abc564911cb068.svg?invert_in_darkmode&sanitize=true" align=middle width=45.78186689999999pt height=21.18721440000001pt/>. 

So. not only is 17 prime, but when we list all of the primes, the index of 17 - namely 7 - is **also** prime.

In this sense, 17 can be viewed as "more prime" than 7, which only has primality 1.

**Another Example: 179**

1. 179 is prime and is the 41st prime, i.e. <img src="/tex/eedd212524f6dc066bf53648e627bd56.svg?invert_in_darkmode&sanitize=true" align=middle width=68.77282829999999pt height=21.18721440000001pt/>.
2. 41 is the 13th prime, i.e. <img src="/tex/eaaac69f6dfae766a97a9fe9da40d98b.svg?invert_in_darkmode&sanitize=true" align=middle width=60.55361894999998pt height=21.18721440000001pt/>, and also <img src="/tex/a166d46488ebc91e49847408e4aa4ff0.svg?invert_in_darkmode&sanitize=true" align=middle width=118.56871124999999pt height=26.76175259999998pt/>.
3. 13 is the 6th prime, i.e. <img src="/tex/88c29d8c5b826a46b958eabf5299f8bf.svg?invert_in_darkmode&sanitize=true" align=middle width=54.00107624999998pt height=21.18721440000001pt/>, and also <img src="/tex/6880f76ba7835df7de3b11c9cfc67f08.svg?invert_in_darkmode&sanitize=true" align=middle width=113.32419449999998pt height=26.76175259999998pt/>.

Thus, not only is 179 prime, but:
1. The index of 179 amongst primes (41) is also prime.
2. The index of 41 amongst primes (13) is also prime.
3. The index of 13 amongst primes (6) is NOT prime.

In this case, we say that 179 has primality 3.

### Definition 1.2: Higher-Order Primality / Super-Primality

Let <img src="/tex/55a049b8f161ae7cfeb0197d75aff967.svg?invert_in_darkmode&sanitize=true" align=middle width=9.86687624999999pt height=14.15524440000002pt/> be a natural number such that, by **Theorem 1.2**, we have <img src="/tex/3e18a4a28fdee1744e5e3f79d13b9ff6.svg?invert_in_darkmode&sanitize=true" align=middle width=7.11380504999999pt height=14.15524440000002pt/> and <img src="/tex/63bb9849783d01d91403bc9a5fea12a2.svg?invert_in_darkmode&sanitize=true" align=middle width=9.075367949999992pt height=22.831056599999986pt/> such that:

<p align="center"><img src="/tex/db376080d26a411312d259cda2282cc0.svg?invert_in_darkmode&sanitize=true" align=middle width=72.60847935pt height=18.88772655pt/></p>

Then we have that:
1. If <img src="/tex/8f9a0a0ee8a6345657b63f035033cc10.svg?invert_in_darkmode&sanitize=true" align=middle width=39.21220214999999pt height=22.831056599999986pt/>, the number is _non-prime (aka composite)_ and <img src="/tex/765722246c8fc78d65d77465adbfd254.svg?invert_in_darkmode&sanitize=true" align=middle width=38.898311099999994pt height=14.15524440000002pt/>.
2. If <img src="/tex/5d5ff37aaa3fb241525e4317f76637e6.svg?invert_in_darkmode&sanitize=true" align=middle width=39.21220214999999pt height=22.831056599999986pt/>, the number <img src="/tex/55a049b8f161ae7cfeb0197d75aff967.svg?invert_in_darkmode&sanitize=true" align=middle width=9.86687624999999pt height=14.15524440000002pt/> is _prime_.
3. If <img src="/tex/51f906b7feb1c9afe8f53b28a80a1ab2.svg?invert_in_darkmode&sanitize=true" align=middle width=39.21220214999999pt height=22.831056599999986pt/>, the number <img src="/tex/55a049b8f161ae7cfeb0197d75aff967.svg?invert_in_darkmode&sanitize=true" align=middle width=9.86687624999999pt height=14.15524440000002pt/> is a _higher-order prime (aka super-prime)_.

### Table notes

As mentioned, the table uniquely partitions the natural numbers in two different ways, namely via the rows
and via the columns.

The columns partition the natural numbers according to their primality:
1. The first column consists of all non-prime numbers.
2. For <img src="/tex/ee8386659c8a6b147349f8220bbdfeff.svg?invert_in_darkmode&sanitize=true" align=middle width=40.00371704999999pt height=21.18721440000001pt/>, the <img src="/tex/55a049b8f161ae7cfeb0197d75aff967.svg?invert_in_darkmode&sanitize=true" align=middle width=9.86687624999999pt height=14.15524440000002pt/>th column consists of all prime numbers of primality <img src="/tex/55a049b8f161ae7cfeb0197d75aff967.svg?invert_in_darkmode&sanitize=true" align=middle width=9.86687624999999pt height=14.15524440000002pt/>.
3. There are infinite numbers of primality <img src="/tex/55a049b8f161ae7cfeb0197d75aff967.svg?invert_in_darkmode&sanitize=true" align=middle width=9.86687624999999pt height=14.15524440000002pt/>.

The rows partition the natural numbers into _chains_ where, for a given chain <img src="/tex/e257acd1ccbe7fcb654708f1a866bfe9.svg?invert_in_darkmode&sanitize=true" align=middle width=11.027402099999989pt height=22.465723500000017pt/>:

<p align="center"><img src="/tex/16ab10b7899493164eedc8e5d37a0a03.svg?invert_in_darkmode&sanitize=true" align=middle width=379.73337104999996pt height=18.312383099999998pt/></p>

we have the following properties:
1. The first cell <img src="/tex/ac3148a5746b81298cb0c456b661f197.svg?invert_in_darkmode&sanitize=true" align=middle width=14.25802619999999pt height=14.15524440000002pt/> in the chain is the unique non-prime <img src="/tex/3e18a4a28fdee1744e5e3f79d13b9ff6.svg?invert_in_darkmode&sanitize=true" align=middle width=7.11380504999999pt height=14.15524440000002pt/> in the chain, and thus we say
that <img src="/tex/e8c2c00505006ac7733ff7f7664139e7.svg?invert_in_darkmode&sanitize=true" align=middle width=44.11137389999999pt height=14.15524440000002pt/> _generates_ the chain, as you can see by the above expansion of <img src="/tex/e257acd1ccbe7fcb654708f1a866bfe9.svg?invert_in_darkmode&sanitize=true" align=middle width=11.027402099999989pt height=22.465723500000017pt/>. Thus, to
uniquely identify <img src="/tex/e257acd1ccbe7fcb654708f1a866bfe9.svg?invert_in_darkmode&sanitize=true" align=middle width=11.027402099999989pt height=22.465723500000017pt/>, we refer to <img src="/tex/e257acd1ccbe7fcb654708f1a866bfe9.svg?invert_in_darkmode&sanitize=true" align=middle width=11.027402099999989pt height=22.465723500000017pt/> as <img src="/tex/2a2ac6cebda315d6c50722c2181d9e3d.svg?invert_in_darkmode&sanitize=true" align=middle width=30.926619899999988pt height=24.65753399999998pt/>.
2. Every non-prime <img src="/tex/3e18a4a28fdee1744e5e3f79d13b9ff6.svg?invert_in_darkmode&sanitize=true" align=middle width=7.11380504999999pt height=14.15524440000002pt/> generates a unique, infinitely long chain <img src="/tex/2a2ac6cebda315d6c50722c2181d9e3d.svg?invert_in_darkmode&sanitize=true" align=middle width=30.926619899999988pt height=24.65753399999998pt/>.
3. For any two non-primes <img src="/tex/3e18a4a28fdee1744e5e3f79d13b9ff6.svg?invert_in_darkmode&sanitize=true" align=middle width=7.11380504999999pt height=14.15524440000002pt/> and <img src="/tex/2103f85b8b1477f430fc407cad462224.svg?invert_in_darkmode&sanitize=true" align=middle width=8.55596444999999pt height=22.831056599999986pt/> with <img src="/tex/316929ca0e5393120b681f0d16a1ad87.svg?invert_in_darkmode&sanitize=true" align=middle width=37.587397649999986pt height=22.831056599999986pt/>, we have that <img src="/tex/4a5a63c83a021563a8fddd5d453b2bb1.svg?invert_in_darkmode&sanitize=true" align=middle width=111.69693809999998pt height=24.65753399999998pt/>.
2. For any chain <img src="/tex/2a2ac6cebda315d6c50722c2181d9e3d.svg?invert_in_darkmode&sanitize=true" align=middle width=30.926619899999988pt height=24.65753399999998pt/>, there is exactly one number of primality <img src="/tex/63bb9849783d01d91403bc9a5fea12a2.svg?invert_in_darkmode&sanitize=true" align=middle width=9.075367949999992pt height=22.831056599999986pt/> in <img src="/tex/2a2ac6cebda315d6c50722c2181d9e3d.svg?invert_in_darkmode&sanitize=true" align=middle width=30.926619899999988pt height=24.65753399999998pt/>, namely <img src="/tex/01dcc6d609111d69c42f381632a927d8.svg?invert_in_darkmode&sanitize=true" align=middle width=36.257748449999994pt height=27.91243950000002pt/>.

This repository is just some casual information about super-primality and some programs that assist in
studying super-primality.
