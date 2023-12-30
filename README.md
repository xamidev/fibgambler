# Fibonnaci gambling

WIP

A gambling technique using the Fibonnaci suite.

### Principle

Let a dice game where the score 6 doubles your bet.
(In fact the game could be anything, but that is the program's example).

The base bet is x. That way, on the first bet, you bet x.

There are two outcomes to this situation:
- Losing: the bet doubles (x becomes 2x, then 4x, and so on).
- Winning: the bet resets to x.

This could work on systems without house edge.

### Utility

This program can emulate a finite number of gambling rounds using the Fibonnaci technique and outputs the gambler's balance along with stats about the rounds.

### Usage

```
make
./build/fibgambler <rolls>
```

### To-do

- Statistical analysis of the strategy
- Implementation of other games or arguments

### Moral

Moral of the story.. Don't gamble!
