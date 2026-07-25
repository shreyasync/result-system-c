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

AUTHOR NAME/ACADEMIC DETAILS

Name: Shreya Pandey
Course / Semester: B.Tech CSE, 3rd Semester
Roll Number: 2508100100123
Institution: GN Group of Institute



