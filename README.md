*This project has been created as part of the 42 curriculum by jorgferr and luisdos.*
# 42 - Push_swap

## Description:
push swap
### Rotate and reverse rotate
Stacks are represented as doubly linked lists. Each node contains `next` and `prev` pointers, while each stack stores references to its top (`top`), bottom (`bottom`), and number of elements (`size`).

#### Rotate

Moves the first node to the bottom of the stack.
With the top on the left:
`4, 8, 2, 6` becomes `8, 2, 6, 4`.

#### Reverse rotate

Moves the first node to the top of the stack.
with the top on the left:
`4, 8, 2, 6` becomes `6, 4, 8, 2`.

#### Available operations

| Movement | Stack A | Stack B | Both stacks |
|----------|---------|---------|-------------|
| Rotate | `ra` | `rb` | `rr` |
| Reverse rotate | `rra` | `rrb` | `rrr` |
## Operation Sets:

| Operation     | Description
| :---          | :---
| sa, sb, ss    | swap the top two elements
| pa, pb        | push the top of one stack onto the other
| ra, rb, rr    | rotate (top goes to the bottom)
| rra, rrb, rrr | reverse rotate (bottom goes to the top)

## Instructions:
