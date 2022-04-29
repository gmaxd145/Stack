#ifndef STACK_VECTORSTACK_H
#define STACK_VECTORSTACK_H

#include "Vector.h"
#include "StackImplementation.h"

using ValueType = double;

class VectorStack : public IStackImplementation {
public:
    VectorStack() = default;

    void push(const ValueType& value) override;
    void pop() override;

    [[nodiscard]] const ValueType& top() const override;
    [[nodiscard]] bool isEmpty() const override;
    [[nodiscard]] size_t size() const override;

private:
    Vector<double> _vectorStack;

    void checkSize() const;
};

#endif //STACK_VECTORSTACK_H
