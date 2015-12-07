#Defines a function that will reverse a number
#n - the value
def ReverseNumber(n, partial = 0):
    #Returns zero if the number is zero anyways
    if n == 0:
        return partial;
    #Returns the reversed integer
    return ReverseNumber(n/10, partial*10+n%10)

#Variables needed for the comparison loop
count = 0
i = 0
limit = 65535

#Loop runs while under the specified limit for a 16 bit unsigned int
while i <= limit:
    #Compares the two values
    if ReverseNumber(i) == i:
        #True adds one to the counter
        count += 1
    #Adds one to the index
    i += 1
#Returns the number palindrome 16 bit integers
print count
