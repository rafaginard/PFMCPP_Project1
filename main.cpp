#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun: phone
//  action 1: Phone receives a call
phone.ring(); 
//  action 2: The phone locks the screen
phone.locksScreen();
//  action 3: New message or call
phone.vibrate();
//  2)
//  Noun: boy
//  action 1: Boy starts to run
boy.run();
//  action 2: The boy falls asleep
boy.sleep();
//  action 3: The boy sings
boy.sing();
//  3)
//  Noun: dog
//  action 1: The dog barks
dog.bark();
//  action 2: Dog jumps the fence
dog.jumpsFence();
//  action 3: The dog sits
dog.sit();
//  4)
//  Noun: water
//  action 1: Water reaches evaporation temperature
water.evaporates();
//  action 2: Water is in motion
water.flows();
//  action 3: The amount of water is very high
water.soak();
//  5)
//  Noun: game
//  action 1: The game begins
game.start();
//  action 2: The game ends
game.end();
//  action 3: The game is paused
game.pause();
//  6)
//  Noun: clock
//  action 1: The clock goes clockwise
clock.clockwise();
//  action 2: Clock advances counterclockwise
clock.counterClockwise();
//  action 3: The alarm is saved
clock.setAlarm();
//  7)
//  Noun: program
//  action 1: The program is executed
program.execute();
//  action 2: The program crashes
program.error();
//  action 3: The program is initialized
program.init();
//  8)
//  Noun: number
//  action 1: Add 1 to the number
number.addOne();
//  action 2: The number is divided in half
number.divideByTwo();
//  action 3: The number is squared
number.square();
//  9)
//  Noun: doctor
//  action 1: The doctor operates
doctor.opertates();
//  action 2: The doctor calls the nurse
doctor.callNurse();
//  action 3: The doctor prescribes a medication
doctor.prescribeMedication();
//  10)
//  Noun: knight
//  action 1: The knight attacks
knight.attack();
//  action 2: The knight jumps forward
knight.jump();
//  action 3: The knight does a flip
knight.flip();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
