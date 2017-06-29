# Valkyrie Arena

## Background

Sound the trumpets! The annual Valkyrie Arena is about to begin! Every year
the best valkyries from across the world gather at the Colosseum to fight
tooth and nail. Win and they receive eternal glory! This year, you'll be in
charge of coordinating the battles such that they are fair and orderly. 

Each valkyrie has her own unique stats that must be randomly generated. They
fight in one-on-one matches until there are only 5 contestants remaining. The 
final results are ordered from greatest to least by the number of matches won.

## Assignment

Use the code provided in `valkyrie_arena.cc` to complete this assignment

1. Write the **initialize()** method to sign each valkyrie up and give them their
stats randomly (choose the scale appropriately). Use a pool of names provided
in `names.txt` (if over 20 players, reprompt the user).
2. Write the **brawl()** method to have each valkyrie fight one-on-one with each
other until there are only 5 remaining. Erase contestants from the vector as
they are defeated. A match is decided by a weighted score of each of the
valkyrie's stats (excluding the name). If there are an odd number of duelists,
one valkyrie will be chosen at random to pass forward to the next round
3. Write the **announce()** method which will print out the winners.

## Sample Run Outputs

```
$ g++ valkyrie_arena.cc -o valkyrie_arena

"How many players?"
10

1. Min Hoo   [lvl: 9001, atk: 99,  def: 42,   kills: 3]
2. Marcus    [lvl: 192,  atk: 299, def: 299,  kills: 2]
3. Lee       [lvl: 971,  atk: 123, def: 102,  kills: 2]
4. Suchita   [lvl: 123,  atk: 212, def: 92,   kills: 1]
5. Brynhildr [lvl: 299,  atk: 254, def: 1323, kills: 0]

```
