from tkinter import *

def login():
    username = username_entry.get()
    password = password_entry.get()

    if username == "user" and password == "password":
        message_label.config(text="Login Successful!")
    else:
        message_label.config(text="Incorrect username or password!")

root = Tk()
root.title("Login Interface")

# Creating labels for username, password, and message
username_label = Label(root, text="Username: ")
username_label.pack()

password_label = Label(root, text="Password: ")
password_label.pack()

message_label = Label(root, text="")
message_label.pack()

# Creating entry fields for username and password
username_entry = Entry(root)
username_entry.pack()

password_entry = Entry(root, show="*")
password_entry.pack()

# Creating login button
login_button = Button(root, text="Login", command=login)
login_button.pack()

root.mainloop()
