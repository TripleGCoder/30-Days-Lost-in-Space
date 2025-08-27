import pyperclip #Library to coppy a var to windows Clipboard

Finish = False #Codition to Exit out




#Translate Special Characters into C++ dash(); and dot();, cause instead of spending 20 minutes typing it manually for my arduino code, i decided to make a python script to write the two functions and copy it straight into my clipboard so that i can just paste it. :)
def Translate():
    global Finish
    cont = ""
    msg = input("Enter morse:\n")
    if msg == "": #if user inputs nothing, program ends
        Finish = True
    else:
        #e.x User inputs ".-" converts to dot(); dash();
        for char in msg:
            if char == ".":
                cont += "dot(); "
            if char == "-":
                cont += "dash(); "
        pyperclip.copy(cont) # copys output to clipboard
        print(cont,"\n\n")
        



while Finish == False:
    Translate()

