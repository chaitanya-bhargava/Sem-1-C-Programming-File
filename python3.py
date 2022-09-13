'''
Let the three subjects be Maths, Physics and Computers
with Max marks equal to 100
'''
while True:
    try:
        maths=int(input("Enter the marks in Maths: "))
        physics=int(input("Enter the marks in Physics: "))
        computers=int(input("Enter the marks in Computers: "))
        if(maths>100 or physics>100 or computers>100):
            raise ValueError
        elif(maths<0 or physics<0 or computers<0):
            raise ArithmeticError
        else:
            break
    except ValueError:
        print("Marks cannot be greater than 100!")
    except ArithmeticError:
        print("Marks cannot be less than 0!")
print(f"The percentage scored is {(maths+physics+computers)/3}")