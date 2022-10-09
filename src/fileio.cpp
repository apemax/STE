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

void ViewFile(string FileName)
{
	string File_contents;
	
  ifstream view_file(FileName, ios::in);

  if (view_file.is_open())
  {
    while (getline(view_file, File_contents, '\n'))

    cout << File_contents << endl;

    view_file.close();
  }
  else
  {
    cout << "Can't open file." << endl;
  }
}

void EditFile(string FileName)
{
  string File_input;
  bool running = true;

  ofstream Output_file(FileName, ios::out | ios::app);

  cout << "Type what you want to go in the text file and hit enter. To finish editing this file type in EOF.: " << endl;

  while (running)
  {

    getline(cin, File_input);

    if (File_input == "EOF")
    {
      running = false;
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
}