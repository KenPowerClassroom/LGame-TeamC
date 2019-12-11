# Minimal Viable Product (MVP) 

## Outline MVP functionality

When the players start the game, the players will see a board that is a 4x4 square grid. Each player has their own L shape that has a size of 3x2 square grid. There is also 2 neutral pieces that have a size of 1x1 on the square grid.

The game will go by a turn by turn basis. When it is one players turn, that player will be able to move their L piece anywhere it is legal to move. Each player cannot move their L piece onto another player’s L piece or on the original position of their L piece on that turn. A player also cannot move their L piece to where a neutral piece is. 

After the players turn is over that player will be able to move a neutral piece wherever they want, but they cannot move this neutral piece onto another L piece or the other neutral piece on the game board. The player will also have a choice of not moving the neutral piece at all and just end their turn if they want. After this, the turn changes to the other player and this order happens until a player cannot move their L piece at all. When a player cannot move the L piece, the other player wins the game.


## List the features of the MVP
- Player movement
- Check for legal moves
- Display Game board
- Alternate player turns

## Out Of Scope
 - Menus
 - High end graphics
 - Sound effects
 - Having an AI opponent
 - Multi platform
 - HUD

## List of stories needed to complete the MVP `aim for 8 stories`

1. Display the board (1sp)

As a player I need to be able to see the current board configuration so that I can understand my position and figure out my next move.

2. Moving the L pieces (2sp)

As a player I need to be able to precisely position my L piece on the game board.

Dependant on: 1.

3. Indicate that players can selact a Neutral Piece

As a player I need to know when I am allowed to select a neutral piece.

Dependant on: 1. 

4. Allow for the players to select a Neutral Piece

As a player I need to be able to select one of the two Neutral Pieces to move them.

Dependant on: 3

5. Allow the player to not move a Neutral Piece

As a player I need to be able to choose to not move either of the Neutral Pieces.

Dependant on: 3

6. Moving the Neutral Pieces

As a player I need to be able to move a Neutral Piece around the board.

Dependant on: 4

7. Game over conditions (2sp)

The game needs to end when the win conditions have been met. 

Dependant on: 1,2,3,4,6,7.

8. Check for overlapping pieces (2sp)

The game needs to check the legality of moves to stop players from overlapping pieces on the board.

Dependant on: 1,2,3.

9. Check that an L piece has been moved to new position (1sp)

As a player I need to not be able to just place my L piece in the same position as it was in at the start of my turn.

Dependant on: 1,2,3.

10. Alternate turns (1sp)

As a player I need to be able to end my turn and have my opponent begin their turn.

Dependant on: 1,2,7.

