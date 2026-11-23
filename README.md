*This project has been created as part of the 42 curriculum by jorgferr and luisdos.*

# 42 - Push_swap

## Description

The goal of push_swap is to sort unique integers in ascending order using
two stacks and a restricted set of operations.

## Data Structures

Stacks are represented as non-circular doubly linked lists.

- `t_node` stores the integer `value`, its `index`, and the `next` and
  `prev` pointers. The index starts at `-1` until ranking is implemented.
- `t_stack` stores references to `top`, `bottom`, and the number of
  elements, `size`.

An empty stack has both pointers set to `NULL` and a size of `0`.

---

## Operation Sets

| Movement | Stack A | Stack B | Both stacks | Description |
| --- | --- | --- | --- | --- |
| Swap | `sa` | `sb` | `ss` | Exchange the top two elements. |
| Push | `pa` (B → A) | `pb` (A → B) | — | Move the top element between stacks. |
| Rotate | `ra` | `rb` | `rr` | Move the top element to the bottom. |
| Reverse rotate | `rra` | `rrb` | `rrr` | Move the bottom element to the top. |

### Rotate

Moves the first node to the bottom of the stack.

With the top on the left:
`4, 8, 2, 6` becomes `8, 2, 6, 4`.

### Reverse Rotate

Moves the last node to the top of the stack.

With the top on the left:
`4, 8, 2, 6` becomes `6, 4, 8, 2`.

Both movements update node links without allocating memory or changing
the stack size. Each runs in O(1) time.

---

## Input Handling

Arguments are validated before integer conversion and node allocation:

- Each number must contain digits, optionally preceded by `+` or `-`.
- Values must be within the inclusive range `INT_MIN` to `INT_MAX`.
- Duplicate numeric values are rejected: `3`, `+3` and `003` are equal.

Invalid input prints `Error\n` to `stderr` and exits with status `1`.
Running without arguments produces no output and returns `0`.

`ft_parse_args` stores the selected options and the position of the first
numeric argument.

---

## Stack Initialization and Cleanup

Stack A preserves the argument order: the first number becomes its top.
Stack B starts empty.

| Helper | Purpose |
| --- | --- |
| `ft_stack_init` | Initialize an empty stack. |
| `ft_node_new` | Allocate and initialize a node. |
| `ft_stack_add_back` | Append a node and update the size. |
| `ft_stack_build` | Build a stack from validated arguments. |
| `ft_stack_clear` | Free all nodes and reset the stack. |

`ft_stack_build` returns `1` on success and `0` on allocation failure.
The caller clears both stacks before exiting, including when construction
fails after some nodes have already been allocated.

---

## Instructions

The project uses `ft_printf`, with Libft inside `ft_printf/libft/`.

Build:

```sh
make
```

Example invocation:

```sh
./push_swap --adaptive 4 -2 9
```

Strategy flags must precede the numbers:
`--simple`, `--medium`, `--complex` or `--adaptive`.
The default is `--adaptive`.

The parser also recognizes `--bench`; operation counters and benchmark
reporting remain to be implemented.

## Development Status

Input handling and stack initialization are implemented. The current
program validates arguments, builds the stacks and releases their memory.

Rotate and reverse rotate tests have passed. Integration tests are being
repeated after replacing `ft_atoi` to address overflow at integer limits.

The disorder metric, sorting algorithms and benchmark report are pending.

## Resources

- 