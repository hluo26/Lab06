import csv

# In the lab 6, I finished the part of main function which includes the interface and menu.

def readfile(name):
	mylist=[]
	f=open(name,'rw')
	reader=csv.reader(f,delimiter=',')
	for row in reader:
		tem=row
		mylist.append(tem)
	return mylist

#read in two matrice
myM1=readfile('M1.txt')
myM2=readfile('M2.txt')
	

# the menu of my interface
def pm():
	
	print '1.Implement a matrix multiplication function.'
	print '2.Implement a matrix addition function'
	print '3.Implement a matrix transpose function'
	print '4,exit'


choice=5
while choice!=4:
	pm()
	choice=input('enter number to perform computation')

	#Implement a matrix multipulication function
	if choice==1:
		if M1_sq1==False or M2_sq1==False:
			print 'wrong demension'
		elif M1_col!=M2_row:
			print 'wrong demension'
		else:
			Matrix = [[0 for x in range(M2_col)] for x in range(M2_row)] 
			for i in range(M1_row):
 			  	# iterate through columns of Y
   				for j in range(M2_col):
      					 # iterate through rows of Y
      			 		for k in range(M2_row):
           					Matrix[i][j] += int(myM1[i][k]) * int(myM2[k][j])
			print Matrix

	#Implement a matrix addition function
	if choice==2:
		if M1_sq2==False or M2_sq2==False:
			print 'wrong demension'
		elif M1_col!=M2_col:
			print 'wrong demension'
		
		
		else:
			Matrix = [[0 for x in range(M1_row)] for x in range(M2_col)] 
			for i in range(len(myM1)):
    			
   				for j in range(len(myM1[i])):
       					 Matrix[i][j]=int(myM1[i][j])+int(myM2[i][j])
			print Matrix
	
	#Implement a matrix transpose function
	if choice==3:
		if M1_sq1==False or M2_sq1==False:
			print 'wrong demension'
		else:
			m1=trans(myM1)
			m2=trans(myM2)
			print m1
			print m2
	
	



































	




	
	
