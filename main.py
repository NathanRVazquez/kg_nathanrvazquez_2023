str1 = raw_input("Enter first string: ")
str2 = raw_input("Enter second string: ")

#Takes the input for two strings
#
    
    

def position(x,  str1,  index):
    #this function will hold the values of any repearting charachters so we can access them later
    indexes = []
    #this is an array that can be scalable because it is an empty array
    for pace in range(len(str1)):
        #this is looking through each index
       if str1[pace] == x:
           #if it finds a matching charachter
           indexes.append(pace)
           # it adds it to the array
    return indexes[index]
    #then when the function is called it returns the index of the array


def nums(x,str1):
    #this function finds the amount of repeating charachters in side a string based on a given char value
    count = 0
    for pace in range(len(str1)):
        print(pace)
        if(str1[pace] == x):
            count = count + 1
    return pace

def ifFunc(x,str1,str2):
    # this function will tell us wether a statement evaluated to true or not
    count = nums(x,str1)
    # this gets the amount of repeating charachters so we can test out the answer
    for pace in range(count):
        #this goes through the total amount of times we have seen the same char in a string 
        curr_val = str2[position(x,str1,pace)]
        # curr val gives us the charachter from string 2 based on the index of a charachter in string 1
        for j in range(count-1):
            #this for loop vists the string str2 and looks through each charachter for a possible match 
            tested_val = str2[position(x,str1,j+1)]
            #if a match is found it returns false
            if(curr_val == tested_val):
                fail = 0
                return fail
    truth = 1
    #if no match is found it returns true
    return truth
    
def test(str1, str2):
    num = []
    count = 0
    #a string can have multiple charachtes that appear more than once, for exmple babushka has a repeating a and b
    for pace in range(len(str1)):
        #this for loops looks through all charachters for a repeating charachter and returns wether it is a function or not
        testing = ifFunc(str1[pace],str1,str2)
        #print(str1[count])
        if(testing == 0):
            false = 1 
            return false
    true = 1
    return true
    # print shows 1 for true and 0 for false
print(test(str1,str2))

