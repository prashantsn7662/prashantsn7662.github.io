#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *left;
    struct node *right;
};

typedef struct node NODE;

NODE *root = NULL;

void create(int x)
{
    NODE *temp, *prev, *cur;
    temp = (NODE *)malloc(sizeof(NODE));
    temp->left = NULL;
    temp->right = NULL;
    temp->info = x;

    if (root == NULL)
    {
        root = temp;
        return;
    }

    prev = NULL;
    cur = root;

    while (cur != NULL)
    {
        prev = cur;

        if (x < cur->info)
            cur = cur->left;
        else if (x > cur->info)
            cur = cur->right;
        else
        {
            printf("\nDuplicate value not allowed.");
            return;
        }
    }

    if (x < prev->info)
        prev->left = temp;
    else
        prev->right = temp;
}

void preorder(NODE *root)
{
    if (root != NULL)
    {
        printf("%d ", root->info);
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(NODE *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->info);
        inorder(root->right);
    }
}

void postorder(NODE *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->info);
    }
}

int main()
{
    int item, choice;
    while (1)
    {
        printf("\n.....binary search tree...\n\n");
        printf("1. create\n2. preorder\n3. inorder\n4. postorder\n5. exit\n");
        printf("\nenter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nenter element to be inserted: ");
            scanf("%d", &item);
            create(item);
            break;
        case 2:
            preorder(root);
            break;
        case 3:
            inorder(root);
            break;
        case 4:
            postorder(root);
            break;
        default:
            return 0;
        }
    }
}