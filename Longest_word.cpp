#include <iostream>
using namespace std;
int main()
{
    int len = 0;
    int long_len = 0;
    int end_index = 0;
    int i, j;

    char str[100];
    char word[100];

    // read the string
    system("clear");
    cout<<"Enter String ";
    gets(str);

    // iterate through the characters
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            len++;
            continue;
        }

        if (len > long_len)
        {
           long_len=len;
            end_index = i;
        }

        len= 0;
    }

    if (len > long_len)
    {
        long_len = len;
        end_index = i;
    }

    // copy the longest word
    j = 0;
    for (i = end_index - long_len; i < end_index; i++, j++)
    {
        word[j] = str[i];
    }
    word[j] = '\0';

    cout<<"Longest Word is : "<<word;

    return 0;
}