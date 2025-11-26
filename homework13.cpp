#include <iostream>
#include<string>

using namespace std;

class TuringMachine
{
private:
    string tape;
    int state;
public:
    TuringMachine(int s, string t) :state(s), tape(' ' + t) {};
    TuringMachine()
    {
        state = 0;
        tape = "";
    }
    void set_state(int s)
    {
        state = s;
    }
    void set_tape(string tape)
    {
        this->tape = tape;
    }
    string get_tape()
    {
        return tape;
    }
    int get_state()
    {
        return state;
    }
    string work()
    {
        int l = tape.length();
        int i = 0;
        while (tape[i] != '\0')
        {
            switch (state)
            {
            case 0:
                switch (tape[i])
                {
                case '(':
                    i += 1;
                    break;
                case '{':
                    i += 1;
                    state = 1;
                    break;
                case '[':
                    i += 1;
                    state = 2;
                    break;
                case ')':
                    tape[i] = '0';
                    i--;
                    state = 3;
                    break;
                case '0':
                    i ++;
                    break;
                case ' ':
                    i++;
                    break;
                default:
                    return tape;
                }
                break;
            case 1:
                switch (tape[i])
                {
                case '(':
                    i += 1;
                    state = 0;
                    break;
                case '{':
                    i += 1;
                    state = 1;
                    break;
                case '[':
                    i += 1;
                    state = 2;
                    break;
                case '}':
                    tape[i] = '0';
                    i--;
                    state = 4;
                    break;
                case '0':
                    i += 1;
                    break;
                case ' ':
                    i++;
                    break;
                default:
                    return tape;
                }
                break;
            case 2:
                switch (tape[i])
                {
                case '(':
                    i += 1;
                    state = 0;
                    break;
                case '{':
                    i += 1;
                    state = 1;
                    break;
                case '[':
                    i += 1;
                    state = 2;
                    break;
                case ']':
                    tape[i] = '0';
                    i--;
                    state = 5;
                    break;
                case '0':
                    i += 1;
                    break;
                case ' ':
                    i++;
                    break;
                default:
                    return tape;
                }
                break;
            case 3:
                switch (tape[i])
                {
                case '(':
                    tape[i] = '0';
                    i --;
                    state = 0;
                    break;
                case '0':
                    i--;
                    break;
                case ' ':
                    state = 0;
                    i++;
                    break;
                default:
                    return tape;
                }
                break;
            case 4:
                switch (tape[i])
                {
                case '{':
                    tape[i] = '0';
                    i--;
                    state = 0;
                    break;
                case '0':
                    i--;
                    break;
                case ' ':
                    state = 0;
                    i++;
                    break;
                default:
                    return tape;
                }
                break;
            case 5:
                switch (tape[i])
                {
                case '[':
                    tape[i] = '0';
                    i--;
                    state = 0;
                    break;
                case '0':
                    i--;
                    break;
                case ' ':
                    state = 0;
                    i++;
                    break;
                default:
                    return tape;
                }
                break;
            }
        }
        return tape;
    }
};

int main()
{
    string str;
    getline(cin, str);
    TuringMachine TM(0,str);
    str = TM.work();
    int i = 1;
    while (str[i] != 0)
    {
        i++;
        if (str[i] != '0' and str[i] != '\0')
        {
            cout << "false" << '\n';
            return 0;
        }
    }
    cout << "true" << '\n';
    return 0;
}