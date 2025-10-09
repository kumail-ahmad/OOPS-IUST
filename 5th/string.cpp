#include <iostream>
using namespace std;

int strLength(char str[])
{
    int length = 0;
    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}
void strRev(char str[])
{
    int length = strLength(str);
    for (int i = length; i >= 0; i--)
    {
        cout << str[i];
    }
}
void strConcat(char str1[], char str2[])
{
    char result[200];

    int i = 0, j = 0;
    while (str1[i] != '\0')
    {
        result[i] = str1[i];
        i++;
    }
    while (str2[j] != '\0')
    {
        result[i++] = str2[j++];
    }
    result[i] = '\0';
    cout << result << endl;
}

void strFreq(char str[], char ch)
{
    int count = 0, i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == ch)
        {
            count++;
        }
        i++;
    }
    cout << count << endl;
}
void subStr(char str[], int start, int end)
{
    for (int i = start; i < end && str[i] != '\0'; i++)
    {
        cout << str[i];
    }
    cout << endl;
}

int main()
{
    char str1[100], str2[100], result[200], ch;
    int choice;

    cout << "Enter the first string: " << endl;
    cin >> str1;

    cout << "1:length \n 2:reverse \n 3: concat \n 4: concat\n 5: frequency \n 6. subString \n"
         << endl;

    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "Length is: " << strLength(str1) << endl;
        break;

    case 2:
        cout << "Reversed string is: ";
        strRev(str1);
        cout << endl;
        break;

    case 3:
        cout << "Enter the second string: ";
        cin >> str2;
        break;

    case 4:
        cout << "Concatenated string is: ";
        strConcat(str1, str2);
        break;

    case 5:
        cout << "Enter character to find frequency: ";
        cin >> ch;
        strFreq(str1, ch);
        break;
    case 6:
        char start, end;
        cout << "Enter start and end :";
        cin >> start >> end;
        cout << "substring is : ";
        subStr(str1, start, end);

    default:
        cout << "Invalid choice!" << endl;
    }

    return 0;
}