// C program for illustration of regcomp()
#include <regex.h>
#include <stdio.h>
 
// Driver Code

int main()
{
 

    // Variable to create regex

    regex_t regex;
 

    // Variable to store the return

    // value after creation of regex

    int value;
 

    // Function call to create regex

    value = regcomp(&regex, "[:word:]", 0);
 

    // If compilation is successfull

    if (value == 0) {

        printf("RegEx compiled successfully.");

    }
 

    // Else for Compilation error

    else {

        printf("Compilation error.");

    }

    return 0;

	}