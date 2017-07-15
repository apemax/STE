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
// version: 0.2.1
// Simple Text Editor (STE)

#include <iostream>
#include <fstream>
#include "global.h"
using namespace std;

int main ( int argc, char *argv[] )
{
    cout << "Simple Text Editor (STE) Copyright (C) 2011 - 2015 Peter Wright" << endl;
    cout << "This program comes with ABSOLUTELY NO WARRANTY; for details see the file named COPYING in the program folder." << endl;
    cout << "This is free software, and you are welcome to redistribute it" << endl;
    cout << "under certain conditions; for details see the file named COPYING in the program folder." << endl;
    cout << endl;

    cout << "Welcome to the Simple Text Editor V0.1.5. (STE)" << endl;
    cout << endl;

    if (argc <= 1)
    {
      cout << "Using interactive method..." << endl;
      cout << endl;

      IMethod();
    }
    else
    {
      cout << "Using Command line argument method..." << endl;
      cout << endl;

      CLoption = argv[1];

      if (CLoption == "-h")
      {
        cout << "Usage: STE [option] file" << endl;
        cout << endl;
        cout << "Options:" << endl;
        cout << "-o   Outputs the contents of the file." << endl;
        cout << "-e   Opens the file so you can edit it." << endl;
        cout << "-c   Creates a new file with the filename you type in and opens it to edit it." << endl;
        cout << endl;
        cout << "Example:" << endl;
        cout << "STE -o textfile" << endl;

        return 0;
      }

      File_name = argv[2];


      AMethod();
    }


}
