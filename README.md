## What is this project? 

This contains an implementation of the force directed graph in unreal engine 5.

replicate the result of the popular library https://github.com/vasturiano/3d-force-graph.

![image](https://github.com/user-attachments/assets/4e648745-8ee3-4fc7-9008-fd1d53785711)


## To do list

- [] The rendering part is very laggy when the number of nodes reach 100. 
  - Need to time the exact time you should buy each function in order to find the bottleneck. 
- [] Adding functions such as import graph or export graph in a Json format. 

## A shot introduction to unreal engine 5

1. Characters. Pawns, and Actors: What's the Difference?

They are all CPP classes, which have a very detailed implementation by the epic games in the source code. 

When working with Unreal Engine, you'll often encounter the terms Character, Pawn, and Actor. These classes are fundamental building blocks for creating interactive elements within your game world. Here's a brief overview of each class and how they differ: 

In Unreal Engine, choosing between Characters, Pawns, and Actors is an important decision that depends on the needs of your game or project. Each has its own unique use case and capabilities:

Characters: Use the Character class when you need an entity that can walk, jump, or have built-in complex movement capabilities. It's useful for player-controlled avatars or NPCs that require dynamic interaction with the game world.

Pawns: Pawns are ideal when you need a controllable entity but do not require the full suite of movement capabilities provided by the Character class. Pawns offer a more lightweight and flexible option for entities that need user input but have custom or unconventional forms of movement.

Actors: Actors are the most general class and should be used for non-controlled objects in your game world. This could range from dynamic objects like moving platforms, to static scenery elements such as trees and buildings. Actors are highly versatile and form the base object for most elements within the game world.

Choosing the right class depends on the functionality you need and how you plan to interact with the object in your game.

2. Where to put the source code? 

The source code should be put in the source folder of the project. In a lot of complicated projects, they want to separate the header files and the source files Into two different directories in the source folder. 

But in this project, there is no such separations. All the header files and CPP are put in the same folder. 

3. How does the force directed graph work?

Basically, it is a cpp class  and it inherits from the Pawns class.  

Source/ue544_blankkkkkkkkkk/KnowledgeGraph.cpp

Source/ue544_blankkkkkkkkkk/KnowledgeGraph.h

Usually every actor and all its child's class have a constructor and a destructor, begin play, and tick function.

In the beginplay function, we will initialize everything that we need.

In the tick function, we will update the position of the nodes and the links.

So how to put this in the map that we want to play? We can drag the KnowledgeGraph From the content browser to the map in the middle. And then you see the actor is in the map, because you can look at the right hand side. There is a level editor. And you can see the actor in the world outliner.

![image](https://github.com/user-attachments/assets/2042450f-0d52-4c6f-97e2-a8dc2973de14)


4. How to open different maps? 

You can open different maps by clicking the file in the content browser.

Content/CreatePlanetsSSS/NewMapPPPPPPP.umap   is the map that looks like in the universe. 



## Reference

### https://github.com/thomaswall/ue4-force-graph

I regard this as an improved version of https://github.com/thomaswall/ue4-force-graph

It is improved in the following ways
1. It is Using the latest version of the unreal engine 5 instead of the unreal engine 4.24
2. It is using a different implementation of the charge force
3. It corrects some of the Mistakes such as calculating the bias of the link.

It is worse in the following ways
1. The implementation of the charge force, which is the many body force, use a custom implementation of the OCtree, Which seems to be slower than the library version of the unreal engine.
