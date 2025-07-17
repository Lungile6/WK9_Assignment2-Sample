Sure, Lungile! Here's a complete README.md file that documents all three of your C projects in a professional, structured, and collaborative-friendly way — ready to be pushed to GitHub or shared with peers:

`markdown

💡 Systems Programming Projects Collection

Welcome to a collection of three foundational C projects focused on pointers, function pointers, and dynamic memory management — built to illustrate real-world applications of systems-level programming for aspiring software engineers and technologists.

👨‍💼 Project 1: Net Salary Calculator

📝 Description
A modular net salary calculator that computes deductions (tax, medical insurance, maternity leave, and social security) based on a user's gross income. Each deduction is processed via functions using pointers to enhance memory manipulation and modularity.

📌 Deductions:
- Tax: Based on salary brackets:
  - ≤ $100 → 0%
  - $100–$300 → 20%
  - > $300 → 28%
- Medical Insurance: 5% of gross
- Maternity Leave: 0.3% of gross
- Social Security: 3% of gross

🛠️ Key Concepts
- Pointer-based function communication
- Conditional branching and arithmetic logic
- Modular design

📈 Advantages of Using Pointers
- Reduces memory usage by working with addresses
- Simplifies manipulation of shared data
- Promotes efficient function interfacing

---

🔤 Project 2: Sorting Names (Bubble Sort with Function Pointers)

📝 Description
A bubble sort implementation that dynamically chooses the sorting order (ascending or descending) based on user input. Function pointers are used to toggle between different comparison strategies.

📦 Features
- Accepts a list of 20 full names
- User specifies asc or desc at runtime
- Sorts and displays names accordingly

🛠️ Key Concepts
- Function pointers for flexible sorting logic
- strcmp for string comparison
- Modular bubble sort with dynamic behavior

💡 Example Usage
`bash
Enter sorting order (asc/desc): asc
Sorted Names:
Andile Mthembu
Banele Hlophe
...
`

---

🧠 Project 3: Student Email Management (Dynamic Memory Handling)

📝 Description
This project handles storage and resizing of student email addresses using dynamic memory management. It demonstrates memory allocation, input handling, shrinking arrays, and proper cleanup.

🧮 Features
- Uses malloc() to store 10 email addresses
- Reallocates memory to reduce array size to 6
- Uses free() to prevent memory leaks

📌 Key Concepts
- malloc() for initial allocation
- realloc() for resizing
- free() for releasing memory
- char for 2D string array handling

🔧 Example Use Case
`bash
Enter email for student 1: themba@example.com
...
After shrinking:
Student 1: themba@example.com
...
`

---

🧪 How to Compile and Run

Use GCC for all projects:

`bash
gcc salary_calculator.c -o salary
./salary

gcc sort_names.c -o sort
./sort

gcc email_manager.c -o emails
./emails
`

---

🙌 Author

Lungile Mabelebele  
Software Engineering Student | Digital Literacy Advocate | Tech for Industrial Innovation  
Passionate about systems programming, scalable app development with Flutter, and backend integration.

---

📌 License

This project is licensed under the MIT License. Feel free to modify, share, or contribute — the more we build together, the better!

`

Would you like me to split this into separate project folders and stub in .c files for each, or tailor the README even more for public GitHub sharing with tags and contribution instructions?
