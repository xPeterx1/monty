#ifndef MONTY
#define MONTY
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;



typedef struct tree
{
        char *function_name;
        int arg;
        int line;
        struct tree *next;
} tree;

extern int line;
tree * func_arg (char **argv);
char *formatting(char *b);
char **tokenaizer (char *string);
int push_check (char *name_function);
void print_tree(tree **stack);
void add_node_stack(stack_t **stack, unsigned int line_number);
char *maketree(tree **stack, char **command);
void print_stack(stack_t **stack, unsigned int line_number);
int functions_execution(tree * command);
int blank_check (char *buffer);
int arg_check(char *argument);
void free_tree (tree *list);
ssize_t _getline(char **lineptr, size_t *n, FILE *stream);
void print_top(stack_t **stack, unsigned int line_number);
#endif