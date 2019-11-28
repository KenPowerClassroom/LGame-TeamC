# Minimal Viable Product (MVP) 

## Outline MVP functionality

When the players start the game, the players will see a board that is a 4x4 square grid. Each player has their own L shape that has a size of 3x2 square grid. There is also 2 neutral pieces that have a size of 1x1 on the square grid.

The game will go by a turn by turn basis. When it is one players turn, that player will be able to move their L piece anywhere it is legal to move. Each player cannot move their L piece onto another player’s L piece or on the original position of their L piece on that turn. A player also cannot move their L piece to where a neutral piece is. 

After the players turn is over that player will be able to move a neutral piece wherever they want, but they cannot move this neutral piece onto another L piece or the other neutral piece on the game board. The player will also have a choice of not moving the neutral piece at all and just end their turn if they want. After this, the turn changes to the other player and this order happens until a player cannot move their L piece at all. When a player cannot move the L piece, the other player wins the game.


## List the features of the MVP
- Player movement
- Check for legal moves
- Display
- Gamestate

## Out Of Scope
 - Menus
 - High end graphics
 - Sound effects
 - Having an AI opponent
 - Multi platform
 - HUD

## List of stories needed to complete the MVP `aim for 8 stories`

1. Display the board

As a player I need to be able to see the current board configuration so that I can understand my position and figure out my next move.

2. Moving the L pieces

As a player I need to be able to precisely position my L piece on the game board.

3. Moving the neutral pieces

As a player I need to have the choice to be able to move the neutral piece at the end of my turn.

4. Not moving the neutral pieces

As a player I need to be able to end my turn without moving the neutral piece.

5. Game over conditions

The game needs to end when the win conditions have been met. 

6. Check for overlapping pieces

The game needs to check the legality of moves to stop players from overlapping pieces on the board.

7. Check that an L piece has been moved to new position

As a player I need to not be able to just place my L piece in the same position as it was in at the start of my turn.

8. Alternate turns

As a player I need to be able to end my turn and have my opponent begin their turn.

9. Restart the game

As a player I need to be able to restart a new game once the original game has ended.

