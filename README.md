# Data-Structures-and-Algorithms-_COMP280
Project 1 – Environment Setup and First C++ Program
COMP 280: Data Structures and Algorithms Instructor: JiaJie Ye
Due: August 31st, 2021, 9:00pm
1 INSTRUCTIONS FOR SUBMISSION
All homework / projects, unless noted otherwise, shall be submitted via GradeScope, most
cases, you will have a correctness analysis in a few minutes after your submission.
Check user guide for more information, user guide is in BlackBoard (Start Here section), Course Entry Code is
P56RR3
2 ENVIRONMENTSETUP
In my personal perspective, environment set up sometimes is the most frustrating thing ever, more than not able to get my code to work, it is like a waste of life doing this work and at times I cannot tell its progress and thus not able to see hope.
Anyway, it is important for you to absolutely finish setting up your environment in class today, and when having trouble, getting help from TA and Instructor.
Environment Setup uses more time sometimes (downloading / installing etc.), I do recommend you try your best before class and will handle problems when you arrive.
3 DEVELOPING ENVIRONMENT OF CHOICE
We have a recommended environment for you to use, however you are not bound to use this environment. The recommended dev environment is set up to be very close to grading system, inconsistency isn’t likely (unless you write undefined behavior code ... see what I did there?), even if you had your own dev environment set up, I highly recommend you run the code at least once on the recommended environment before you submit.
 
  
4 RECOMMENDEDDEVENVIRONMENT 4.1 VPN
Everything must be done on VPN or school network, if this is not working, set it up.
https://hub.ncat.edu/administration/its/forms/vpn-install-and-use-instructions
4.2 REMOTE ACCESS
Each students will be given an username and password to log into the dev machine, dev machine.
Let’s use mine as example but you will get yours:
To connect to the remote server, you will need a “terminal”, basically a command line only tool, much like the programmers in TVs, movies, games, lol. The “terminal” is essentially just a keyboard, all the things happen on the remote server, so whatever computer you use makes almost no difference except the color scheme, interactive features.
There are also many different tools that is usable to act as this keyboard, you are free to choose anything you want but I have the following recommendations.
4.2.1 Your login
By default, your username is first letter of your first name (capitalize) + your last name (capitalize first letter) + “280”, and your password is your first name (capitalize) + first letter of your last name (capitalize) + “280”.
For me, my name is JiaJie, last name is Ye. Then my log in is “JYe280” and my default password is “JiaJieY280”.
4.2.2 Powershell (for windows 8+)
Windows + R -> input powershell -> enter
   
 To access your server, type in “ssh <name>@korriban.ncat.edu” and then input password when prompted. Replace <name> with your log in, for me, it looks like “ssh JYe280@korriban.ncat.edu”
4.2.3 MacOS Terminal (for MacOS)
Turn on “Terminal”, and type in “ssh <name>@korriban.ncat.edu” and then input password when prompted. Replace <name> with your log in, for me, it looks like “ssh JYe280@korriban.ncat.edu”
4.2.4 Putty (for any windows)
You need to install a software called putty, (https://www.chiark.greenend.org.uk/~sgtatham/putty/latest.html), select (64-bit x86, putty-64-bit- 0.76-installer.msi, “windows installer”). And install putty.
 
 Input “korriban.ncat.edu” in the “Host Name” section, and click “open”, input your username and password when prompted.
4.2.5 Other remote-control software
As we stated, use whichever one you like, however, if this is your first time, just do what I suggested, neither me nor TA would support other softwares.
4.2.6 Skins for these software
You might have noticed all these ones look ugly to a degree. Google it, there are many “skins” for all these software, giving you a custom look that you happy about. For example, for putty, https://github.com/AlexAkulov/putty-color-themes
4.3 COMPILE AND RUN SAMPLE CODE
4.3.1 Successful log in
While the remote-control software has a slightly different look, the gold portion is the word it says, in the example below, I am using VSCode here, powered by powershell
You should see a few lines of welcome message from your server, “Welcome to Ubuntu 18.04.5 LTS (GNU/Linux 4.15.0-153-generic x86_64)” and others, don’t proceed if you don’t see this.

 4.3.2 Find my files
Now that we are in the personal folder, run “ls -l” to list what is in there.
To go in sample, and list files:
    Go in sample.
Note that “cd” is how we change directory, you can also back out by doing
cd sample ls -l
 
  4.3.3 Run build command
Go back in sample folder, list files, make sure this is what you see.
cd ..
  Run
   4.3.4 Run the binary
cmake . cmake –build .
   ./sample
  
Note that when you debug your code, you should always run the build before rerun tests
4.4 CHANGE PASSWORD
It is important for you to keep your code secure, thus your password. To achieve such. Run
passwd
Turn off the remote-access and log in again. Don’t forget your password. While instructor and TA can reset your password, it will cost time and will be a bad experience especially at the end of deadlines.
4.5 VS CODE
4.5.1 Installation
Download vscode here: https://code.visualstudio.com/ 4.5.2 C++ Extension
Follow the instruction to install C++ extension
https://code.visualstudio.com/docs/languages/cpp
4.5.3 SSHFS Extension
Just like how you installed C++ extension, search for SSHFS extension (this is to help you modify code on the server with VS Code on your laptop). And then set up your folder like instructed here
https://marketplace.visualstudio.com/items?itemName=Kelvin.vscode-sshfs
Once you install SSHFS, you can link your folder on the server to your local dev environment.
    Visual Studio Code is a lightweight but powerful source code editor which runs on your desktop and is
 available for Windows, macOS and Linux. It comes with built-in support for JavaScript, TypeScript and
 Node.js and has a rich ecosystem of extensions for other languages (such as C++, C#, Java, Python, PHP,
Go) and runtimes (such as .NET and Unity). Begin your journey with VS Code with these introductory
  videos.
      Click
  Ctrl (command) + Shift + P
 
Search and click
Create a name:
  On this page:
 Put in the following information:

- Host: korriban.ncat.edu
- Username: your user name
- Password: your password
- Root: /student/280/<your user name>/, such as “/student/280/JYe280”.
Save.
Search and click
Click on the one we just created.
Then you will see a folder on the left:
Ctrl + Shift + P
      
5 GET FAMILIAR
5.1 COPY FILES
Try just copy files from VS Code to your desktop (this operation saves your files from Korriban to your computer), you can do reverse operation as well.
If you don’t like operating on VS Code, there is programs specifically designed to transfer files between your local machine and remote server. For example:
FileZilla: https://filezilla-project.org/download.php?platform=win64 5.2 CHANGE THE PRINT WORDING
Read files in src folders, understand what they do, and change the value of GetNumber. Recompile, rerun, be happy.
5.3 IMPORTANT, READ!
VERY IMPORTANTLY!
BACK UP YOUR HOMEWORK CONSTANTLY (COPY TO YOUR COMPUTER LOCALLY! FILES YOU CAN SEE FROM VSCODE IS NOT LOCAL, THAT IS JUST A “KEYBOARD”, FILES ARE ON KORRIBAN)
ASSIGNMENTS MUST BE SUBMITTED VIA GRADESCOPE. ASSIGNMENTS LEFT ON KORRIBAN WON’T BE GRADED!
6 PROJECT
Now comes to the real part, which would feel like most of our future projects. From end to end, you
gotta download the package, make changes, submit your homework for autogradings.
6.1 STARTING GUIDE
This part is to teach you how to start with a assignment, and won’t be there for future assignments.
    
1. 2.
3. 4.
5. 6. 7.
This is
Download the files from Blackboard, and copy them to Korriban
Files are already distributed to your folder, switch to “project_01” folder, by doing cd ~/project_01
Switch to remote-access, and cd to the folder
Run ls -l to make sure you are in the right folder [you should see a “src” folder, a “tests” folder, and a few other files.
Run no need to run this everytime, only when files are moved / added / removed.
Run to build [every time you do some code, you should run this command again] Run ./main
what you would see (there are a few tests I offered you and will let you know you pass or not)
   cmake .
 cmake –build .
However, fixing tests based purely on the test I offered you won’t be enough, there are other test cases that will be used only at submission time.
6.2 SUBMISSION
When you submit your code to gradescope, you should only submit 3 files, search.cpp, word_analysis.cpp & reverse_array.cpp
  6.3
6.3.1
1. 2.
IMPORTANT NOTES
CORRECTNESS
Files must be submitted via gradescope, file in Korriban is just for you to play around with, not for scoring purposes.
There is a limit on the files you may change (unfortunately, for autograding sake, you cannot freely add files), and any file changes outside that range will result into issues

6.3.2
1.
6.3.3
1. 2. 3. 4. 5.
6.3.4
1. 2.
3.
PROTECT YOUR WORK
Files on Korriban is for you to play around, copy them locally constantly to avoid accident loss of work, think about files on Korriban as unsaved word documents. While we try to keep the server up and not losing data, it is not always guaranteed.
ACADEMIC DISHONESTY
Any attempt to guess the input and print pre-stored answer will receive zero credit.
Submit assignment not each line typed by you will receive zero credit.
Giving out your homework for others to copy will get you zero.
Blindly following instructions from others without understanding the code get zero.
Even if autograder gives you point, academic dishonesty, if found, will override your final scores.
ENCOURAGED ACTION
Form study groups, discuss problems (without directly giving out answers).
Ask questions in Lab Course to anyone (people on your table, people not on your table, TA, Instructor)
Google a particular function (How to get the nth element from a string? How to remove one element from a vector? What does “undefined reference” error mean?) as opposed to (COMP280 project 1 answer)
LINEAR SEARCH (25 POINTS) Problem Statement:
In this problem, you will write linear search, go through all elements, find the one we are searching for, and return the index of the specified number, or -1 if the number is not in the input vector.
You may assume the arrays do not contain duplicates of the same number.
File Format:
In the file titled search.cpp, complete the LinearSearch() functions, which each take in an integer array and the number to search for. Return the index of the specified number, or -1 if the number is not found.
Example Input and Output:
For example, searching integer array [12, 5, 6, 84, 9, 10, 23, 42, 59, 73, 105] for 42 should return 7. Searching integer array [0, 50, 10] for 12 should return -1.
6.4
Tests:
6.5 REVERSE ARRAY (25 POINTS) Problem Statement:
./search_tests
   
In this problem, you will write a function to reverse an array of integers. For first project, we are practice language and environment, no performance requirement is in place (as long as your code does not run over minutes).
File Format:
In the file titled reverse_array.cpp, complete the ReverseArray() method, which takes in an integer vector and reverses the input array.
Example Input and Output:
Calling ReverseArray() with the input array [3, 4, 7, 6, 1] should result in the array becoming [1, 6, 7, 4, 3].
Tests:
6.6 WORD ANALYSIS (50 POINTS) Problem Statement:
./reverse_array_tests
   In this problem, you will implement a set of functions that analyze an array of common words in the English language. You will implement the following functions:
(a) Implement a function called MinimumWordLength(), which should return the length of the shortest word in the list, return 0 if input array is empty.
(b) Implement a function called MaximumWordLength(), which should return the length of the longest word in the list, return 0 if input array is empty.
(c) Implement a function called RangeOfWordLengths(), which should return the range of lengths in the word list, return 0 if input array is empty.
(d) Implement a function called WordLengthMean(), which should return the average word length in the word list. The method should return the average, rounding down (or taking the floor) to the next lowest integer, return 0 if input array is empty.
You may assume that the length of a word is at most 100 and at least 1.
File Format:
In the file titled word_analysis.cpp, complete the four functions listed above. Each function takes in a vector of strings and returns an integer.
Example Input and Output:
Using the array ["hello", "there", "wonderful"]
MinimumWordLength returns 5, MaximumWordLength returns 9, RangeOfWordLengths returns 4, WordLengthMean returns 6

Tests:
./word_analysis_tests
