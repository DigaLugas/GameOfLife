# Game of Life

The Game of Life is a cellular automaton devised by mathematician John Conway in 1970. It is a zero-player game, meaning that its evolution is determined by its initial state, requiring no further input. The game consists of a grid of cells, each of which can be in one of two possible states: alive or dead. The state of each cell evolves over time according to a set of rules.

## About This Project

This project is an implementation of Conway's Game of Life in the C programming language. It provides a simple command-line interface for running the simulation. Users can specify the size of the grid and the initial configuration of live cells. The program then simulates the evolution of the system according to the rules of the game.

## Rules of the Game

The evolution of the Game of Life follows these rules:

1. Any live cell with fewer than two live neighbors dies, as if by underpopulation.
2. Any live cell with two or three live neighbors lives on to the next generation.
3. Any live cell with more than three live neighbors dies, as if by overpopulation.
4. Any dead cell with exactly three live neighbors becomes a live cell, as if by reproduction.

These simple rules give rise to complex and interesting patterns, making the Game of Life a fascinating subject for study and exploration.

## How to Run

To run the Game of Life simulation, follow these steps:

1. Compile the source code using a C compiler.
2. Execute the compiled executable file, providing any necessary command-line arguments such as grid size and initial configuration.

## Contributions

Contributions to this project are welcome! If you have ideas for improvements or new features, feel free to fork the repository, make your changes, and submit a pull request.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Contact

For any questions or suggestions regarding this project, feel free to contact the project maintainer:

Lucas Gustavo - [lucasgustavorodrigues10@gmail.com](mailto:lucasgustavorodrigues10@gmail.com
)
