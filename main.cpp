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

int main ( int argc, char *argv[] )
{
    cout << "Simple Text Editor (STE) Copyright (C) 2011 - 2015 Peter Wright" << endl;
    cout << "This program comes with ABSOLUTELY NO WARRANTY; for details see the file named COPYING in the program folder." << endl;
    cout << "This is free software, and you are welcome to redistribute it" << endl;
    cout << "under certain conditions; for details see the file named COPYING in the program folder." << endl;
    cout << " " << endl;

    cout << "Welcome to the Simple Text Editor V0.1.5. (STE)" << endl;

    if (argc <= 1)
    {
      cout << "Using interactive method..." << endl;

      IMethod();
    }
    else
    {
      cout << "Using Command line argument method..." << endl;
      CLoption = argv[1];
      File_name = argv[2];


      AMethod();
    }


}
