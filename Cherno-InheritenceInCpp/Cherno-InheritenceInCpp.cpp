#include <iostream>

// What is Inheritence in cpp?

// inheritance allows us to have a heirachy of classes wich relate to each other.

// In other words - 

// Inheritance allows us to have a base class wich contains common functionality and then it
// allows us to branch off from that class and create sub-classes from that initial parent 
// class.

// Why use Inheritance?

// The primary reason why this is so usefull is because it helps us avoid code duplication.
// Code duplication refers to whether we have to have the exact same code multiple times 
// doing slightly different things and at other times just exactly the same thing.

// Instead of us repeating ourselves over and over again, we can put all our comon functionality
// between classes into a parent class. And then simply make sub-classes from that base class.
// which either change the functionality in subtle ways, or introduce entirely new functionality.
 
// The idea being that inheritance gives you a way to put all your common code between a number
// of classes into a base class so that we don't have to keep repeating ourselves. 


// How do we use inheritance in our source code? 


class Entity
{
public:

	float X, Y;

	void Move(float xa, float ya)
	{
		X += xa;
		Y += ya;
	}

};

class Player : public Entity // This is now a sub-class of Entity.
	// The class player now has both Player and Entity as it's type.
	// Player now contains everything Entity that is not designated as private.
    
	
    
{
public:

	const char* Name;

	// This in effect creates duplicates of X,Y and Move. They can be remowed now i you dont need duplicates.
	/*
	float X, Y;

	void Move(float xa, float ya)
	{
		X += xa;
		Y += ya;
	}
	*/
	void printName()
	{
		std::cout << Name << std::endl;
	}
};



int main()
{

	Player player;
	player.Move(5, 5); // I can now call anything from Entity. Player has inherited everything in class Entity
	player.X = 2;
	

	std::cin.get();
}

// Polymorphism 

// The idea of having multiple types for a single type.

// The fact that you can use Player anywhere you want to use Entity.

// anywhere a parameter requires Entity you can put in Player. 