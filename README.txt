3D Tic-Tac-Toe Game
Author: [Your Name]

Project Overview:
This project is a 3D version of Tic-Tac-Toe using object-oriented programming in C++. The game uses three boards to simulate a 3D space. Two players take turns placing their symbols, and the first to align three symbols wins.

Object-Oriented Concepts Used:

Encapsulation:
Classes keep their data private and provide public methods to access or modify it.

Abstraction:
Complex logic is hidden behind simple methods. Example: the Game class controls the game flow.

Composition:
The CubeBoard class contains three Board objects to represent the 3D game space.

Modularity:
The code is divided into separate classes (Player, Board, CubeBoard, Game) to keep responsibilities clear and the code easy to manage.

Design Decisions:

Classes are used to separate responsibilities and keep the code organized.

Private attributes and public getters/setters control access to data.

The design makes it easy to add new features like AI or saving the game.

User input is validated to prevent invalid moves.