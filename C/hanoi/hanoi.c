#include <stdio.h>
#include <stdlib.h>

struct _Node {
    // P is a pointer pointing to a dynamic array.
    int *p;
    int length;
};

typedef struct _Node Node;

Node *A;
Node *B;
Node *C;

void show()
{
    // Show the hanoi
    printf("A: ");
    for(int i = A->length - 1; i >= 0; --i)
    {
        printf("%d ", A->p[i]);
    }
    printf("\n");
    printf("B: ");
    for(int i = B->length - 1; i >= 0; --i)
    {
        printf("%d ", B->p[i]);
    }
    printf("\n");
    printf("C: ");
    for(int i = C->length - 1; i >= 0; --i)
    {
        printf("%d ", C->p[i]);
    }
    printf("\n\n");
}

void hanoi(int layer, Node *sour, Node *temp, Node *dest)
{
    if (layer == 1)
    {
        // Add a element to dynamic array
        Node *t = malloc(sizeof(Node));
        t->length = dest->length;
        t->p = dest->p;
        ++dest->length;
        dest->p = malloc(sizeof(int) * dest->length);

        for(int i = 0; i < t->length; ++i)
        {
            dest->p[i + 1] = t->p[i];
        }
        if(t->p)
        {
            free(t->p);
        }
        free(t);

        // Move element from sour to dest
        dest->p[0] = sour->p[0];

        // Remove a element from dynamic array
        t = malloc(sizeof(Node));
        t->length = sour->length;
        t->p = sour->p;
        --sour->length;
        sour->p = malloc(sizeof(int) * sour->length);

        if(sour->length)
        {
            sour->p = malloc(sizeof(int) * sour->length);
        }
        else
        {
            sour->p = 0;
        }
        for(int i = 0; i < sour->length; ++i)
        {
            sour->p[i] = t->p[i + 1];
        }
        if(t->p)
        {
            free(t->p);
        }
        free(t);

        show();
    }
    else
    {
        hanoi(layer - 1, sour, dest, temp);
        hanoi(1, sour, temp, dest);
        hanoi(layer - 1, temp, sour, dest);
    }
}

int main()
{
    int n = 0;
    A = malloc(sizeof(Node));
    B = malloc(sizeof(Node));
    C = malloc(sizeof(Node));
    
    printf("Plz input a number : ");
    scanf("%d", &n);

    A->p = malloc(sizeof(int) * n);
    A->length = n;
    B->p = 0;
    B->length = 0;
    C->p = 0;
    C->length = 0;
    for(int i = 0; i < n; ++i)
    {
        A->p[i] = i + 1;
    }

    show();
    hanoi(n, A, B, C); 

    return 0;
}
