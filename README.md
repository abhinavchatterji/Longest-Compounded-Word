# Longest-Compounded-Word
Word Composition Problem

# Steps to Execute this code
1. Open the C++  file on any C++ compatible IDE 
2. Paste the contents of the input file in Input.txt
3. Now compile and run the code
4. The desired output will be obtained from  Output.txt

# Problem and Solution Overview

Write a program that:
1. Reads provided files (Input_01.txt and Input_02.txt) containing alphabetically sorted word lists (one
word per line, no spaces, all lowercase)
2. Identifies & display below given data in logs/console/output file
o longest compounded word
o second longest compounded word
o time taken to process the input file
<br>
n: number of strings 

m: max(length of string)
<br>
<br>

# Complexity Analysis 
Time complexity:
<br>
<br>
Best case-> O($m^2$)
<br>
Average Case-> O(nm)
<br>
Worst Case-> O(n $m^2$)  
<br>
Space complexity: O(m)
<br>
<br>

* This problem has been efficiently solved using Dynamic Programming(DP) Data Structure
* To identify the largest compounded word we begin with sorting the strings concerning their length and for equal-length strings, we sort alphabetically
* Now traversing from the end of the list of strings we try to find if the present string can be made by concatenating smaller words or not
* if yes then store the string in a variable and perform  the same  with the second-largest compounded word
* if we get both the strings then we stop and print the output strings
