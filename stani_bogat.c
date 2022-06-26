#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <stdbool.h>
_CRT_SECURE_NO_WARNINGS;

struct Question
{
    char* question;
    char* answear_1;
    char* answear_2;
    char* answear_3;
    char* answear_4;
    bool answear_1_a, answear_2_a, answear_3_a, answear_4_a;
};
int Randoms(int min, int max, int count, int random)
{
    int i;
    for (i = 0; i < count; i++)
    {
        random = (rand() % (max - min + 1)) + min;
    }
    return random;
}
void fiftyfifty(struct Question question)
{
    if (question.answear_1_a == false);
        printf("A ne e wqrno");

}
void ask_computer(struct Question question)
{
    if (question.answear_1_a == true)
        printf("publicata se chudi kak mozhe da ne znaesh che e A");
    if (question.answear_2_a == true)
        printf("publicata se chudi kak mozhe da ne znaesh che e B");
    if (question.answear_3_a == true)
        printf("publicata se chudi kak mozhe da ne znaesh che e C");
    if (question.answear_4_a == true)
        printf("publicata se chudi kak mozhe da ne znaesh che e D");

}
void call_friend()
{
    printf("Phahah nqkoj si misli che ima priqteli");
}
void print_menu(struct Question current_question)
{
    printf("%s\n", current_question.question);
    printf("A.%s\n", current_question.answear_1);
    printf("B.%s\n", current_question.answear_2);
    printf("C.%s\n", current_question.answear_3);
    printf("D.%s\n", current_question.answear_4);
    printf(" \n \nYour answer is : \n");
}
void encrypt_file();
void decrypt_file();

int main()
{
    printf("    Who wants to become a millionare?\n\n");
    struct Question q1[10];
    struct Question q2[10];
    struct Question q3[10];
    struct Question q4[10];

    q1[0].question = "Which fairy creatures are usually characterized by the epithets fire-breathing, winged, scaly and bloodthirsty?";
    q1[0].answear_1 = "unicorns";
    q1[0].answear_2 = "mermaids";
    q1[0].answear_3 = "dragons";
    q1[0].answear_4 = "bears";
    q1[0].answear_1_a = false;
    q1[0].answear_2_a = false;
    q1[0].answear_3_a = true;
    q1[0].answear_4_a = false;

    q1[1].question = "What material do potters use to make their wares";
    q1[1].answear_1 = "clay";
    q1[1].answear_2 = "bronze";
    q1[1].answear_3 = "marble";
    q1[1].answear_4 = "stone";
    q1[1].answear_1_a = true;
    q1[1].answear_2_a = false;
    q1[1].answear_3_a = false;
    q1[1].answear_4_a = false;

    q1[2].question = "Which Italian dish does not contain tomatoes";
    q1[2].answear_1 = "Pizza Margarita";
    q1[2].answear_2 = "Lasagna bolozene";
    q1[2].answear_3 = "carpese salad";
    q1[2].answear_4 = "Focaccia Bread";
    q1[2].answear_1_a = false;
    q1[2].answear_2_a = true;
    q1[2].answear_3_a = false;
    q1[2].answear_4_a = false;

    q1[3].question = "Where would you be most likely to practice your bumping, setting and spiking?";
    q1[3].answear_1 = "In a library";
    q1[3].answear_2 = "On a volleyball court";
    q1[3].answear_3 = "In a courtroom";
    q1[3].answear_4 = "On an allien spaceship";
    q1[3].answear_1_a = false;
    q1[3].answear_2_a = true;
    q1[3].answear_3_a = false;
    q1[3].answear_4_a = false;

    q1[4].question = "The song -It's My life- is song written by:";
    q1[4].answear_1 = "Justin Bieber";
    q1[4].answear_2 = "Bon Jovi";
    q1[4].answear_3 = "Metallica";
    q1[4].answear_4 = "Nickelback";
    q1[4].answear_1_a = false;
    q1[4].answear_2_a = true;
    q1[4].answear_3_a = false;
    q1[4].answear_4_a = false;

    q1[5].question = "8 + 9 = ?";
    q1[5].answear_1 = "5";
    q1[5].answear_2 = "17";
    q1[5].answear_3 = "monkey";
    q1[5].answear_4 = "69";
    q1[5].answear_1_a = false;
    q1[5].answear_2_a = true;
    q1[5].answear_3_a = false;
    q1[5].answear_4_a = false;

    q2[0].question = "In 2016, a New York Times review of the Angry Birds movie described the plot as nonaeronautic feathered creatures getting around via what";
    q2[0].answear_1 = "Rocket ship";
    q2[0].answear_2 = "Skateboard";
    q2[0].answear_3 = "Catapult";
    q2[0].answear_4 = "Subway";
    q2[0].answear_1_a = false;
    q2[0].answear_2_a = false;
    q2[0].answear_3_a = true;
    q2[0].answear_4_a = false;

    q2[1].question = "Which of these is a notable location in Norse mythology, and NOT in Greek mythology?";
    q2[1].answear_1 = "Mount Olympus";
    q2[1].answear_2 = "Elysian Fields";
    q2[1].answear_3 = "Tartarus";
    q2[1].answear_4 = "Valhalla";
    q2[1].answear_1_a = false;
    q2[1].answear_2_a = false;
    q2[1].answear_3_a = false;
    q2[1].answear_4_a = true;

    q2[2].question = "Because it's evenly divisible by every integer between 1 and 10, what did Plato consider to be an ideal number";
    q2[2].answear_1 = "1880";
    q2[2].answear_2 = "3450";
    q2[2].answear_3 = "5040";
    q2[2].answear_4 = "7770";
    q2[2].answear_1_a = false;
    q2[2].answear_2_a = false;
    q2[2].answear_3_a = true;
    q2[2].answear_4_a = false;

    q2[3].question = "Argentina is greater than Belgium. Belgium has more people than Canada. Canada has more islands than Denmark. How many statements are true?";
    q2[3].answear_1 = "0";
    q2[3].answear_2 = "1";
    q2[3].answear_3 = "2";
    q2[3].answear_4 = "all";
    q2[3].answear_1_a = false;
    q2[3].answear_2_a = false;
    q2[3].answear_3_a = true;
    q2[3].answear_4_a = false;

    q2[4].question = "At what age are you double the age that you were when you were half the age that you were when you were twice as old as you were when you were six?";
    q2[4].answear_1 = "3";
    q2[4].answear_2 = "6";
    q2[4].answear_3 = "12";
    q2[4].answear_4 = "18";
    q2[4].answear_1_a = false;
    q2[4].answear_2_a = false;
    q2[4].answear_3_a = true;
    q2[4].answear_4_a = false;

    q2[5].question = "Only one of the world's continents has three or more countries whose names begin AND end with A?";
    q2[5].answear_1 = "Asia";
    q2[5].answear_2 = "South America";
    q2[5].answear_3 = "Europe";
    q2[5].answear_4 = "Africa";
    q2[5].answear_1_a = false;
    q2[5].answear_2_a = false;
    q2[5].answear_3_a = true;
    q2[5].answear_4_a = false;

    q3[0].question = "What's the only building in Central London that's been allowed to have a thatched roof since a major fire struck the city in 1212";
    q3[0].answear_1 = "British Museum";
    q3[0].answear_2 = "Tower of London";
    q3[0].answear_3 = "Globe Theater";
    q3[0].answear_4 = "Buckingham Palace";
    q3[0].answear_1_a = false;
    q3[0].answear_2_a = false;
    q3[0].answear_3_a = true;
    q3[0].answear_4_a = false;

    q3[1].question = "Hanibal c rossed the Alps using what animals?";
    q3[1].answear_1 = "Rhinoceri";
    q3[1].answear_2 = "Elephants";
    q3[1].answear_3 = "Llamas";
    q3[1].answear_4 = "Chihuahuas";
    q3[1].answear_1_a = false;
    q3[1].answear_2_a = true;
    q3[1].answear_3_a = false;
    q3[1].answear_4_a = false;

    q3[2].question = "Which of these is a movie nominated for Best Picture of 2016, and NOT an area of Walt Disney World's Magic Kingdom";
    q3[2].answear_1 = "Fantasyland";
    q3[2].answear_2 = "Adventureland";
    q3[2].answear_3 = "Frontierland";
    q3[2].answear_4 = "La La Land";
    q3[2].answear_1_a = false;
    q3[2].answear_2_a = false;
    q3[2].answear_3_a = false;
    q3[2].answear_4_a = true;

    q3[3].question = "Animals like horses, pigs and cows have what specific physical characteristic?";
    q3[3].answear_1 = "Large teeth";
    q3[3].answear_2 = "Hooved feet";
    q3[3].answear_3 = "Two stomachs";
    q3[3].answear_4 = "Small ears";
    q3[3].answear_1_a = false;
    q3[3].answear_2_a = true;
    q3[3].answear_3_a = false;
    q3[3].answear_4_a = false;

    q3[4].question = "How many countries are there in the world";
    q3[4].answear_1 = "201";
    q3[4].answear_2 = "179";
    q3[4].answear_3 = "195";
    q3[4].answear_4 = "142";
    q3[4].answear_1_a = false;
    q3[4].answear_2_a = false;
    q3[4].answear_3_a = true;
    q3[4].answear_4_a = false;

    q3[5].question = "Which of the following countries do NOT border each other all";
    q3[5].answear_1 = "Uruguay and Paraguay";
    q3[5].answear_2 = "Romania and Bulgaria";
    q3[5].answear_3 = "Afghanistan and Pakistan";
    q3[5].answear_4 = "Niger and Nigeria";
    q3[5].answear_1_a = true;
    q3[5].answear_2_a = false;
    q3[5].answear_3_a = false;
    q3[5].answear_4_a = false;


    int i;
    int random;
    int min = 0, max = 5, count = 1;
    srand(time(0));
    int result = Randoms(min, max, count, random);
    FILE* fp;
    fp = fopen("Vuprosi.txt", "w");
    fprintf(fp, "Question 1: ");
    for (i = 0; i < 3; i++)
    {
        result = Randoms(min, max, count, random);
        fwrite(&q1[result], sizeof(struct Question), 1, fp);
         print_menu(q1[result]);
         char answer;
         scanf(" %c", &answer);
         if(answer == 'A' && q1[result].answear_1_a == true)
         {
             printf("Correct!\n");
             result = Randoms(min, max, count, random);
             continue;
         }

        if(answer == 'B' && q1[result].answear_2_a == true)
        {
            printf("Correct!\n");
            result = Randoms(min, max, count, random);
            continue;
        }

        if(answer == 'C' && q1[result].answear_3_a == true)
        {
            printf("Correct!\n");
            result = Randoms(min, max, count, random);
            continue;
        }

        if(answer == 'D' && q1[result].answear_4_a == true)
        {
            printf("Correct!\n");
            result = Randoms(min, max, count, random);
            continue;
        }
         else{
            printf("Incorrect! Game over.\n");
            return 0;
         }


    }
    for (i = 0; i < 3; i++)
    {
        char answer;
        result = Randoms(min, max, count, random);
        fwrite(&q2[result], sizeof(struct Question), 1, fp);
        print_menu(q2[result]);
        scanf(" %c", &answer);
         result = Randoms(min, max, count, random);
        fwrite(&q2[result], sizeof(struct Question), 1, fp);
         print_menu(q2[result]);
         scanf(" %c", &answer);
         if(answer == 'A' && q2[result].answear_1_a == true)
         {
             printf("Correct!\n");
             result = Randoms(min, max, count, random);
             continue;
         }

        if(answer == 'B' && q2[result].answear_2_a == true)
        {
            printf("Correct!\n");
            result = Randoms(min, max, count, random);
            continue;
        }

        if(answer == 'C' && q2[result].answear_3_a == true)
        {
            printf("Correct!\n");
            result = Randoms(min, max, count, random);
            continue;
        }

        if(answer == 'D' && q2[result].answear_4_a == true)
        {
            printf("Correct!\n");
            result = Randoms(min, max, count, random);
            continue;
        }
         else{
            printf("Incorrect! Game over.\n");
            return 0;
         }
    }
    for (i = 0; i < 3; i++)
    {
        char answer;
        result = Randoms(min, max, count, random);
        fwrite(&q3[result], sizeof(struct Question), 1, fp);
        print_menu(q3[result]);
        scanf(" %c", &answer);
         result = Randoms(min, max, count, random);
        fwrite(&q3[result], sizeof(struct Question), 1, fp);
         print_menu(q3[result]);
         scanf(" %c", &answer);
         if(answer == 'A' && q3[result].answear_1_a == true)
         {
             printf("Correct!\n");
             continue;
         }

        if(answer == 'B' && q3[result].answear_2_a == true)
        {
            printf("Correct!\n");
            continue;
        }

        if(answer == 'C' && q3[result].answear_3_a == true)
        {
            printf("Correct!\n");
            continue;
        }

        if(answer == 'D' && q3[result].answear_4_a == true)
        {
            printf("Correct!\n");
            continue;
        }
         else{
            printf("Incorrect! Game over.\n");
            return 0;
         }
        if(i == 3);
        {
            printf("Congratulations! You won 10000 leva!");
        }
    }
    fclose(fp);
    return 0;
}




