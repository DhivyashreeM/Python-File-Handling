import os
import msvcrt
choice='0'
while True:
    if(choice!='i' and choice!='0'):
        msvcrt.getch()
    os.system('cls')
    choice=input("Input,Output,replace,delete or exit (i/o/r/d/e)? : ")
    if choice  =='i':
        n=int(input("How many names would you like to enter : "))
        with open("listOfNames.txt","a") as myFile:
            for i in range(n):
                myFile.write(f"{input('Enter Your name : ')}\n")
    elif choice=='o':
        with open("listOfNames.txt","r") as myFile:
            for line in myFile:
                print(line,end="") 
    elif choice=='d' :
        present=False
        name=input("Enter the name you want to delete : ")
        with open("listOfNames.txt","r") as myFile:
            with open("temp.txt","a") as tempfile:
                for line in myFile:
                    if(line !=name+"\n"):
                        tempfile.write(line)
                    else:
                        present=True
        if(present):
            print("Successfully removed!")
        else:
            print("Name Not Found!!")
        os.remove("listOfNames.txt")
        os.rename("temp.txt","listOfNames.txt")
    elif choice =='r':
        present=False
        name=input("Enter the name you want to replace : ")
        name2=input("Enter the name you want to enter : ")+"\n"
        with open("listOfNames.txt","r") as myFile:
            with open("temp.txt","a") as tempfile:
                for line in myFile:
                    if(line !=name+"\n"):
                        tempfile.write(line)
                    else:
                        tempfile.write(name2)
                        present=True
        if(present):
            print("Successfully Replaced!")
        else:
            print("Name Not Found!!")
        os.remove("listOfNames.txt")
        os.rename("temp.txt","listOfNames.txt")
    elif choice=='e':
        os.system('cls')
        break