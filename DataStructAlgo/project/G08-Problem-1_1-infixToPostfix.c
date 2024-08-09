#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct nd {
    char c;
    struct nd* next;
} node;

node* top = NULL;
node* head = NULL;
node* tail = NULL;
int count = 0;

void append_list(char ch) {
    node* n = malloc(sizeof(node));
    n->next = NULL;
    if (head == NULL) {
        head = n;
    } else {
        tail->next = n;
    }
    tail = n;
    n->c = ch;
    count++;
}

void print_list() {
    node* current = head;
    while (current != NULL) {
        printf("%c", current->c);
        current = current->next;
        }
    
}

void destroy_list() {
    node* ptr;
    while (count > 0) {
        ptr = head;
        head = head->next;
        count--;
        free(ptr);
    }
}

void push(char ch) {
    node* n = malloc(sizeof(node));
    n->next = top;
    top = n;
    n->c = ch;
}

char pop() {
    char ch;
    node* n;
    n = top;
    top = top->next;
    ch = n->c;
    free(n);
    if (ch != '(') {
        append_list(ch);
    }
    return ch;
}

char stacktop() {
    if (top == NULL) {
        return 0;
    } else {
        return top->c;
    }
}

int checkpr(char temp) {
    int pr;
    if (temp == '^') {
        pr = 5;
    } else if (temp == '*' || temp == '/') {
        pr = 3;
    } else{
        pr = 1;
    }
    return pr;
}

void print_stack() {
    node* reversed_stack = NULL;
    node* temp = top;
    while (temp != NULL) {
        node* n = malloc(sizeof(node));
        n->c = temp->c;
        n->next = reversed_stack;
        reversed_stack = n;
        temp = temp->next;
    }
    while (reversed_stack != NULL) {
        printf("%c", reversed_stack->c);
        reversed_stack = reversed_stack->next;
    }
    free(reversed_stack);
    printf("\t\t");
}

void checkoper(char ck, int step) {
    if (ck == '(') {
        push(ck);
    } else if (ck == ')') {
        while (stacktop() != '(') {
            step++;
            pop();
        }
        pop();
    } else {
        if (checkpr(ck) <= checkpr(stacktop())){ 
            while (checkpr(ck) <= checkpr(stacktop()) && stacktop() != '\0' && stacktop() != '(') {
                step++;
                pop();
                }
        }
        push(ck);
    }
}
void infix_postfix(){
    char ch;
    int step = 1;
    printf("Enter infix: ");
    while ((ch = getchar()) != '\n') {
        if (step == 1) {
            printf("------------------------------------------------------------");
            printf("\n%-10s%-14s%-15s%-20s\n", "STEP", "SYMBOL", "STACK", "OUTPUT");
            printf("------------------------------------------------------------\n");
        }
        if (isdigit(ch) || isalpha(ch)) {
            append_list(ch);
        }else {
            checkoper(ch, step);
        }
        printf(" %-2d%10c\t\t", step, ch);
        print_stack();
        print_list();
        printf("\n");
        step++;
    }
    while (top != NULL) {
        pop();
    }
    printf(" %-2d\t\t\t\t\t", step);
    print_list();
    printf("\n------------------------------------------------------------");
    printf("\nPostfix : ");
    print_list();
    printf("\n------------------------------------------------------------");
    destroy_list();
}

int main() {
    infix_postfix();
    getchar();
    return 0;
}