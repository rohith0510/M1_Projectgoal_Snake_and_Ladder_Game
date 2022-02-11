# Test Plan and Test Ouput

| *Test ID* | *HLT ID* | *Description*                                              | *Exp IN* | *Exp OUT* | *Actual Out* |*PASS/FAIL*  |    
|-------------|-----|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  T_01|H_01|Provide which player plays the game|  Player specified  | Player will enter the game | Player will enter the game | PASS |
|  T_02|H_02|For each player dice number has to be generated|  Dice value From range 1-6| Player position updated | Player position updated | PASS |
|  T_03|H_03|If Dice value is 6 player gets another chance to roll|  Dice value 6| Another Dice value is generated |Another Dice value is generated| PASS |
|  T_04|H_04|If Player lands on Ladder he points towards the top of the ladder|  Player position at Ladder | Player moves to the top of the ladder  | Player moves to the top of the ladder| PASS |
|  T_05|H_05|Player position at Snake Head | Player moves to the tail of the Snake | Player moves to the tail of the Snake | PASS |
T_06|H_06|If Position exceeds 100, player position is decreased by dice value |  Player position exceeds 100 | incorrect | Decreases the player position by dice value | PASS |
T_07|H_07| If player reaches 100, the he has to be declared as “WINNER”| Player reaches 100th position | WINNER | WINNER | PASS |