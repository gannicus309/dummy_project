#include "calculator.h"

namespace dev {

bool Calculator::isOperator(char op){
    switch (op){
        case '+':
        case '-':
        case '*':
        case '/':
            return true;
        default:
            return false;
    }
}

double Calculator::evaluate(const std::string& expression)
{
    double ret =0.0;
    float var1,var2;
    var1=var2=0.0;
    for(int index=0;index < expression.length();index++)
    {
        // ignore the spaces
        if (isspace(expression[index])){
            continue;
        }

        // Push to stack, if digit
        if(isdigit(expression[index]))
        {
            std::string digitsStr;

            while (index < expression.size() && ((isdigit(expression[index]) || expression[index] == '.')))
            {
                digitsStr.push_back(expression[index]);
                index++;
            }

            mOperandStack.push(stof(digitsStr));
            // Decrease index as currently points to advanced element
            index--;
        }
        // Check if operator and perform the operation of numbers from stack
        else if (isOperator(expression[index])){
            if (expression[index] == '+'){
                var1 = mOperandStack.top();
                mOperandStack.pop();
                var2 = mOperandStack.top();
                mOperandStack.pop();
                ret = var1+var2;
            }
            if (expression[index] == '-'){
                var1 = mOperandStack.top();
                mOperandStack.pop();
                var2 = mOperandStack.top();
                mOperandStack.pop();
                ret = var2-var1;
            }
            if (expression[index] == '*'){
                var1 = mOperandStack.top();
                mOperandStack.pop();
                var2 = mOperandStack.top();
                mOperandStack.pop();
                ret = var1*var2;
            }
            if (expression[index] == '/'){
                var1 = mOperandStack.top();
                mOperandStack.pop();
                var2 = mOperandStack.top();
                mOperandStack.pop();
                ret = var2/var1;
            }

            // push the final result
            mOperandStack.push(ret);
        }
        }
    // return answer
    return mOperandStack.top();
}

}  // namespace dev