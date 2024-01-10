/**
 * @file admin_information.h
 * @brief Admin_information class definition.
 *
 * This file contains the definition of the Admin_information class,
 * which is used to store and manage administrative information.
 * Inherits from the People class.
 */

#include "admin_information.h"

/**
 * @brief Default constructor for the Admin_information class.
 * Initializes the Admin_information object with default values.
 * Inherits from People and initializes the name and age to default values, and password to an empty string.
 */
Admin_information::Admin_information(): People(0,"",0), password("")
{
    // No additional initialization needed as member initializer list is used.
}

/**
 * @brief Parameterized constructor for the Admin_information class.
 * Initializes the Admin_information object with specified values.
 * @param x An integer representing the age.
 * @param y A QString representing the name.
 * @param z A float representing some additional parameter.
 * @param s A QString representing the password.
 */
Admin_information::Admin_information(int x, QString y, float z, QString s)
    : People(x, y, z), password(s)
{
    // No additional initialization needed as member initializer list is used.
}

/**
 * @brief Setter method for the admin password.
 * @param s A QString representing the password to be set.
 */
void Admin_information::setPassword(QString s)
{
    password = s; // Assign the provided string 's' to the password member variable.
}

/**
 * @brief Getter method for the admin password.
 * @return A QString representing the password of the admin.
 */
QString Admin_information::getPassword()
{
    return password; // Return the current value of the password member variable.
}
