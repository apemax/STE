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

    switch (Opt1)
    {
      case 1:
      {
        ViewFile(File_nameF);

        break;
      }

      case 2:
      {
        EditFile(File_nameF);

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
