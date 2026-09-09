#include <stdio.h>

#define NUM_RATINGS 5

typedef struct
{
    char title[100];
    int ratings[NUM_RATINGS];
} movie_t;

void calculateAverage(movie_t movie)
{
    int sum = 0;

    for (int i = 0; i < NUM_RATINGS; i++)
    {
        sum += movie.ratings[i];
    }

    float average = (float)sum / NUM_RATINGS;

    printf("Average Rating for %s: %.1f\n",
           movie.title, average);
}

int main(void)
{
    movie_t movie;

    printf("Enter movie title: ");
    scanf("%99s", movie.title);

    printf("Enter 5 ratings: ");

    for (int i = 0; i < NUM_RATINGS; i++)
    {
        scanf("%d", &movie.ratings[i]);
    }

    calculateAverage(movie);

    return 0;
}
