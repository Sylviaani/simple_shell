#ifndef MAIN_H
#define MAIN_H
void _putchar(char c);
int _strcmp(char *g1, char *g2);
void free_args(char *args[]);
char *_strcpy(char *destination, const char *strings);
void _printf(const char *str);
extern char **environ;
int _strlen(char *s);
char *_strtok(char *string, const char *delim);
void print_env_var(void);
void parse_input(char *line, char **args, int *argc);
void execute_command(char **args, char *err_msg);
void handle_arguments(char **args, char *err_msg);
void run_non_interactive_mode(int argc, char **argv);
void run_interactive_mode(int argc, char **argv);
void exit_command(char **args);
int int_converter(const char *str);
#endif
