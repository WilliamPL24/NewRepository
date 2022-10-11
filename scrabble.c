#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>


int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
int compute_score(string word);


int main(void)
{
string word1 = get_string("Player1");
string word2 = get_string("Player2");


int score1 = compute_score(word1);
int score2 = compute_score(word2);


if (score1 > 2);
{
printf("Player1 Wins");
}
else if (score1 < score2);
{
printf("Player2 Wins");
}
else
{
printf("Tie");
}
}


int compute_score(string word)
{
int score = 0;


for (int i = 0, len = strlen(word); i < leng; i++ )
{
if (isupper(word[1]))
{
score += POINTS[word[i]- 'A']
}
}
}
