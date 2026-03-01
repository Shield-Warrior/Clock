#include <iostream>
#include <string>
using namespace std;

int main() {
    string hour; //Creates a string variable for hour
    int hourconvert; //Creates an integer variable for hourconvert
    string minute; //Creates a string variable for minute
    int minuteconvert; //Creates an integer variable for minuteconvert
    string second; //Creates a string variable for second
    int secondconvert; //Creates an integer variable for secondconvert
    int dayNightChoice; //Creates an integer variable for dayNightChoice
    string militaryHour; //Creates a string variable for militaryHour
    int militaryHourConvert; //Creates an integer variable for militaryHourConvert
    int selection; //Creates an integer variable for selection

    cout << "Press 0 to start." << endl; //Tells the user to press 0 to start the program
    cin >> militaryHour; //The 0 will be stored in the militaryHour variable because it is needed for the converstions to not crash

    cout << "Please enter 1 if it is AM or 2 if it is PM." << endl; //Askes the user to enter 1 for AM or 2 for PM
    cin >> dayNightChoice; //Stores the user input in dayNightChoice

    cout << "Please enter the current hour." << endl; //Askes the user to enter the hour
    cin >> hour; //The user input will be stored in the hour variable

    hourconvert = stoi(hour); //With the help of stoi, the hour becomes converted to an integer named hourconversion

    if (hourconvert > 12) { //if the hourconvert is greater than 12
        cout << "Invalid choice. Please restart the program." << endl; //it will print an invalid choice message
        return EXIT_FAILURE; //will stop the program
    }
    else if (hourconvert < 13) { //if the hourconvert is less than 13
        hour = to_string(hourconvert); //with the help of to_string, the hourconvert goes back into a string called hour
        cout << "Please enter the current minute." << endl; //will ask the user to enter teh current minute
        cin >> minute; //will store the user input in a variable called minute
    }

    minuteconvert = stoi(minute); //by using stoi, the minute variable will become converted to an integer variable named minuteconvert

    if (minuteconvert > 59) { //for the case of minuteconvert being greather than 59
        cout << "Invalid choice. Please restart the program." << endl; //this is what it will print
        return EXIT_FAILURE; //program ends
    }
    else if (minuteconvert < 60) { //if minuteconvert is less than 60
        minute = to_string(minuteconvert); //it will convert minuteconvert back into a string
        cout << "Please enter the current second." << endl; //askes the user for the current second
        cin >> second; //stores the user input of second into a variable called second
    }

    secondconvert = stoi(second); //second is converted to an integer called secondconvert

    if (secondconvert > 59) { //if secondconvert is greater than 59
        cout << "Invalid choice. Please restart the program." << endl; //it will print invalid choice and ask the user to restart the program
        return EXIT_FAILURE; //the program will end
    }
    else if (secondconvert < 60) { //if secondconvert is less than 60
        second = to_string(secondconvert); //secondconvert will be converted back into second
    }

    if (dayNightChoice == 2) { //this is all for PM
        hourconvert = stoi(hour); //takes hour converts it to hourconvert which is an int
        militaryHourConvert = stoi(militaryHour); //takes the variable militaryhour and turns it into militaryhour convert
        militaryHourConvert = 12 + hourconvert; //hourconvert + 12 equals militaryHourConvert
        hour = to_string(hourconvert); //hourconvert converts back into hour which is a string variable
        militaryHour = to_string(militaryHourConvert); //militaryHourConvert converts back into militaryHour which is a string variable
    }
    else if (dayNightChoice == 1) { //all for the AM choice
        hourconvert = stoi(hour); //hour converts into hourconvert which is an integer
        militaryHourConvert = stoi(militaryHour); //militaryhour converts into militaryhourconvert which is an integer
        militaryHourConvert = hourconvert; //militaryHourConvert equals hourconvert
        if (hourconvert == 12) { //if the hourconvert is 12
            militaryHourConvert = 0; //militaryhourConvert equals 0
        }
        hour = to_string(hourconvert); //hourconvert converts back into a string which is hour
        militaryHour = to_string(militaryHourConvert); //militaryhourconvert converts back into a string which is militaryhour
    }

    if (hour.size() < 2) { //if the size of the hour is less than 2 characters
        hour = "0" + hour; //the hour will be equal to "0" + hour
    }
    else if (hour.size() < 3) { //if the size of the hour is less than 3 characters
        hour = hour; //hour will remain hour
    }

    if (militaryHour.size() < 2) { //if the size of militaryhour is less than 2 characters
        militaryHour = "0" + militaryHour; //militaryHour equals "0" + militaryHour
    }
    else if (militaryHour.size() < 3) { //else if the size of the military hour is less than 3 characters
        militaryHour = militaryHour; //militaryhour will remain militaryhour
    }

    if (minute.size() < 2) { //if the size of the minute is less than 1 character
        minute = "0" + minute; //minute will equal "0" + minute
    }
    else if (minute.size() < 3) { //else if the size of the minute is less than 3 characters
        minute = minute; //minute will remain minute
    }

    if (second.size() < 2) { //if the size of second is less than 2 characters
        second = "0" + second; //second will equal a 0 string + second
    }
    else if (second.size() < 3) { //in the case that the characters of size is less than 3
        second = second; //second remains second
    }

    if (dayNightChoice == 2) { //if pm
        cout << "12-Hour Clock - " << hour << ":" << minute << ":" << second << " " << "PM" << endl; //output for 12 hour clock
        cout << "24-Hour Clock - " << militaryHour << ":" << minute << ":" << second << endl; //output for 24 hour clock
    }
    else if (dayNightChoice == 1) {
        cout << "12-Hour Clock - " << hour << ":" << minute << ":" << second << " " << "AM" << endl; //output for 12 hour clock am
        cout << "24-Hour Clock - " << militaryHour << ":" << minute << ":" << second << endl; //this is what will print for the all around clock
    }

    cout << "To add an hour, please press 1. To add a minute, please press 2. To add a second, please press 3. To exit the program, please press 4." << endl; //directions for the menu
    cin >> selection; //the selection for the menu will be stored in a variable titled selection

    while (selection != 4) { //while the selection is not equal to 4

        if (selection == 1) { //if selection is 1 (hour)
            hourconvert = stoi(hour); //hour is converted to hourconvertor
            militaryHourConvert = stoi(militaryHour); //militaryhour is converted to militaryhourconvert
            hourconvert += 1; //hourconvert goes up by 1
            militaryHourConvert += 1; //militaryhourconvert goes up by 1
            if (hourconvert > 12) { //if the hourconvert exceeds 12
                hourconvert -= 12; //12 will be subtracted
            }

            if (militaryHourConvert > 24) { //if the militaryhourconvert exceeds 24
                militaryHourConvert -= 24; //militaryhourconvert subtracts by 24
            }

            hour = to_string(hourconvert); //hourconvert converts to hour
            militaryHour = to_string(militaryHourConvert); //militaryhourconvert converts back into militaryhour

            if (hour.size() < 2) { //if the total characters of hour is less than 2
                hour = "0" + hour; //hour equals the string "0" + hour string
            }
            else if (hour.size() < 3) { //if the total characters of hour is less than 3
                hour = hour; //hour remains the same
            }

            if (militaryHour.size() < 2) { //if the militaryhour character size is less than 2
                militaryHour = "0" + militaryHour; //militaryhour equals the string "0" + militaryhour
            }
            else if (militaryHour.size() < 3) { //else if the characters of militaryhour is less than 3
                militaryHour = militaryHour; //miliyartyhour remains the same
            }

            if (dayNightChoice == 1) { //if AM
                cout << "12-Hour Clock - " << hour << ":" << minute << ":" << second << " " << "AM" << endl; //print 12 hour am
                cout << "24-Hour Clock - " << militaryHour << ":" << minute << ":" << second << " " << endl; //print 24 hour
                cout << "To add an hour, please press 1. To add a minute, please press 2. To add a second, please press 3. To exit the program, please press 4." << endl; //print menu
            }
            else if (dayNightChoice == 2) { //if PM
                cout << "12-Hour Clock - " << hour << ":" << minute << ":" << second << " " << "PM" << endl; //print 12 hour pm
                cout << "24-Hour Clock - " << militaryHour << ":" << minute << ":" << second << " " << endl; //print 24 hour
                cout << "To add an hour, please press 1. To add a minute, please press 2. To add a second, please press 3. To exit the program, please press 4." << endl; //print menu
            }
            cin >> selection; //user input put in here
        }
        else if (selection == 2) { //if selection is 2 (minute)
            minuteconvert = stoi(minute); //minute converts to minuteconvert
            hourconvert = stoi(hour); //hour converts
            militaryHourConvert = stoi(militaryHour); //militaryhour converts
            minuteconvert += 01; //minuteconvert adds to 01
            if (minuteconvert == 60) { //if minuteconvert equals to 60
                minuteconvert -= 60; //take away
                hourconvert += 01; //add 1 hour
                militaryHourConvert += 01; //ad 1 hour
            }
            minute = to_string(minuteconvert); //minuteconvert converts to minute
            hour = to_string(hourconvert); //hourconvert converts to hour
            militaryHour = to_string(militaryHourConvert); //militaryhourconvert converts to militaryhour

            if (minute.size() < 2) { //if the character size of minute is less than 2
                minute = "0" + minute; //minute is equal to the string 0 plus minute

            } else if (minute.size() < 3) { //if the minute chaarcter size is less than 3
                minute = minute; //nothing happens
            }

            if (hour.size() < 2) { //if the hour character size is less than 2
                hour = "0" + hour; //hour equals the strong 0 + hour
            }
            else if (hour.size() < 3) { //else if the hour character size is less than 3
                hour = hour; //nothing happens
            }

            if (militaryHour.size() < 2) { //if the militaryhour size is less than 2
                militaryHour = "0" + militaryHour; //militaryhour equals the string 0 + the militaryhour string
            }
            else if (militaryHour.size() < 3) { //if the militaryhoursize is less than 3 characters
                militaryHour = militaryHour; //nothing happens
            }

            if (dayNightChoice == 1) { //if am
                cout << "12-Hour Clock - " << hour << ":" << minute << ":" << second << " " << "AM" << endl; //12 hour AM clock
                cout << "24-Hour Clock - " << militaryHour << ":" << minute << ":" << second << " " << endl; //24 hour clock
                cout << "To add an hour, please press 1. To add a minute, please press 2. To add a second, please press 3. To exit the program, please press 4." << endl; //menu
            }
            else if (dayNightChoice == 2) {
                cout << "12-Hour Clock - " << hour << ":" << minute << ":" << second << " " << "PM" << endl; //12 hour pm clock
                cout << "24-Hour Clock - " << militaryHour << ":" << minute << ":" << second << " " << endl; //24 hour clock
                cout << "To add an hour, please press 1. To add a minute, please press 2. To add a second, please press 3. To exit the program, please press 4." << endl; //menu
            }
            cin >> selection; //menu selection is stored in here
        }
        else if (selection == 3) { //else if selection equals 3
            secondconvert = stoi(second); //second converts
            minuteconvert = stoi(minute); //minute converts
            hourconvert = stoi(hour); //hour converts
            militaryHourConvert = stoi(militaryHour); //militaryhour converts
            secondconvert += 01; //secondconverts adds by 01
            if (secondconvert == 60) { //if secondconvert equals 60
                secondconvert -= 60; //secondconvert minuses by 60
                minuteconvert = 00; //minuteconvert equals 00
                hourconvert += 01; //hourconverts adds by 01
                militaryHourConvert += 01; //militaryhourconvert adds by 01
            }
            second = to_string(secondconvert); //secondconvert converts back to second
            minute = to_string(minuteconvert); //minuteconvert converts back to minute
            hour = to_string(hourconvert); //hourconvert converts back to hour
            militaryHour = to_string(militaryHourConvert); //militaryHourConvert converts back to militaryHour

            if (second.size() < 2) { //if the characters of size is less than 2
                second = "0" + second; //second equals the string "0" plus the string second
            }
            else if (second.size() < 3) { //else if the characters of second is less than 3 for the size
                second = second; //remains the same
            }

            if (minute.size() < 2) { //if the characters of minute is less than 2 for the size
                minute = "0" + minute; //minute equals the string "0" plus the string minute
            }

            if (hour.size() < 2) { //if the characters of hour is less than 2 for the size
                hour = "0" + hour; //hour equals the string "0" plus the string hour
            }
            else if (hour.size() < 3) { //else if the characters of hour is less than 3
                hour = hour; //remains the same
            }

            if (militaryHour.size() < 2) { //if militaryHour is less than 2 characters for the size
                militaryHour = "0" + militaryHour; //militaryHour equals teh string "0" plus militaryHour
            }
            else if (militaryHour.size() < 3) { //else if the militaryhour size characters is less than 3
                militaryHour = militaryHour; //militaryHour remains the same
            }

            if (dayNightChoice == 1) { //if AM
                cout << "12-Hour Clock - " << hour << ":" << minute << ":" << second << " " << "AM" << endl; //prints 12 hour am clock
                cout << "24-Hour Clock - " << militaryHour << ":" << minute << ":" << second << " " << endl; //prints 24 hour time
                cout << "To add an hour, please press 1. To add a minute, please press 2. To add a second, please press 3. To exit the program, please press 4." << endl; //prints menu
            }
            else if (dayNightChoice == 2) {
                cout << "12-Hour Clock - " << hour << ":" << minute << ":" << second << " " << "PM" << endl; //prints 12 hour pm
                cout << "24-Hour Clock - " << militaryHour << ":" << minute << ":" << second << " " << endl; //prints 24 hour clock
                cout << "To add an hour, please press 1. To add a minute, please press 2. To add a second, please press 3. To exit the program, please press 4." << endl; //prints menu
            }
            cin >> selection; //selection is stored in here
        }
        else if (selection == 4) { //if the selection is 4
            cout << "Have a nice day!" << endl; //it will print have a nice day
        }
    }
}