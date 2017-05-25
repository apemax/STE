/*
    This file is part of STE.

    STE is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    STE is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with STE.  If not, see <http://www.gnu.org/licenses/>.
*/
// Copyright (C) 2011 - 2017 Peter Wright
// author: Peter (apemax) Wright
// version: 0.2.0
// Simple Text Editor (STE)

#include <iostream>
#include <fstream>
#include "global.h"
using namespace std;

// Function for the interactive method.
void IMethod()
{
    string File_input;
    //string str;
    string File_contents;
    //char File_name[20];
    char ans1;
    int Opt1;

    do
    {
        cout << "If you want to open a file to view it type 1.\n";
        cout << "If you want to open a file to edit it type 2.\n";
        cout << "If you want to create a new file type 3.\n";
        cout << "If you want to exit type exit." << endl;

        cin >> Opt1;

        switch (Opt1)
        {
            case 1:
            {
                cout << "Type in the name of the file you want to view:" << endl;

                cin >> File_name; // Gets the file name.

                ifstream view_file(File_name, ios::in); // Opens the file stream.

                cout << "Trying to open text file..." << endl;

                if (view_file.is_open()) //Checks to see if it can open the file.
                {
                    cout << "Done." << endl;

                    while (getline(view_file, File_contents, '\n')) //Copies contents of the text file to the string File_contents.

                    cout << File_contents << endl;

                    cout << "Closing file..." << endl;

                    view_file.close(); //Closes the file stream.
                }
                else cout << "Can't open file." << endl;

                cout << "done." << endl;

                break;
            }

            case 2:
            {
                bool running1 = true;

                cout << "type in the name of the file you want to open to edit:" << endl;

                cin >> File_name;

                cin.ignore();

                cout << "Type what you want to go in the text file and hit enter. To finish editing this file type in EOF.: " << endl;

                while (running1)
                {

                  getline(cin, File_input);

                  if (File_input == "EOF")
                  {
                      running1 = "false";

                    }
                    else
                    {

                    }
                    cout << "Writing to file..." << endl;

                    ofstream Output_file(File_name, ios::out | ios::app);

                    if (Output_file.is_open()) //Checks to see if it can open the file.
                    {
                      Output_file << File_input << endl;

                      Output_file.close(); //Closes the file stream.
                    }
                    else cout << "Can't open file." << endl;
                }
                cout << "Done." << endl;

                break;
            }

            case 3:
            {
                bool running2 = true;

                cout << "Type in the name of the file you want to create:" << endl;

                cin >> File_name;

                cin.ignore();

                cout << "Type what you want to go in the text file and hit enter. To finish editing this file type in EOF.: " << endl;

                while (running2)
                {

                getline(cin, File_input);

                if (File_input == "EOF")
                {
                    running2 = "false";

                }
                else
                {

                }
                cout << "Writing to file..." << endl;

                ofstream Output_file(File_name, ios::out | ios::app);

                Output_file << File_input << endl;

                Output_file.close(); // closes the file stream.
                }

                cout << "Done." << endl;

                break;
            }

            default:

                cout << "Exiting..." << endl;

        }

        cout << "Do you want to open another file, create another file or exit?\n";
        cout << "Type Y to continue or N to exit." << endl;
        cin >> ans1;
    }
    while (ans1 == 'y' || ans1 == 'Y');

}
