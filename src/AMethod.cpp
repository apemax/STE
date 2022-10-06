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

// Function dealing with the command line arguments.
void AMethod(string CLoptionF, string File_nameF)
{
  string File_input;
  string File_contents;
  char ans1;
  int Opt1;

  do
  {

    if (CLoptionF == "-o")
    {
      Opt1 = 1;
    }
    else if (CLoptionF == "-e")
    {
      Opt1 = 2;
    }
    else if (CLoptionF == "-c")
    {
      Opt1 = 3;
    }

    switch (Opt1)
    {
      case 1:
      {
        ifstream view_file(File_nameF, ios::in);

        if (view_file.is_open())
        {
          while (getline(view_file, File_contents, '\n'))

          cout << File_contents << endl;

          view_file.close();
        }
        else cout << "Can't open file." << endl;

        break;
      }

      case 2:
      {
        bool running1 = true;

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

      case 3:
      {
        bool running2 = true;

        ofstream Output_file(File_nameF, ios::out | ios::app);

        cout << "Type what you want to go in the text file and hit enter. To finish editing this file type in EOF.: " << endl;

        while (running2)
        {

          getline(cin, File_input);

          if (File_input == "EOF")
          {
            running2 = false;

          }
          else
          {

          Output_file << File_input << endl;

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
