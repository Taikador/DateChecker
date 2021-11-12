#include <iostream>

int date_logic(int y, int m, int d) {

    //Check Year
    if (y < 0)
        return 1;

    //Check Month
    if (m < 0 || m > 12)
        return 1;

    //If the Month has less than 30 days and more than 30 days were given in input, throw error!
    if (m == 2) {

        if (y % 4 == 0) {

            if (d > 29 || d < 0)
                return 1;
        }
        else {

            if (d > 28 || d < 0)
                return 1;
        }
    }
    //If the Month has more than 31/30 days check if the input was more than 30 or 31. If yes, throw error!
    else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {

        if (d > 31 || d < 0)
            return 1;
    }
    else {

        if (d > 30 || d < 0)
            return 1;
    }

    //If everything was correct, return 0 as "true"

    return 0;
}

int main() {

    //Setup Variables
    int y, m, d;


    //Welcome Message
    std::cout << "Dieses Programm kann ueberpruefen ob ein Datum existiert " << std::endl;

    //Input for Year
    std::cout << "Jahr: ";
    std::cin >> y;

    //Input for Month
    std::cout << "Monat: ";
    std::cin >> m;

    //Input for Day
    std::cout << "Tag ";
    std::cin >> d;

    //Check the input in other Class
    int check = date_logic(y, m, d);

    //Printout the result
    if (check == 0)
        std::cout << "Das eingegebene Datum: " << d << "/" << m << "/" << y << std::endl
        << "Ist gueltig!";
    else
        std::cout << "Das eingegebene Datum: " << d << "/" << m << "/" << y << std::endl
        << "Ist ungueltig!";
}