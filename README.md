# cmsc11-srs
This is a Simple Student Registration Program.

Features of my Student Registration Program are:
1. Create a Student Record- After you click (1) there are another 2 options.
			    It's Either you will create a student record (1) Manually or (2) Upload a file txt. 
			    Note: The student's ID number is randomized (if you input manually).                                                                                              
2. Update a Student Record- After you click this (2), you will be ask if what is the ID number you want to UPDATE.
			    Then, it will display the records of that student. After, you will be ask if what do you 
			    want to update; (1) Last Name (2) First Name (3) Section (4) Exam Scores 1 (5) Exam Scores 2
			    (6) Exam Scores 3.                                                                                             
3. Create a Subject Record- After you click (3) there are another 2 options.
			    It's Either you will create a subject record (1) Manually or (2) Upload a file txt.
			    Note: The subject's ID number is randomized (if you input manually).                                                                                       
4. Update a Subject Record- After you click this (4), you will be ask if what is the ID number you want to UPDATE.
			    Then, it will display the records of that subject. After, you will be ask if what do you 
			    want to update; (1) Subject Code (2) FSubject Title                                                                             
5. Enroll a Student to a Subject- In this you will be ask what is the ID number of the student, [Example: 111] you want to Enroll in a 
				  subject. Then, you will input the subject code of the subject. [Example: CMSC11]
				  Note, that the student is already enroll in CMSC11 which is a default subject.	           
6. Display all Student Record- This a display of all the student records. Note: you can see a none to a students subjects
			       because it's either that student is not yet enroll to a certain subject or that subject she
			       or he have is not in the subject records. Studentsa are sorted Alphabetically by their
			       Last Name. You can also see here the students Mean Grade, Letter Grades, and also the 
			       highest of each Hex's, lowest of each Hex's, and the standard deviation of all the 
			       students Grades.                                                                                              
7. Display Subject Record- This a display of all the subject records. Note: You cannot upload or input another subject
			   which is the same to the existing subjects.
8. Search a Student- In this, you will just input the student's Last Name, and if that Last Name exist in the 
                     student records then it will display the record of that certain student who has that Last Name. 
		     Note: It will display the records of all the student who has the same Last Name.
9. Search a Subject- In this, you will just input the subject's Subject Code, and if that Subject Code exist in the  
		     record then it will display the record of that certain subject who has that Subject Code.  
10. Delete Student Record- In this, you will just input the student's Last Name who you want to delete. After that, that
			   student records will be deleted as well.    
11. Delete Subject Record- In this, you will just input the subject's subject code who you want to delete. After that, that
			   subject records will be deleted as well. Note: CMSC11 cannot be deleted 
			   as it is a default subject. 
12. Drop a subject- After you click this (12) you will be ask by the student's Last Name you want to drop his or her
		    existing enroll subjects. Then, you will be choosing its either you will drop the Subject 2 or
		    Subject 3. Note: You will not be ask to drop the Subject 1 as it contains the CMSC11. Remember that
		    CMSC11 is a default subject.  
13. Export records- This means that if you click this (13) then all the transaction or changes that you made while you
		    inputting will be exported to the CSV file. (Excel)


Note: We all have a function for all the features in our Simple Student Registration

STUDENTS RECORDS
Example:
	Student ID Number: 111
	Last Name: Allerite
	First Name: Mary Joy
	Section: A
	Hex-Exam Score 1: 45
	Hex-Exam Score 2: 45
	Hex-Exam Score 3: 45
	Subject 1: CMSC11
	Subject 2: STAT123
	Subject 3: MATH53

SUBJECT RECORDS
Example:
	Subject ID Number: 11
	Subject Code: CMSC11
	Subject Title: Introduction to Computer Science

Special about this Code:
	We didn't use (#include <math.h>) for our statistics. It's all made functions by yours trully.
	

