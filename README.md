# 🎯 C Quiz Game

A beginner-friendly command-line quiz game built using the C programming language. Test your knowledge of C fundamentals through 10 multiple-choice questions, track your score, and improve with every attempt.

## 📖 About

C Quiz Game is an interactive command-line application developed using the C programming language. It features 10 multiple-choice questions covering fundamental C programming concepts, with four options for each question.

The program validates user input, checks answers, tracks scores in real time, and displays a final report containing correct answers, incorrect answers, percentage, and performance feedback. Players can also replay the quiz without restarting the application.

This project was created as part of my journey as a **B.Tech CSE (AI/ML) student** to strengthen my programming fundamentals, practise problem-solving, and gain hands-on experience building practical applications in C.

## ✨ Features

- **10 Multiple-Choice Questions** — Four options for every question.
- **Input Validation** — Accepts only a single valid option: A, B, C, or D.
- **Case-Insensitive Answers** — Supports both uppercase and lowercase inputs.
- **Live Score Tracking** — Displays the current score after every question.
- **Detailed Results** — Shows correct answers, wrong answers, final score, and percentage.
- **Performance Feedback** — Provides feedback based on the final score.
- **Replay Option** — Play again without restarting the program manually.
- **No Negative Marking** — Every correct answer earns one point.

## 🛠️ Technologies Used

- **Language:** C
- **Compiler:** GCC
- **Standard:** C99
- **Libraries:** `stdio.h`, `ctype.h`, `string.h`

## 🚀 Getting Started

### Prerequisites

- A C compiler such as GCC.
- A terminal or command prompt.

### 1. Clone the Repository

```bash
git clone https://github.com/codingwithprabh/c-quiz-game.git
```

### 2. Navigate to the Project Directory

```bash
cd c-quiz-game
```

### 3. Compile the Program

```bash
gcc -std=c99 -Wall -Wextra quiz.c -o quiz
```

### 4. Run the Program

**Windows:**

```bash
.\quiz.exe
```

**Linux:**

```bash
./quiz
```

## 🎮 How to Play

1. Run the compiled program.
2. Read each question and its four options.
3. Enter your answer using A, B, C, or D.
4. Get immediate feedback after every answer.
5. View your final score, percentage, and performance feedback.
6. Choose `Y` to play again or `N` to exit.

## 📊 Scoring System

| Correct Answers | Performance |
|---|---|
| 0–3 | Keep practising! |
| 4–6 | Good effort! |
| 7–8 | Great job! |
| 9–10 | Excellent! |

Each correct answer earns **1 point**, with a maximum score of **10 points**.

## 📚 Concepts Practiced

This project helped me practise the following C programming concepts:

- Variables and data types
- Arrays and strings
- `for`, `while`, and `do-while` loops
- Conditional statements (`if-else`)
- Character handling using `toupper()`
- String handling using `strchr()`
- Input handling using `fgets()`
- Input validation and error handling
- Arithmetic operations and percentage calculation
- Standard library functions
- Constants using `#define`

## 🔮 Future Improvements

- Add more questions and difficulty levels.
- Randomize the order of questions.
- Introduce different quiz categories.
- Display explanations for correct answers.
- Save high scores between sessions.
- Add a timer for each question.

## 👨‍💻 Author

**Prabhjot Singh**

B.Tech CSE (AI/ML) Student | Aspiring Software Engineer

- GitHub: [@codingwithprabh](https://github.com/codingwithprabh)

## 📌 Project Status

**Completed — Beginner Level**

This project is part of my journey to learn C programming and build practical software projects while strengthening my programming fundamentals.

---

⭐ If you find this project useful, consider giving the repository a star!
