#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* @brief Функция создания новогодней елки 2025 года
* @remarks С Новым 2025 Годом!
*/
void drawTree(const int height);

int main(void) 
{
    int height;

    srand(time(NULL)); 

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
            int decoration = rand() % 6;
            switch(decoration) {
                case 0:
                    printf("*");
                    break;
                case 1:
                    printf("o");
                    break;
                case 2:
                    printf("@");
                    break;
                case 3:
                    printf("+");
                    break;
                case 4:
                    printf("&");
                    break;
                default:
                    printf("*");
            }
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