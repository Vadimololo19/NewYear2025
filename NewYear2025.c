#include <stdio.h>

/**
* @brief Функция создания новогодней елки 2025 года
* @remarks С Новым 2025 Годом!
*/
void drawTree(const int height);

int main(void) 
{
    int height;

    printf("Введите высоту елки: ");
    scanf("%d", &height);

    drawTree(height);

    return 0;
}

void drawTree(const int height) 
{
    int width = height * 2 - 1;

    for (int i = 0; i < height; i++)
    {
        
        for (int j = 0; j < height - i - 1; j++) 
        {
            printf(" ");
        }

        for (int j = 0; j < 2 * i + 1; j++) 
        {
            printf("*");
        }
        printf("\n"); 
    }

    for (int i = 0; i < height / 3; i++) 
    {
        for (int j = 0; j < height - 1; j++) 
        {
            printf(" ");
        }
        printf("|\n");
    }
}