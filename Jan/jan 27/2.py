t = int(input())

while t : 
    t -= 1
    input_string = input()
    input_list = input_string.split()

    a = int(input_list[0])
    b = int(input_list[1])

    if(a > b) :
        temp = a
        a = b
        b = temp
    if((a != 0 and b == 0) or (a == 0 and b != 0)) :
        print("NO")
        continue
    num1 = (2*b)-a
    if num1 < 0 or num1%3 : 
        print("NO")
        continue
    num2 = a-(num1//3)
    if num2 < 0 or num2%2 :
        print("NO")
        continue
    print("YES")
  

