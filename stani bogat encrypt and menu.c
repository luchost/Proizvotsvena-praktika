#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <stdbool.h>
#include <stdint.h>
#include<conio.h>
#include<math.h>

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
    printf("\t Stani bogat \n");
    printf("%s\n", current_question.question);
    printf("A.%s\n", current_question.answear_1);
    printf("B.%s\n", current_question.answear_2);
    printf("C.%s\n", current_question.answear_3);
    printf("D.%s\n", current_question.answear_4);
    printf("\t jokeri \n");
    printf("\t 1.50/50 \n");
    printf("\t 2.pomosht ot publicata \n");
    printf("\t 3.obadi se na priqtel\n");
    printf(" \n \nza pravlen otgovor postavi bukvat pred otgovora a za zhoker cifrata pred nego : \n");
}
int prime(long int pr) {

    int i,j;

    j = sqrt(pr);

    for (i = 2; i <= j; i++) {

        if (pr % i == 0)

            return 0;

    }

    return pr;

}
long long int find_e(long long int lamda)
{
    long long int temp;
    temp = rand() % lamda;
    if (temp != 0 && prime(temp) != 0)
        return temp;

}
long long int find_d(long long int e,long long int lamda) 
{
    long long int d;
    d = 1 / e % lamda;
}
void encrypt_file(char* question,long long int e)
{
    long long int msg1[100] ,msg2[100];
    for (int i = 0; question[i] != NULL; i++)
    {
        msg1[i] = question[i];
        msg2[i] = question[i];
    }
    for (int j; j != e; j++)
    {
        for (int i = 0; question[i] != NULL; i++)
        {
            msg1[i] = msg1[i] * msg2[i];

        }         
    }
    return msg1;
}
void decrypt_file(long long int* c,long long int d)
{
    long long int msg1[100];
    for (int i = 0; c[i] != NULL; i++)
    {
        msg1[i] = c[i];
    }
    for (int j; j != d; j++)
    {
        for (int i = 0; c[i] != NULL; i++)
        {
            msg1[i] = msg1[i] * c[i];

        }
    }
    return msg1;
}

int main()
{   
    struct Question questions[40];
    questions[0].question =  "tupli si ili da" ;
    questions[0].answear_1 = "da";
    questions[0].answear_2 = "mozhe bi";
    questions[0].answear_3 = "sus sigurnost";
    questions[0].answear_4 = "ne";
    questions[0].answear_1_a = true;
    questions[0].answear_2_a = false;
    questions[0].answear_3_a = false;
    questions[0].answear_4_a = false;
    

    print_menu(questions[0]);
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

    q1[1].question = "what material do potters use to make their wares";
    q1[1].answear_1 = "clay";
    q1[1].answear_2 = "bronze";
    q1[1].answear_3 = "marble";
    q1[1].answear_4 = "stone";
    q1[1].answear_1_a = true;
    q1[1].answear_2_a = false;
    q1[1].answear_3_a = false;
    q1[1].answear_4_a = false;

    q1[2].question = "which Italian dish does not contain tomatoes";
    q1[2].answear_1 = "Pizza Margarita";
    q1[2].answear_2 = "Lasagna bolozene";
    q1[2].answear_3 = "carpese salad";
    q1[2].answear_4 = "ne";
    q1[2].answear_1_a = true;
    q1[2].answear_2_a = false;
    q1[2].answear_3_a = false;
    q1[2].answear_4_a = false;

    q1[3].question = "what tourists are illegal to ride donkeys on the island of Santorini";
    q1[3].answear_1 = "da";
    q1[3].answear_2 = "mozhe bi";
    q1[3].answear_3 = "sus sigurnost";
    q1[3].answear_4 = "ne";
    q1[3].answear_1_a = true;
    q1[3].answear_2_a = false;
    q1[3].answear_3_a = false;
    q1[3].answear_4_a = false;

    q1[4].question = "tupli si ili da";
    q1[4].answear_1 = "da";
    q1[4].answear_2 = "mozhe bi";
    q1[4].answear_3 = "sus sigurnost";
    q1[4].answear_4 = "ne";
    q1[4].answear_1_a = true;
    q1[4].answear_2_a = false;
    q1[4].answear_3_a = false;
    q1[4].answear_4_a = false;

    q1[5].question = "tupli si ili da";
    q1[5].answear_1 = "da";
    q1[5].answear_2 = "mozhe bi";
    q1[5].answear_3 = "sus sigurnost";
    q1[5].answear_4 = "ne";
    q1[5].answear_1_a = true;
    q1[5].answear_2_a = false;
    q1[5].answear_3_a = false;
    q1[5].answear_4_a = false;

    q2[0].question = "tupli si ili da";
    q2[0].answear_1 = "da";
    q2[0].answear_2 = "mozhe bi";
    q2[0].answear_3 = "sus sigurnost";
    q2[0].answear_4 = "ne";
    q2[0].answear_1_a = true;
    q2[0].answear_2_a = false;
    q2[0].answear_3_a = false;
    q2[0].answear_4_a = false;

    q2[1].question = "tupli si ili da";
    q2[1].answear_1 = "da";
    q2[1].answear_2 = "mozhe bi";
    q2[1].answear_3 = "sus sigurnost";
    q2[1].answear_4 = "ne";
    q2[1].answear_1_a = true;
    q2[1].answear_2_a = false;
    q2[1].answear_3_a = false;
    q2[1].answear_4_a = false;

    q2[2].question = "tupli si ili da";
    q2[2].answear_1 = "da";
    q2[2].answear_2 = "mozhe bi";
    q2[2].answear_3 = "sus sigurnost";
    q2[2].answear_4 = "ne";
    q2[2].answear_1_a = true;
    q2[2].answear_2_a = false;
    q2[2].answear_3_a = false;
    q2[2].answear_4_a = false;

    q1[3].question = "tupli si ili da";
    q2[3].answear_1 = "da";
    q2[3].answear_2 = "mozhe bi";
    q2[3].answear_3 = "sus sigurnost";
    q2[3].answear_4 = "ne";
    q2[3].answear_1_a = true;
    q2[3].answear_2_a = false;
    q2[3].answear_3_a = false;
    q2[3].answear_4_a = false;

    q2[4].question = "tupli si ili da";
    q2[4].answear_1 = "da";
    q2[4].answear_2 = "mozhe bi";
    q2[4].answear_3 = "sus sigurnost";
    q2[4].answear_4 = "ne";
    q2[4].answear_1_a = true;
    q2[4].answear_2_a = false;
    q2[4].answear_3_a = false;
    q2[4].answear_4_a = false;

    q2[5].question = "tupli si ili da";
    q2[5].answear_1 = "da";
    q2[5].answear_2 = "mozhe bi";
    q2[5].answear_3 = "sus sigurnost";
    q2[5].answear_4 = "ne";
    q2[5].answear_1_a = true;
    q2[5].answear_2_a = false;
    q2[5].answear_3_a = false;
    q2[5].answear_4_a = false;

    q3[0].question = "tupli si ili da";
    q3[0].answear_1 = "da";
    q3[0].answear_2 = "mozhe bi";
    q3[0].answear_3 = "sus sigurnost";
    q3[0].answear_4 = "ne";
    q3[0].answear_1_a = true;
    q3[0].answear_2_a = false;
    q3[0].answear_3_a = false;
    q3[0].answear_4_a = false;

    q3[1].question = "tupli si ili da";
    q3[1].answear_1 = "da";
    q3[1].answear_2 = "mozhe bi";
    q3[1].answear_3 = "sus sigurnost";
    q3[1].answear_4 = "ne";
    q3[1].answear_1_a = true;
    q3[1].answear_2_a = false;
    q3[1].answear_3_a = false;
    q3[1].answear_4_a = false;

    q3[2].question = "tupli si ili da";
    q3[2].answear_1 = "da";
    q3[2].answear_2 = "mozhe bi";
    q3[2].answear_3 = "sus sigurnost";
    q3[2].answear_4 = "ne";
    q3[2].answear_1_a = true;
    q3[2].answear_2_a = false;
    q3[2].answear_3_a = false;
    q3[2].answear_4_a = false;

    q3[3].question = "tupli si ili da";
    q3[3].answear_1 = "da";
    q3[3].answear_2 = "mozhe bi";
    q3[3].answear_3 = "sus sigurnost";
    q3[3].answear_4 = "ne";
    q3[3].answear_1_a = true;
    q3[3].answear_2_a = false;
    q3[3].answear_3_a = false;
    q3[3].answear_4_a = false;

    q3[4].question = "tupli si ili da";
    q3[4].answear_1 = "da";
    q3[4].answear_2 = "mozhe bi";
    q3[4].answear_3 = "sus sigurnost";
    q3[4].answear_4 = "ne";
    q3[4].answear_1_a = true;
    q3[4].answear_2_a = false;
    q3[4].answear_3_a = false;
    q3[4].answear_4_a = false;

    q3[5].question = "tupli si ili da";
    q3[5].answear_1 = "da";
    q3[5].answear_2 = "mozhe bi";
    q3[5].answear_3 = "sus sigurnost";
    q3[5].answear_4 = "ne";
    q3[5].answear_1_a = true;
    q3[5].answear_2_a = false;
    q3[5].answear_3_a = false;
    q3[5].answear_4_a = false;

    q4[0].question = "tupli si ili da";
    q4[0].answear_1 = "da";
    q4[0].answear_2 = "mozhe bi";
    q4[0].answear_3 = "sus sigurnost";
    q4[0].answear_4 = "ne";
    q4[0].answear_1_a = true;
    q4[0].answear_2_a = false;
    q4[0].answear_3_a = false;
    q4[0].answear_4_a = false;

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
    }
    for (i = 0; i < 3; i++)
    {
        result = Randoms(min, max, count, random);
        fwrite(&q2[result], sizeof(struct Question), 1, fp);
    }
    for (i = 0; i < 3; i++)
    {
        result = Randoms(min, max, count, random);
        fwrite(&q3[result], sizeof(struct Question), 1, fp);
    }
    fwrite(&q4[0], sizeof(struct Question), 1, fp);
    fclose(fp);
    return 0;
}




