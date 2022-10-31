#include <stdio.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *left, *right;
};
struct node *root = NULL;

int options()
{
    int choice;
    printf("\n1.Insert Node\t2.Delete Node\t3.Display\t4.Exit\nEnter the choice: ");
    scanf("%d", &choice);
    return choice;
}

struct node *create()
{
    struct node *newnode;
    newnode = (struct node *)(malloc(sizeof(struct node)));
    int number;
    printf("Enter the data to be inserted : ");
    scanf("%d", &number);
    newnode->data = number;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

struct node *insert(struct node *root, struct node *newnode)
{

    if (root == NULL)
    {
        return newnode;
    }

    if (newnode->data < root->data)
    {
        root->left = insert(root->left, newnode);
    }
    if (newnode->data > root->data)
    {
        root->right = insert(root->right, newnode);
    }

    return root;
}

struct node *minValue(struct node *root)
{
    if (root->left == NULL)
    {
        return root;
    }
    else
    {
        return minValue(root->left);
    }
}

struct node *deleteNode(struct node *root, int key)
{
    if (root == NULL)
        return root;

    if (key < root->data)
        root->left = deleteNode(root->left, key);

    else if (key > root->data)
        root->right = deleteNode(root->right, key);

    // root to be deleted
    else
    {
        // node with only one child or no child
        if (root->left == NULL)
        {
            struct node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            struct node *temp = root->left;
            free(root);
            return temp;
        }

        // node with two children inorder successor
        struct node *temp = minValue(root->right);

        // Copy the data
        root->data = temp->data;

        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}
void display(struct node *starter) // this is inorder traversal
{

    if (root == NULL)
    {
        printf("Tree is EMpty\n");
        return;
    }
    if (starter != NULL)
    {
        display(starter->left);
        printf("%d ", starter->data);
        display(starter->right);
    }
}

int main()
{
    printf("Welcome to binary tree DS Operations\n");
    int key;

    do
    {
        switch (options())
        {
        case 1:
            root = insert(root, create());
            break;

        case 2:

            printf("Enter the value to delete : ");
            scanf("%d", &key);
            root = deleteNode(root, key);
            break;

        case 3:
            display(root);
            break;

        case 4:
            exit(0);
            break;
        }

    } while (1);

    return 0;
}