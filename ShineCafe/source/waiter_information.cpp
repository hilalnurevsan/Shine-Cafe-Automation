#include "waiter_information.h"

// Default constructor for the Waiter_information class, which inherits from People.
// Initializes the People class with default values and sets password to an empty string.
Waiter_information::Waiter_information(): People(0, "", 0), password("")
{
    // The People constructor is called with default values.
    // The password is set to an empty string.
}

// Parameterized constructor for the Waiter_information class.
// Initializes the People class with provided values and sets password to the provided string.
Waiter_information::Waiter_information(int x, QString y, float z, QString s)
    : People(x, y, z), password(s)
{
    // The People constructor is called with provided values for ID (x), name (y), and some float value (z).
    // The password is initialized with the provided string (s).
}

// Setter method for the password property.
void Waiter_information::setPassword(QString s)
{
    password = s; // Assign the provided string to the password member variable.
}

// Getter method for the password property.
QString Waiter_information::getPassword()
{
    return password; // Return the current value of the password member variable.
}
