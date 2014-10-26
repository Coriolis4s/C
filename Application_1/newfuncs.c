int add(int number1, int number2)   {
    if (number1<number2)
        return(number1+number2);
    else
        return 101;
}

int subtract(int number1, int number2)  {
    if (number1<number2)
        return 0;
    else
        return(number1-number2);
}

int multiply(int number1, int number2)  {
    return(number1*number2);
}

float divbycent(int *input)   {
    return *input/100;
}

float multbycent(float input)   {
    return input*100;
}
