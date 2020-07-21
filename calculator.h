#include<string>
#include<stack>
namespace dev {

class Calculator {
public:
    Calculator() = default;
    ~Calculator() = default;

    /**
     * method to evaluate the expression
     */
    double evaluate(std::string expression);

private:

    //Stack to hold the numbers
    std::stack<float> mStack;
    bool IsOperator(char c);   
};

}  // namespace calculator