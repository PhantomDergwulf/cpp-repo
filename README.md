# C++ repository
Hello and welcome to my first repository. This is a quickly made one that will host my entire portfolio of currently C++ projects, I may possibly in the future include other non-C++ repositories

## *Current projects*
### 99 bottles
100% complete 


### Prototype Text Adventure 2.0
working on enemy encounter system

my goal for this project is basic, to show knowledge and simple usage of both functions and a randomiser.

here is some pseudo-code that briefly explains the class system that will exist in the game.
```c++
class game ga;
  bool game_running
  bool player_alive
  bool player_in_battle
  bool enemy_alive
  int encounter_chance
  
   class ga.game_object go;
      int hp;
      int level;
      int xp;
      int hit_chance;
      int damage;
      int crit_chance;
      int crit_multi
      
      class go.character ch;
              int armor;
              int gold;
              int damage_dealt;
          class ch.player pl;
          
          class ch.enemy en;
  
      class go.weapon wp;

          class wp.blunt bu;

          class wp.bladed bl;

          class wp.piercing pl;
```
the game will start by rolling `hit_chance`, if this fails then it will break from a switch statement print 

`"you missed. and dealt 0 damage"`.

this is followed by crit chance, if crit chance fails it strikes for 

`damage * 1  = damage_dealt`

if not it'll run 

`damage * crit_multi = damage_dealt`

and print 

`"you hit a critical strike! you dealt" [damage_dealt] " x " [crit_multi] "("[damage_dealt * damage_multi]")"`


### C++ course
the full course i am taking can be found
here. https://www.youtube.com/watch?v=GQp1zzTwrIg 

1 - simple day computer

2 - simple salary computer

3 - N/A

4 - N/A
