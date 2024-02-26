# Subject

## Project instructions

Your project must comply with the following rules:
- You have to turn in a Makefile which will compile your source files. It must not relink.
-  Global variables are forbidden.
   You have to write a program named push_swap that takes as an argument the stack a formatted as a list of integers. The first argument should be at the top of the stack (be careful about the order).
- The program must display the smallest list of instructions possible to sort the stack a, the smallest number being at the top
- Instructions must be separated by a ’\n’ and nothing else.
- The goal is to sort the stack with the lowest possible number of operations. During the evaluation process, the number of instructions found by your program will be compared against a limit: the maximum number of operations tolerated. 
- If no parameters are specified, the program must not display anything and give the prompt back.
- In case of error, it must display "Error" followed by a ’\n’ on the standard error. Errors include for example: some arguments aren’t integers, some arguments are bigger than an integer and/or there are duplicates.

<br>

### Mandatory part

<br>

The rules
- You have 2 stacks named a and b.
- At the beginning:
  - The stack a contains a random amount of negative and/or positive numbers which cannot be duplicated.
  - The stack b is empty.
- The goal is to sort in ascending order numbers into stack a. To do so you have the following operations at your disposal:
  - sa (swap a): Swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements.
  - sb (swap b): Swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements.
  - ss : sa and sb at the same time.
  - pa (push a): Take the first element at the top of b and put it at the top of a. Do nothing if b is empty.
  - pb (push b): Take the first element at the top of a and put it at the top of b. Do nothing if a is empty.
  - ra (rotate a): Shift up all elements of stack a by 1. The first element becomes the last one.
  - rb (rotate b): Shift up all elements of stack b by 1. The first element becomes the last one.
  - rr : ra and rb at the same time.
  - rra (reverse rotate a): Shift down all elements of stack a by 1. The last element becomes the first one.
  - rrb (reverse rotate b): Shift down all elements of stack b by 1. The last element becomes the first one.
  - rrr : rra and rrb at the same time.
 
## Recipe

- write the operation above (sa, sb, ss, pa, pb, ra, rb, rr, rra, rrb, rrr)
- write a main function that checks the arguments passed, if there is only one argument, it has to be split
- check the arguments for sytax errors etc.
- initialize the stack, fill the stack with the arguments  
- check if the arguments are sorted, if not they should be passed to your sorting algorithm
- remember to free all the memory you used!

## Helpful links

- Thuggonaut's github repo and youtube video: https://github.com/Thuggonaut/42IC_Ring02_Push_swap/tree/main
- Oceano's github repo and youtube video: https://github.com/suspectedoceano/push_swap
- About the Turk Algorithm: https://medium.com/@ayogun/push-swap-c1f5d2d41e97
- O-reo's push_swap visualizer: https://github.com/o-reo/push_swap_visualizer

### some commands to test:
- ./push_swap $(shuf -i 0-100000 -n 500) |wc -l
- ARG="4 67 3 87 23"; ./push_swap $ARG | wc -l
- ./push_swap "4 67 3 87 23"
- ./push_swap 2 1 3 6 5 
- ./push_swap 0 1 2 3 (nothing done since it's already sorted)
- ./push_swap 0 one 2 3 (should return Error)
- ./push_swap 0 --3 2 3 (should return Error)
- ./push_swap 0 2 2 3 (should return Error)
