#include "people.h"

// Default constructor for the People class, initializes name to an empty string.
People::People(): name("")
{
    // Empty body since the member initialization list is used for initialization.
}

// Parameterized constructor for the People class.
// Takes an integer x (unused), a QString y for the name, and a float z (unused).
People::People(int x, QString y, float z): name(y)
{
    // The name is initialized using the member initializer list.
    // The parameters x and z are not used.
}

// Setter method for the name property.
void People::setName(QString y)
{
    name = y; // Set the name to the provided value.
}

// Getter method for the name property.
QString People::getName()
{
    return name; // Return the current value of the name property.
}
