## Active
- [ ] Input handling

## Pending
- [ ] Stack initialization
- [ ] Stack operations
- [ ] Sorting algorithm
- [ ] Testing & Norminette

## Done
- [x] Parse data from argc & argv

---

### Input handling
- [ ] Check signals (`+` / `-`)
- [ ] Check if is digit
- [ ] Check `int` overflow (`INT_MIN` to `INT_MAX`)
- [ ] Check if it's unique (no duplicates)
- [ ] Print `Error\n` to `stderr` (`fd 2`) and free memory on invalid input

### Stack initialization
- [ ] Define node and stack structs (`a` & `b`)
- [ ] Populate stack `a` and keep stack `b` empty
- [ ] Handle no args or already sorted input (exit without printing)
- [ ] Assign normalized index (`0` to `n - 1`)

### Stack operations
- [ ] Swap: `sa`, `sb`, `ss`
- [ ] Push: `pa`, `pb`
- [ ] Rotate: `ra`, `rb`, `rr`
- [ ] Reverse rotate: `rra`, `rrb`, `rrr`

### Sorting algorithm
- [ ] Sort small stacks (2, 3, 4, 5 elements)
- [ ] Sort larger stacks (100 and 500 elements)

### Testing & Norminette
- [ ] Run `norminette` on all files
