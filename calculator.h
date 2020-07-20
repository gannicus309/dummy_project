#include<string>
#include<stack>
namespace dev {

class Calculator {
public:
    Calculator() = default;
    ~Calculator() = default;

    double evaluate(std::string expression);

private:
    std::stack<float> mStack;
    bool IsOperator(char c);   
};

}  // namespace calculator