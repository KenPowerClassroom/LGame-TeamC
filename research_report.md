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

The game itself is a two player game. The game is played on a board that is has a 4x4 square grid. Each player has their own L shape that has a size of 3x2 square grid. There is also 2 neutral pieces that have a size of 1x1 on the square grid. The game itself is really simple to play, but very hard to master. The reason for this is because there are multiple strategies to play the game.  And some of these strategies work only certain scenarios in the L Game and this is why this game is considered to be a very strategic game. You have to think ahead and plan out what you want to do to defeat your opponent. 

## Game rules

The L game is played on a 4x4 game board. Each player has ownership of an individual 
L shaped object. There are also two neutral objects which take up a single cell each.

![Board layout](https://user-images.githubusercontent.com/45257691/69731522-f29a1a80-1121-11ea-93ca-b6e2823e5f05.png)


### Turns

Players take turns alternatively having two options on their turns, one mandatory and on optional. These are:

1. The mandatory move (moving the L piece)

  This is the crutch the whole game is based off, hence it's name. On their turn
  players must move their friendly L piece, making any series of flips and turns,
  and drop it on an empty position. (it is invalid to drop the piece back in it's previous 
  position or layered on top of an opponents L piece).

1. The optional move (moving neutral pieces)

  The neutral pieces are owned by no one and either can be moved at the end of any players
  turn to any empty cell by the player whose turn it currently is. Either L piece can not be layered over these neutral pieces.

#### Win Conditions

In order to win and end the game a player must be forced into a position where there are
no legal positions in which they can move their L piece.

## Playing strategies
