
//https://www.hackerearth.com/practice/data-structures/stacks/basics-of-stacks/practice-problems/algorithm/largest-number-7-eee0b7c3/

//Largest Number



num = input() #take input as string
k = int(input())

# Initialize an empty stack
stack = []

# Iterate through each digit of number
for each_digit in num:
    while len(stack)>0 and k>0 and stack[-1] < each_digit:
        stack.pop()
        k-=1
    stack.append(each_digit)

while k>0:
    stack.pop()
    k-=1

Final_answer = "".join(stack)

if len(Final_answer)>0:
    print(Final_answer)
else:
    print("0")