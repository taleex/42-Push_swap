## Active

## Pending
- [ ] Create Operations


## Done

---

### Operations
[ ] Create a file to manage the operations

### Input handling


### Stack initialization

### Stack operations
- [ ] Swap: `sa`, `sb`, `ss`
- [ ] Push: `pa`, `pb`
- [ ] Rotate: `ra`, `rb`, `rr`
- [ ] Reverse rotate: `rra`, `rrb`, `rrr`

### Sorting algorithm

----

### NOTES:

Initially:
**A Stack** contains: random negative or prositive numbers without duplicates;
**B Stack** is empty;

Goal:
Order in ascedent the numbers at **stack A**

Operations that we can use:

- [ ] Swap: `sa`, `sb`, `ss`
- [ ] Push: `pa`, `pb`
- [ ] Rotate: `ra`, `rb`, `rr`
- [ ] Reverse rotate: `rra`, `rrb`, `rrr`

  Have a brain file to manage this stacks plus a file to contain these operations (IF NEEDED).

These operations must be saved somewhere, because we need to return the sequence in the end of the program.

----

Disorder metric:

Receives stack a in a order, and the program check how much disorder it is, when 0 is completly order, and 1 disorder. and this is to rank the disorder. when more close to 1 more disorder it is.

we might need to use a float. we need to mesure the disorder before doing any movement.

sum total errors and dived by the total of numbers.

*If the numbers are already in the right order, the disorder is 0.*

*hey are in the worst possible order, the disorder is 1.*

---

Required Strategies:

1 - Simple algorithm (O(n2))(AT LEAST ONE)
	• Bubble sort adaptation (choosed)

2 - Medium algorithm (o(n^n)) (AT LEAST ONE)
	- Chunk-based sorting (divide into √n chunks)

3 - Complex algorithm (O(n log n)) (AT LEAST ONE)
	- Radix sort adaptation (LSD or MSD)

4. Custom adaptive algorithm (learner’s design)
	- Low disorder: if disorder < 0.2, your chosen method must run in O(n2) time
	- Medium disorder: if 0.2 ≤ disorder < 0.5, your chosen method must run in O(n√n) time.
	- High disorder: if disorder ≥ 0.5, your chosen method must run in O(n log n) time.

In this step we must explain in the readme file

---

**Program name:**push_swap
files we can submite: Makefile, *.h, *.c
**Makefile:** NAME, all, clean, fclean, re
**Arguments** stack a: A list of integers (passed by argc & argv)
**External Function:** read, write, malloc, free, exit
• ft_printf or any equivalent
YOU coded
**Description** Sort stacks

MAKEFILE MUST:

An optional strategy selector:
**--simple** Forces the use of your O(n2) algorithm.
**--medium** Forces the use of your O(n√n)algorithm.
**--complex** Forces the use of your O(n log n) algorithm.
**--adaptive**Forces the use of your adaptive algorithm based on disorder.
This is the default behavior if no selector is given.

e.g: *$> ARG="4 67 3 87 23"; ./push_swap --complex $ARG | ./checker_linux $ARG*

Must have a function for error handling.

"Error \n"

for example: arguments that are not integers, integers outside the
valid range, or duplicate values.
