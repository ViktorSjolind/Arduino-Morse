import serial

#port and baudrate
port = "COM3"
baudrate = 9600
#setup serial connection
ser = serial.Serial(port, baudrate)

#Program start
print("Welcome to MORSE-CODE GENERATOR\n" +
      "Enjoy!\n" +
      "Type exit to quit...")

#main loop
while (True):
    usr_input = input("Type a word or sentence to translate into morse-code: ")
    if(ser.is_open): 
        #check for exit
        if (usr_input == "exit"):
          print("Exiting...")
          ser.close()
          break
        #else write input to serial port
        else:
          print("You typed %s, and it sounds like this" % (usr_input))
          ser.write(usr_input.encode())
    else:
        print("Serial connection to %s is closed, exiting..." % (port))

