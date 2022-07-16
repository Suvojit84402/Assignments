import re
#error class 1
class age_error1(Exception):
	def message(self):
		print("Age is not a positive integer")
#error class 2
class age_error2(Exception):
	def message(self):
		print("Age is under 16")
#error class 3
class usernameerror(Exception):
	def message(self):
		print("Username must be unique")
#error class 4
class emailerror(Exception):
	def message(self):
		print("Format is not matched for email-id")

#main program
user_data=(("Suvojit123","suvojit907@gmail.com",22),("Subhradeep00","Subhradeep00200@gmail.com",-23),("Surajit11","surajit123@gmail.com",16),
("Aranya1416","Aranya907@hotmail.com",18),("Srijan99","Sijangmail.com",24))
unq_users=[]
#regular expression for email addresss
pat = "^[a-zA-Z0-9-_]+@[a-zA-Z0-9]+\.[a-z]{1,3}$"
for tup in user_data:
	try:
		if(tup[2]<0):
			raise age_error1()
		elif(tup[2]<16):
			raise age_error2()
		if tup[0] in unq_users:
			raise usernameerror()
		else:
			unq_users.append(tup[0])
		if not re.match(pat,tup[1]):
			raise emailerror()
	except age_error1 as ae1:
		ae1.message();
	except age_error2 as ae2:
		ae2.message()
	except usernameerror as ue:
		ue.message()
	except emailerror as em:
		em.message();
	else:
		print(tup)
