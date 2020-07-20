#include "calculator.h"

namespace dev {

bool Calculator::IsOperator(char c){
    switch (c){
        case '+':
        case '-':
        case '*':
        case '/':
            return true;
        default:
            return false;
    }
}

double Calculator::evaluate(std::string expression) 
{
    double ret =0.0;
    float v1,v2;
    v1=v2=0;
    for(int i=0;i < expression.length();i++)
    {
        if (isspace(expression[i])){
            continue;
        }

        if(isdigit(expression[i]))
        {
            std::string str;

            while (i < expression.size() && ((isdigit(expression[i]) || expression[i] == '.')))
            {
                str.push_back(expression[i]);
                i++;
            }

            mStack.push(stof(str));
            i--;
        }
        else if (IsOperator(expression[i])){
            if (expression[i] == '+'){
                v1 = mStack.top();
                mStack.pop();
                v2 = mStack.top();
                mStack.pop();
                ret = v1+v2;
            }
            if (expression[i] == '-'){
                v1 = mStack.top();
                mStack.pop();
                v2 = mStack.top();
                mStack.pop();
                ret = v2-v1;
            }
            if (expression[i] == '*'){
                v1 = mStack.top();
                mStack.pop();
                v2 = mStack.top();
                mStack.pop();
                ret = v1*v2;
            }
            if (expression[i] == '/'){
                v1 = mStack.top();
                mStack.pop();
                v2 = mStack.top();
                mStack.pop();
                ret = v2/v1;
            }

            mStack.push(ret);
        }
        }
    //Return answer
    return mStack.top();
}

}  // namespace dev