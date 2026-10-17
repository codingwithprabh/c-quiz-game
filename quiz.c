#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define TOTAL_QUESTIONS 10

int main(void)
{
    int score;
    int correct;
    int wrong;
    char answer;
    char playAgain;
    char input[100];

    char questions[TOTAL_QUESTIONS][150] = {
        "1. Who developed the C language?",
        "2. Which symbol ends a C statement?",
        "3. Which function prints output in C?",
        "4. Which data type stores integers?",
        "5. Which operator checks equality?",
        "6. Which loop executes at least once?",
        "7. Which header file is used for printf()?",
        "8. What is the index of the first array element?",
        "9. Which operator gives the remainder?",
        "10. Which keyword exits a loop immediately?"
    };

    char options[TOTAL_QUESTIONS][4][80] = {
        {"A. Dennis Ritchie", "B. James Gosling", "C. Bjarne Stroustrup", "D. Guido van Rossum"},
        {"A. :", "B. ;", "C. ,", "D. ."},
        {"A. scanf()", "B. input()", "C. printf()", "D. read()"},
        {"A. float", "B. char", "C. int", "D. void"},
        {"A. =", "B. ==", "C. !=", "D. >="},
        {"A. for", "B. while", "C. do-while", "D. None"},
        {"A. stdlib.h", "B. math.h", "C. time.h", "D. stdio.h"},
        {"A. 0", "B. 1", "C. -1", "D. 2"},
        {"A. /", "B. *", "C. %", "D. +"},
        {"A. continue", "B. break", "C. return", "D. switch"}
    };

    char answers[TOTAL_QUESTIONS] = {
        'A', 'B', 'C', 'C', 'B', 'C', 'D', 'A', 'C', 'B'
    };

    do
    {
        score = 0;
        correct = 0;
        wrong = 0;

        printf("\n====================================\n");
        printf("           C QUIZ GAME\n");
        printf("====================================\n");
        printf("Rules:\n");
        printf("1. There are %d questions.\n", TOTAL_QUESTIONS);
        printf("2. Each correct answer earns 1 point.\n");
        printf("3. There is no negative marking.\n");
        printf("====================================\n");

        for (int i = 0; i < TOTAL_QUESTIONS; i++)
        {
            printf("\n%s\n", questions[i]);

            for (int j = 0; j < 4; j++)
            {
                printf("%s\n", options[i][j]);
            }

            while (1)
            {
                printf("Enter your answer (A/B/C/D): ");

                if (fgets(input, sizeof(input), stdin) == NULL)
                {
                    printf("\nInput error. Exiting game.\n");
                    return 1;
                }

                /* Handle input that is too long */
                if (strchr(input, '\n') == NULL)
                {
                    int ch;

                    while ((ch = getchar()) != '\n' && ch != EOF)
                    {
                        /* Clear extra characters */
                    }

                    printf("Input too long or invalid! ");
                    printf("Enter only A, B, C or D.\n");
                    continue;
                }

                /* Check that the user entered only one character */
                if (input[0] != '\n' && input[1] == '\n')
                {
                    answer = (char)toupper((unsigned char)input[0]);

                    if (answer >= 'A' && answer <= 'D')
                    {
                        break;
                    }
                }

                printf("Invalid input! Enter only one letter: A, B, C or D.\n");
            }

            if (answer == answers[i])
            {
                printf("Correct answer!\n");
                score++;
                correct++;
            }
            else
            {
                printf("Wrong answer! Correct option: %c\n", answers[i]);
                wrong++;
            }

            printf("Current score: %d/%d\n", score, i + 1);
        }

        printf("\n====================================\n");
        printf("             QUIZ RESULT\n");
        printf("====================================\n");
        printf("Total Questions : %d\n", TOTAL_QUESTIONS);
        printf("Correct Answers : %d\n", correct);
        printf("Wrong Answers   : %d\n", wrong);
        printf("Final Score     : %d/%d\n", score, TOTAL_QUESTIONS);
        printf("Percentage      : %.2f%%\n",
               (score * 100.0) / TOTAL_QUESTIONS);

        if (score <= 3)
        {
            printf("Performance: Keep practising!\n");
        }
        else if (score <= 6)
        {
            printf("Performance: Good effort!\n");
        }
        else if (score <= 8)
        {
            printf("Performance: Great job!\n");
        }
        else
        {
            printf("Performance: Excellent!\n");
        }

        printf("====================================\n");

        while (1)
        {
            printf("Would you like to play again? (Y/N): ");

            if (fgets(input, sizeof(input), stdin) == NULL)
            {
                printf("\nInput error. Exiting quiz.\n");
                return 1;
            }

            /* Handle input that is too long */
            if (strchr(input, '\n') == NULL)
            {
                int ch;

                while ((ch = getchar()) != '\n' && ch != EOF)
                {
                    /* Clear extra characters */
                }

                printf("Input too long or invalid! Enter only Y or N.\n");
                continue;
            }

            /* Accept only one character: Y or N */
            if (input[0] != '\n' && input[1] == '\n')
            {
                playAgain = (char)toupper((unsigned char)input[0]);

                if (playAgain == 'Y' || playAgain == 'N')
                {
                    break;
                }
            }

            printf("Please enter only Y or N.\n");
        }

    } while (playAgain == 'Y');

    printf("\nThank you for playing C Quiz Game!\n");

    return 0;
}
