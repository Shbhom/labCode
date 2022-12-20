#include <stdio.h>
#include <stdlib.h>

struct node {
  struct node *left;
  int data;
  struct node *right;
} * root;

void inOrder(struct node *root) {
  if (root != NULL) {
    inOrder(root->left);
    printf("%d\n", root->data);
    inOrder(root->right);
  }
}

void preorder(struct node *root) {
  if (root != NULL) {
    printf("%d\n", root->data);
    preorder(root->left);
    preorder(root->right);
  }
}

void postorder(struct node *root) {
  if (root != NULL) {
    postorder(root->left);
    postorder(root->right);
    printf("%d\n", root->data);
  }
}

struct node *createNode(int data) {
  struct node *n;
  n = (struct node *)malloc(sizeof(struct node));
  n->data = data;
  n->left = NULL;
  n->right = NULL;
  return n;
}
void insert(struct node *root, int key) {
  struct node *prev = NULL;
  while (root != NULL) {
    prev = root;
    if (key == root->data) {
      printf("Cannot insert %d, already in BST", key);
      return;
    } else if (key < root->data) {
      root = root->left;
    } else {
      root = root->right;
    }
  }
  struct node *t = createNode(key);
  if (key < prev->data) {
    prev->left = t;
  } else {
    prev->right = t;
  }
}

int highest(struct node *root) {
  struct node *current = root;
  while (current->right != NULL) {
    current = current->right;
  }
  return (current->data);
}

int lowest(struct node *root) {
  struct node *current = root;
  while (current->left != NULL) {
    current = current->left;
  }
  return (current->data);
}

int tree_height(struct node *root) {
  if (root == NULL)
    return 0;
  else {
    int lH = tree_height(root->left);
    int rH = tree_height(root->right);
    if (lH >= rH)
      return lH + 1;
    else
      return rH + 1;
  }
}

int main() {
  root = createNode(5);
  int n;
  int key;
  while (1) {
    printf("Available Choices :\n");
    printf("1: insert\n");
    printf("2: inOrder\n");
    printf("3: preorder\n");
    printf("4: postorder\n");
    printf("5: contents in increasing order\n");
    printf("6: max element\n");
    printf("7: min element\n");
    printf("8: tree_height\n");
    printf("9: exit\n");
    printf("Enter your choice :\n");
    scanf("%d", &n);
    switch (n) {
    case 1:
      printf("Enter the number you wanted to insert :\n");
      scanf("%d", &key);
      insert(root, key);
      break;
    case 2:
      printf("inorder :\n");
      inOrder(root);
      break;
    case 3:
      printf("preorder :\n");
      preorder(root);
      break;
    case 4:
      printf("postorder :\n");
      postorder(root);
      break;
    case 5:
      printf("contents in increasing order");
      inOrder(root);
      break;
    case 6:
      printf("max element : ");
      printf("%d\n", highest(root));
      break;
    case 7:
      printf("min element : ");
      printf("%d", lowest(root));
      break;
    case 8:
      printf("hight of the tree : ");
      tree_height(root);
      break;
    case 9:
      exit(0);
      break;
    default:
      printf("Enter a valid choice");
      break;
    }
  }
  insert(root, 8);
  insert(root, 4);
  insert(root, 1);
  printf("contents in increasing order :\n");
  inOrder(root);
  printf("\n");
  printf("%d\n", highest(root));
  printf("\n");
  printf("%d\n", lowest(root));
  printf("\n");
  printf("%d\n", tree_height(root));
  return 0;
}
