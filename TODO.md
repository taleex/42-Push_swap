# push_swap

## Active
- [ ] Agree on the structs in push_swap.h (everything depends on this) - both

## Pending
- [ ] 3. Stack operations
- [ ] 1. Input handling

## Done
<<<<<<< HEAD
- [x] 0. Setup -> **jorgferr**
=======
- [x] Makefile integration with ft_printf + libft -> **jorgferr**
- [x] Input handling -> **luisdos**
- [x] Stack initialization -> **luisdos**
>>>>>>> luisdos
---

## Tasks

### 0. Setup
- [x] Basic setup of push_swap.h (node struct, stack struct, prototypes) **jorgferr**
- [x] Makefile (NAME, all, clean, fclean, re, builds libft too) **jorgferr**

### 1. Input handling
- [x] Error function: prints "Error\n" and exits - **luisdos**
- [x] Check each arg is a valid integer - **luisdos**
- [x] Check range (INT_MIN to INT_MAX) - **luisdos**
- [x] Check duplicates - **luisdos**
- [x] Parse optional flag (--simple, --medium, --complex, --adaptive); default is adaptive - **luisdos**
- [x] Recognize benchmark - **luisdos**

### 2. Stack initialization
- [x] Build stack A from the arguments - **luisdos**
- [x] Stack B starts empty - **luisdos**
- [x] Free everything at exit (also on error) - **luisdos**

### 3. Stack operations (operations.c, or split into several files)
<<<<<<< HEAD
- [x] Swap: `sa`, `sb`, `ss` - **jorgferr**
- [x] Push: `pa`, `pb` - **jorgferr**
- [ ] Rotate: `ra`, `rb`, `rr`
- [ ] Reverse rotate: `rra`, `rrb`, `rrr`
=======
- [ ] Swap: `sa`, `sb`, `ss` - **jorgferr**
- [ ] Push: `pa`, `pb` - **jorgferr**
- [x] Rotate: `ra`, `rb`, `rr` **luisdos**
- [x] Reverse rotate: `rra`, `rrb`, `rrr` **luisdos**
>>>>>>> luisdos
- [ ] Each operation outputs its name (see notes: sequence must be returned at the end)

### 4. Disorder metric
- [ ] Function that computes disorder of stack A (before any move)
- [ ] Test: sorted gives 0, reversed gives 1

### 5. Sorting algorithms
- [ ] Simple, O(n²): bubble sort adaptation
- [ ] Medium, O(n√n): chunk-based sorting (√n chunks)
- [ ] Complex, O(n log n): radix sort (LSD or MSD)
- [ ] Adaptive: picks the strategy from the disorder
  - disorder < 0.2 -> simple
  - 0.2 <= disorder < 0.5 -> medium
  - disorder >= 0.5 -> complex

### 6. Delivery
- [ ] README: explain the algorithms and the adaptive design
- [ ] Test with the checker: `ARG="4 67 3 87 23"; ./push_swap --complex $ARG | ./checker_linux $ARG`
- [ ] Norm check

---

## NOTES

### Basics
- Stack A starts with random negative or positive numbers, no duplicates.
- Stack B starts empty.
- Goal: sort stack A in ascending order.
- Operations allowed:
  - Swap: `sa`, `sb`, `ss`
  - Push: `pa`, `pb`
  - Rotate: `ra`, `rb`, `rr`
  - Reverse rotate: `rra`, `rrb`, `rrr`
- A "brain" file manages the stacks, plus a file for the operations if needed.
- Operations must be recorded/output, since the sequence is the result of the program.

### Disorder metric
- Receives stack A and measures how unordered it is, before any move.
- 0 = completely ordered, 1 = worst possible order. Closer to 1 means more disorder.
- Needs a float (or a fraction compared with integers).
- Already in the right order -> disorder is 0.
- Worst possible order -> disorder is 1.
- Calculation: count the errors and divide (see the correction below).

### Required strategies
1. Simple, O(n²) (at least one): bubble sort adaptation (chosen)
2. Medium, O(n√n) (at least one): chunk-based sorting (√n chunks)
3. Complex, O(n log n) (at least one): radix sort adaptation (LSD or MSD)
4. Custom adaptive algorithm (our design):
   - Low disorder: disorder < 0.2 -> must run in O(n²)
   - Medium disorder: 0.2 <= disorder < 0.5 -> must run in O(n√n)
   - High disorder: disorder >= 0.5 -> must run in O(n log n)
- This design must be explained in the README.

### Program rules
- Program name: push_swap
- Submit: Makefile, *.h, *.c
- Makefile rules: NAME, all, clean, fclean, re
- Arguments: list of integers for stack A (argc and argv)
- External functions: read, write, malloc, free, exit
- ft_printf or any equivalent that we coded is allowed
- Optional strategy selector:
  - `--simple`: forces the O(n²) algorithm
  - `--medium`: forces the O(n√n) algorithm
  - `--complex`: forces the O(n log n) algorithm
  - `--adaptive`: adaptive algorithm based on disorder (default if no selector)
- Must have an error handling function that prints "Error\n" for non-integers, out-of-range integers, and duplicates.
