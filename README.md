# casino-game


## Overview:<br>

The "Casino Game in C++" project is a console-based application designed to provide a simple and interactive gambling experience. Developed in C++, the game incorporates elements of chance, user input validation, and basic balance management. The project caters to players aged 16 and above, incorporating age verification to ensure compliance with legal age requirements for gambling.<br>

## Key Features:<br>

1. **User Registration:**<br>
   - Players are prompted to enter their name and age.<br>
   - Age verification ensures that players must be 16 or older to participate in the game.<br>

2. **Game Instructions:**<br>
   - Clear and concise instructions guide players on the rules and gameplay mechanics.<br>
   - Players select a play amount and choose a number between 1 and 5.<br>

3. **Gameplay Mechanics:**<br>
   - The game utilizes the `rand()` function to generate random numbers.<br>
   - Players win double the bet amount if their chosen number matches the randomly generated number.<br>
   - Losses result in a deduction of the bet amount from the player's total balance.<br>

4. **Balance Management:**<br>
   - Players cannot place bets exceeding their available balance.<br>
   - The total balance is dynamically updated based on the game outcomes.<br>

5. **User Interface:**<br>
   - A straightforward console-based user interface provides a clear display of game information.<br>
   - The UI is designed for ease of use, ensuring an enjoyable and interactive gaming experience.<br>
   
## How to Play:<br>

1. **Registration:**<br>
   - Enter your name and age for personalized gameplay.<br>
   - Age verification ensures players are 16 or older.<br>

2. **Game Instructions:**<br>
   - Read and understand the provided instructions for the game.<br>

3. **Placing Bets:**<br>
   - Enter the desired play amount and select a number between 1 and 5.<br>

4. **Game Outcome:**<br>
   - Await the game engine's random number generation.<br>
   - Win double the bet amount if your chosen number matches the generated number.<br>
   - Experience a loss if there is no match.<br>

5. **Balance Management:**<br>
   - The total balance is updated after each round, reflecting wins or losses.<br>

6. **Continued Play:**<br>
   - The game allows players to place new bets and continue testing their luck.<br>

## Development Environment:<br>

- **Language:** C++<br>
- **Libraries:** Standard C++ libraries, including `<iostream>`, `<ctime>`, `<cstdlib>`, `<string>`, and `windows.h` for enhanced user experience.<br>
- **Random Number Generation:** Utilizes the `rand()` function for generating random numbers.<br>

## Project Extension:<br>

Feel free to explore, modify, and extend the project to include additional features, such as multiplayer modes, enhanced UI, or more sophisticated gameplay mechanics. This project serves as a foundation for further experimentation and learning within the realm of C++ programming.<br>
