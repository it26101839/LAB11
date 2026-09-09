#include <stdio.h>

typedef struct
{
    int width;
    int height;
} rectangle_t;

void updateRectangle(rectangle_t *rect)
{
    printf("Enter width: ");
    scanf("%d", &rect->width);

    printf("Enter height: ");
    scanf("%d", &rect->height);
}

int main(void)
{
    rectangle_t rectangle;

    updateRectangle(&rectangle);

    printf("Updated Rectangle - Width: %d, Height: %d\n",
           rectangle.width, rectangle.height);

    return 0;
}

