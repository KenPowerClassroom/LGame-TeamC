# The L-Game Research report 
## Introduction

### Who are we
- Richard Fleming ([Richard-Fleming](https://github.com/Richard-Fleming))
- Denis Becle ([Becle-Denis](https://github.com/Becle-Denis))
- Jack Sinnott ([JackSinnott](https://github.com/JackSinnott))
- Mantas Zalnierius ([MantasZalnierius](https://github.com/MantasZalnierius))

### What is the purpose of this document
The purpose of this document is to describe and report the analysis we made about the L Game, its rules and strategies. This document will help the implementation of this game. 

### Why are we doing this project
The project is to develop an c++ application of the L Game. This exercise is part of the software engineering class of the Computer Games Development course taught by [Ken Power](https://github.com/kenpower) at IT Carlow, Ireland. 

## Game description
The L Game Was created by Edward De Bono in a book he released in 1967 called “The Five-Day Course in Thinking”. It also been said that the L Game's humble beginnings started during a dinner conversation between Edward de Bono and mathematician Professor Littlewood. Both agreed that, chess was difficult due to how hard the game is, the billions of possibilities there are to win the game and how you had to keep track of every piece you had and every piece your opponent had. Which is insanely difficult for people to play and understand chess. De Bono loves to play games, but dislikes to play games where there is a lot of pieces you have to keep track of. So the result was the L Game. There are 2,296 distinct board positions or 18,268 if rotations and reflections are counted.

Edward De Bono
![image](https://user-images.githubusercontent.com/45147839/69733540-64c02e80-1125-11ea-8338-d1f3e095b8f3.png)

The game itself is a two player game. The game is played on a board that is has a 4x4 square grid. Each player has their own L shape that has a size of 3x2 square grid. There is also 2 neutral pieces that have a size of 1x1 on the square grid. The game itself is really simple to play, but very hard to master. The reason for this is because there are multiple strategies to play the game.  And some of these strategies work only certain scenarios in the L Game and this is why this game is considered to be a very strategic game. You have to think ahead and plan out what you want to do to defeat your opponent.

![L Game Layout](https://user-images.githubusercontent.com/45147839/69733210-e1064200-1124-11ea-953b-e911a8f0e1cf.png)

## Game rules

The L game is played on a 4x4 game board. Each player has ownership of an individual 
L shaped object. There are also two neutral objects which take up a single cell each.

![Board layout](https://user-images.githubusercontent.com/45257691/69731522-f29a1a80-1121-11ea-93ca-b6e2823e5f05.png)


### Turns

Players take turns alternatively having two options on their turns, one mandatory and on optional. These are:

1. **The mandatory move (moving the L piece)**
  This is the crutch the whole game is based off, hence it's name. On their turn
  players must move their friendly L piece, making any series of flips and turns,
  and drop it on an empty position. (it is invalid to drop the piece back in it's previous 
  position or layered on top of an opponents L piece).

1. **The optional move (moving neutral pieces)**
  The neutral pieces are owned by no one and either can be moved at the end of any players
  turn to any empty cell by the player whose turn it currently is. Either L piece can not be layered over these neutral pieces.

#### Win Conditions

In order to win and end the game a player must be forced into a position where there are
no legal positions in which they can move their L piece.

## Playing strategies
### Basic Strategies
- One basic strategy is blocking off a 3x3 grid in the corner of the board using an L and Neutral piece,
and then manipulating the other neutral piece to eliminate your opponents possible moves.
- Another strategy is to think about the grid as two halves, and ty to lock your opponent in one half of
the grid.

### Guiding Strategic Principles
#### These Principles won't win you the game, but they'll help you not lose for a while.
- Always keep a neutral piece adjacent to your L piece.
- Take a corner position whenever you can.
- Try to have your L piece occupy 3 of the 4 central squares in the grid;
![3 Central Strat](https://user-images.githubusercontent.com/45153107/69731977-b9ae7580-1122-11ea-807b-fc56d6311ce5.png)
- Or 2 central squares and no neutral piece occupies any of the squres marked x;
![2 Central Strat](https://user-images.githubusercontent.com/45153107/69732133-fb3f2080-1122-11ea-9252-c3f1ece522eb.png)

## References
- [Vsauce2: The Hardest Easy Game](https://youtu.be/64pA31_WJa0)
