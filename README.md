EXAM RESULT SYSTEM:

A C program that manages student exam records — add, search, sort, and generate reports, with data.

PROBLEM STATEMENT

Manually maintaining student marks, calculating grades, and finding or ranking students is slow and error-prone when done on paper or in a spreadsheet by hand. This project automates that process with a simple command-line tool, so records can be entered once, calculated automatically, and reused across sessions.

DOMAIN
Student Management System / Records Management

FEATURES IMPLEMENTED

ADD STUDENT — enter roll number, name, and marks for 5 subjects; total, percentage, and grade are calculated automatically. Duplicate roll numbers are rejected.
SEARCH STUDENT — look up a student by roll number and edit their name/marks; values are recalculated.
DISPLAY RECORDS — prints a formatted table of every student.
REPORTS — total student count, sum of all marks, average percentage, and a configurable Top-N leaderboard.


DATA STRUCTURES AND ALGORITHMS USED

Calculating results _ Linear _ Straightforward sum/average per student _
Sorting (menu option) _ Bubble sort with a field/order comparator _ Easy to adapt to sort by any field, ascending or descending 
Ranking for reports _ Bubble sort by total marks (descending) _ Produces a Top-N leaderboard 
Lookup _ Linear search by roll number 

SETUP AND BUILD INSTRUCTIONS

REQUIREMENTS a C compiler such as GCC.
No external libraries are required — only the standard C library.

SCREENSHOTS

<img width="1918" height="1137" alt="Screenshot 2026-07-25 170305" src="https://github.com/user-attachments/assets/d32158b0-bf5e-40b6-b91b-542ab16fdbc7" />
<img width="1918" height="1140" alt="Screenshot 2026-07-25 170326" src="https://github.com/user-attachments/assets/b12e8971-7379-427c-abe1-ee4207cecf8c" />
<img width="1912" height="1140" alt="Screenshot 2026-07-25 170348" src="https://github.com/user-attachments/assets/4c8ec281-94cc-4f57-9a5c-f606de910489" />
<img width="927" height="886" alt="Screenshot 2026-07-25 200149" src="https://github.com/user-attachments/assets/42e68d39-fc85-4a37-8ffd-b4ae78ccf563" />

AUTHOR NAME/ACADEMIC DETAILS

Name: Shreya Pandey
Course / Semester: B.Tech CSE, 3rd Semester
Roll Number: 2508100100123
Institution: GN Group of Institute

INSTALLATION GUIDE

What You Need Before Starting
1. A Computer
This can be a Windows PC, a Mac, or a Linux computer. The program works on all of them.

2. A C Compiler
You need a program that can turn my C code into a working application. Don't worry, I'll show you how to get one.

3. Basic Terminal Knowledge
You should know how to open the command prompt or terminal on your computer. I'll explain this too.

4. About 5 Minutes of Your Time
The whole setup process is quick. It shouldn't take more than a few minutes.

Option 1: Windows Installation
Windows users have a few different ways to compile C programs. I'll show you the easiest ones.

Method A: Using MinGW (Recommended for Beginners)
MinGW is a free C compiler that works well on Windows. Here's how to set it up:

Step 1: Download MinGW
Open your web browser

Go to: https://sourceforge.net/projects/mingw/

Click on the green "Download" button

Wait for the download to finish (it's about 100 MB)

Step 2: Install MinGW
Double-click the downloaded file (mingw-get-setup.exe)

Click "Install" when the setup window opens

Keep clicking "Next" and accept the default options

Wait for the installation to complete

Click "Finish" when done

Step 3: Install gcc (the compiler)
After installation, you'll see a window called "MinGW Installation Manager"

In the left panel, click on "Basic Setup"

In the right panel, look for "mingw32-gcc-g++"

Right-click on it and select "Mark for Installation"

Also look for "mingw32-gdb" and mark it too (this is for debugging)

Click on "Installation" in the top menu

Click "Apply Changes"

Click "Apply" in the pop-up window

Wait for it to download and install

Step 4: Add MinGW to Your System Path
This step is important. It tells Windows where to find the compiler.

Press the Windows key and type "Environment Variables"

Click on "Edit the system environment variables"

Click the "Environment Variables" button

In the bottom section (System Variables), find "Path"

Click on it and press "Edit"

Click "New"

Type: C:\MinGW\bin

Click OK on all the windows

Step 5: Test the Installation
Press Windows key, type "cmd", and press Enter

In the black window that opens, type: gcc --version

Press Enter

You should see some text about GCC version. If you see an error, something went wrong.

Step 6: Download My Code
Go to my GitHub repository: https://github.com/yourusername/student-result-system

Click the green "Code" button

Click "Download ZIP"

Save the file to your computer

Extract the ZIP file (right-click and select "Extract All")

Step 7: Compile the Program
Open Command Prompt again

Navigate to where you extracted the files. For example:

text
cd C:\Users\YourName\Downloads\student-result-system-main
(Replace "YourName" with your actual username)

Now compile the program:

text
gcc student_result.c -o student_result.exe
If you see no errors, the compilation worked!

Step 8: Run the Program
In the same command prompt, type:

text
student_result.exe
The program will start working!

Method B: Using Code::Blocks (Easier but Slower)
If you want a point-and-click solution, try Code::Blocks. It's an IDE (Integrated Development Environment) that includes a compiler.

Step 1: Download Code::Blocks
Go to: http://www.codeblocks.org/downloads/26

Look for "codeblocks-20.03mingw-setup.exe" and download it

This version includes the compiler, so you don't need to install MinGW separately

Step 2: Install Code::Blocks
Double-click the downloaded file

Click "Next" through the installation

Accept the license agreement

Keep the default installation location

Click "Install"

Wait for it to finish

Click "Finish"

Step 3: Open and Run My Code
Open Code::Blocks from your Start menu

Click "File" → "Open"

Navigate to where you downloaded my code

Select "student_result.c"

Click "Open"

Click the green "Build and Run" button (it looks like a play button with a gear)

The program will compile and run automatically


