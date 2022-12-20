#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack {
  int top;
  int size;
  char *a;
};

int isEmpty(struct stack *k) { return k->top == -1; }
int isFull(struct stack *k) { return k->top == k->size - 1; }

char peek(struct stack *k) { return k->a[k->top]; }

char pop(struct stack *k) {
  if (isEmpty(k))
    return 'a';

  char ch = k->a[k->top];
  k->top--;
  return (ch);
}

void push(struct stack *k, char oper) {
  if (isFull(k))
    printf("Stack Full!!!!");

  else {
    k->top++;
    k->a[k->top] = oper;
  }
}

// checking for the operand
int checkIfOperand(char ch) {
  return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ||
         (ch >= '0' && ch <= '9');
}

// checking the precedence
int precedence(char ch) {
  switch (ch) {
  case '+':
  case '-':
    return 1;

  case '*':
  case '/':
    return 2;

  case '^':
    return 3;
  }
  return -1;
}

void InfixToPostfix(struct stack *k, char *expr) {
  int i, j;

  for (i = 0, j = -1; expr[i]; ++i) {
    if (checkIfOperand(expr[i]))
      expr[++j] = expr[i];

    else if (expr[i] == '(' || expr[i] == '[' || expr[i] == '{')
      push(k, expr[i]);

    else if (expr[i] == ')' || expr[i] == '}' || expr[i] == ']') {
      if (expr[i] == ')') { // adding to expression until opening pair found
        while (!isEmpty(k) && peek(k) != '(') {
          expr[++j] = pop(k);
        }
        pop(k);
      }

      if (expr[i] == ']') { // adding to expression until opening pair found
        while (!isEmpty(k) && peek(k) != '[') {
          expr[++j] = pop(k);
        }
        pop(k);
      }
      if (expr[i] == '}') { // adding to expression until opening pair found
        while (!isEmpty(k) && peek(k) != '{') {
          expr[++j] = pop(k);
        }
        pop(k);
      }
    } else {
      while (!isEmpty(k) && precedence(expr[i]) <= precedence(peek(k)))
        expr[++j] = pop(k);
      push(k, expr[i]);
    }
  }

  // adding all left elements from stack to exp
  while (!isEmpty(k))
    expr[++j] = pop(k);

  expr[++j] = '\0';
  printf("%s\n", expr);
}

void disp(struct stack k) {
  for (int i = k.top; i < k.size - 1; i--) {
    printf("%s\n", &k.a[i]);
  }
  printf("\n");
}

int main() {
  struct stack s1;
  char inf[50];
  InfixToPostfix(&s1, inf);
  return 0;
}
