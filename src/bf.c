#include <stdio.h>

#define BF_DATA_ARRAY_SIZE 0x3FFF
#define BF_COMMAND_BUFFER_SIZE 0x3FFF

int main(void)
{
    __INT8_TYPE__ data_array[BF_DATA_ARRAY_SIZE] = {0};
    __INT8_TYPE__ *data_pointer = data_array;
    char bf_command[BF_COMMAND_BUFFER_SIZE] = {0};
    __INT32_TYPE__ bf_command_length = 0;
    __INT8_TYPE__ temp;
    while (scanf("%c", &temp) != EOF)
    {
        switch (temp)
        {
        case '>':
        case '<':
        case '+':
        case '-':
        case '.':
        case ',':
        case '[':
        case ']':
            bf_command[bf_command_length] = temp;
            bf_command_length++;
            break;
        default:
            break;
        }
    }
    __UINT32_TYPE__ jump_position[BF_COMMAND_BUFFER_SIZE] = {0};

    // do '[' and ']' analyses
    {
        __UINT32_TYPE__ stack[30] = {0};
        __INT8_TYPE__ stack_pointer = 0;
        for (__INT32_TYPE__ pos = 0; pos < bf_command_length; pos++)
        {
            int temp_pos;
            switch (bf_command[pos])
            {
            case '[':
                stack[stack_pointer] = pos;
                stack_pointer++;
                break;
            case ']':
                stack_pointer--;
                temp_pos = stack[stack_pointer];
                jump_position[temp_pos] = pos;
                jump_position[pos] = temp_pos;
                break;
            default:
                break;
            }
        }
    }

    __INT32_TYPE__ program_counter = 0x00000000;
    while (program_counter <= bf_command_length)
    {
        switch (bf_command[program_counter])
        {
        case '>':
            data_pointer++;
            break;
        case '<':
            data_pointer--;
            break;
        case '+':
            (*data_pointer)++;
            break;
        case '-':
            (*data_pointer)--;
            break;
        case '.':
            putchar(*data_pointer);
            break;
        case ',':
            *data_pointer = getchar();
            break;
        case '[':
            if (*data_pointer == 0)
            {
                program_counter = jump_position[program_counter];
            }
            break;
        case ']':
            if (*data_pointer != 0)
            {
                program_counter = jump_position[program_counter];
            }
            break;
        default:
            break;
        }
        program_counter++;
    }
    return 0;
}