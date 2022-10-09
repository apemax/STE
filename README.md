# Simple Text Editor

STE can open, edit and create text files.

## Usage

To view, edit or create files from the command line use the command line arguments "-o" or "-e".

ste -o filename // Outputs the contents of the file.

ste -e filename // Edit file, If no file with that name exists it will create an empty file.

To display the help screen you can use the "-h" option:

STE -h

## Building

### Linux

To compile, clone the STE repo:

~~~
git clone https://github.com/apemax/STE.git
~~~

Then cd to the STE directory and run make:

~~~
cd STE
make
~~~
