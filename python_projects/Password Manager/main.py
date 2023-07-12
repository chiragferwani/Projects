from tkinter import *
from tkinter import messagebox
import random
import pyperclip
import json

ENTRY_COLOR = "#FFFFF0"

# ---------------------------- PASSWORD GENERATOR ------------------------------- #
def generate_password():
    letters = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z']
    numbers = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9']
    symbols = ['!', '#', '$', '%', '&', '(', ')', '*', '+']

    n_letters = random.randint(8, 10)
    n_symbols = random.randint(2, 4)
    n_numbers = random.randint(2, 4)

    password_letters = [random.choice(letters) for _ in range(n_letters)]
    password_symbols = [random.choice(symbols) for _ in range(n_symbols)]
    password_numbers = [random.choice(numbers) for _ in range(n_numbers)]
    password_lists = password_letters + password_symbols + password_numbers

    random.shuffle(password_lists)
    password = "".join(password_lists)
    password_entry.insert(0, password)
    pyperclip.copy(password)
    messagebox.showinfo(title="Password", message="Password copied to clipboard")

# ---------------------------- SAVE PASSWORD ------------------------------- #
def save():
    website = website_entry.get()
    email = email_entry.get()
    password = password_entry.get()
    new_data = {
        website: {
            "email": email,
            "password": password
        }
    }

    if len(website) == 0 or len(password) == 0:
        messagebox.showinfo(title="Error", message="Please don't leave any of the fields empty!")
    else:
        is_ok = messagebox.askokcancel(title=website, message=f"These are the details entered: \nEmail: {email} \nPassword: {password}\n Is is ok to save?")
        if is_ok:
            try:
                with open("data.json", "r") as data_file:
                    #read old data
                    data = json.load(data_file)
            except FileNotFoundError:
                with open("data.json", "w") as data_file:
                    json.dump(new_data, data_file, indent=4)
            else:
                #update old data with new data
                data.update(new_data)
                with open("data.json", "w") as data_file:
                    #saving updated data
                    json.dump(data, data_file, indent=4)
            finally:
                website_entry.delete(0, END)
                password_entry.delete(0, END)

# ---------------------------- FIND PASSWORD ------------------------------- #
def find_password():
    website = website_entry.get()
    try:
        with open("data.json") as data_file:
            data = json.load(data_file)
    except FileNotFoundError:
        messagebox.showinfo(title="Error", message="No data file found!")
    else:
        if website in data:
            email = data[website]["email"]
            password = data[website]["password"]
            messagebox.showinfo(title=f"Password for {website}", message=f"Email: {email}\nPassword: {password}")
        else:
            messagebox.showinfo(title="Error", message=f"The details for the {website} are not saved")

# ---------------------------- UI SETUP ------------------------------- #
window = Tk()
window.title("Password Manager")
window.config(padx=50, pady=50)
window.config(bg='white')

#creating a canvas
canvas = Canvas(width=200, height=200, highlightthickness=0, bg='white')
logo_img = PhotoImage(file="logo.png")
canvas.create_image(100, 100, image=logo_img)
canvas.grid(row=0, column=1)

#Labels
website_label = Label(text="Website:", bg='white')
website_label.grid(row=1, column=0)
email_label = Label(text="Email/Username:", bg='white')
email_label.grid(row=2, column=0)
password_label = Label(text="Password:", bg='white')
password_label.grid(row=3, column=0)

#Entries
website_entry = Entry(width=20, bg=ENTRY_COLOR)
website_entry.grid(row=1, column=1)
website_entry.focus()
email_entry = Entry(width=34, bg=ENTRY_COLOR)
email_entry.grid(row=2, column=1, columnspan=2)
email_entry.insert(0, "chiragferwani@gmail.com")
password_entry = Entry(width=20, bg=ENTRY_COLOR)
password_entry.grid(row=3, column=1)

#Buttons
search_button = Button(text="Search", highlightthickness=0, width=15, command=find_password, bg='white')
search_button.grid(row=1, column=2)
password_button = Button(text="Generate Password", highlightthickness=0, command=generate_password, bg='white')
password_button.grid(row=3, column=2)
add_button = Button(text="Add", width=38, highlightthickness=0, command=save, bg='white')
add_button.grid(row=4, column=1, columnspan=2)

window.mainloop()