#set comprehension
#A={1,2,3,4,5}
#A={x | xEN and 1<= x <=5}
A={x for x in range(1,6) if x%2!=0}#odd
print A
