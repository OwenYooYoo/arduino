import tkinter as tk
import serial

# Initialize serial communication
arduino = serial.Serial('COM3', 9600) # Replace 'COM3' with your Arduino's COM port

# Function to send signal to Arduino
def send_signal(signal):
    arduino.write(signal.encode())

# Set up the GUI
root = tk.Tk()
root.title("Arduino Control")

# Create ON button
btn_on = tk.Button(root, text="Turn ON", command=lambda: send_signal("1"))
btn_on.pack(pady=10)

# Create OFF button
btn_off = tk.Button(root, text="Turn OFF", command=lambda: send_signal("0"))
btn_off.pack(pady=10)

# Run the GUI
root.mainloop()
