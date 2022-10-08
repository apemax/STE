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
// Copyright (C) 2011 - 2022 Peter Wright
// author: Peter (apemax) Wright
// Simple Text Editor (STE)

#include "global.h"
using namespace std;

// Function for the interactive method.
void IMethod(string File_nameF)
{
  string File_input;
  char ans1;
  int Opt1;

  do
  {
    cout << "If you want to open a file to view it type 1.\n";
    cout << "If you want to open a file to edit or create a new empty file to edit type 2.\n";
    cout << "If you want to exit type exit." << endl;

    cin >> Opt1;

    switch (Opt1)
    {
      case 1:
      {
        cout << "Type in the name of the file you want to view:" << endl;

        cin >> File_nameF;

        ViewFile(File_nameF);

        break;
      }

      case 2:
      {
        bool running1 = true;

        cout << "type in the name of the file you want to open to edit:" << endl;

        cin >> File_nameF;

        cin.ignore();

        ofstream Output_file(File_nameF, ios::out | ios::app);

        cout << "Type what you want to go in the text file and hit enter. To finish editing this file type in EOF.: " << endl;

        while (running1)
        {

          getline(cin, File_input);

          if (File_input == "EOF")
          {
            running1 = false;
          }

          else
          {

            if (Output_file.is_open())
            {
              Output_file << File_input << endl;
            }

            else
            {
              cout << "Can't open file." << endl;
            }
          }
        }

        Output_file.close();

        break;
      }

      default:
      {
        cout << "Exiting..." << endl;
      }
    }

    cout << "Do you want to open another file, create another file or exit?\n";
    cout << "Type Y to continue or N to exit." << endl;
    cin >> ans1;
  }
  while (ans1 == 'y' || ans1 == 'Y');

}
