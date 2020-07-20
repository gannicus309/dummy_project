#include<string>

namespace dev {

class Calculator {
public:
    Calculator() = default;
    ~Calculator() = default;

    double evaluate(std::string expression);
    
};

}  // namespace calculator