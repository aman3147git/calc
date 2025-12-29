
#include<bits/stdc++.h>
using namespace std;

int precedence(char op){
    if(op=='+' || op=='-')return 1;

    if(op=='*' || op=='/')return 2;

    return 0;
}

double applyOperation(double a,double b,char op){
    if(op=='/' && b==0){
        throw runtime_error("Division by zero");
    }
    switch (op){
        case '+': return a+b;
        case '-': return a-b;
        case '*': return a*b;
        case '/': return a/b;
    }
    return 0;
}
double solve(const string& exp){
    stack<double>values;


    stack<char>ops;


    stringstream ss(exp);

    double num;

    char ch;

    while(ss >> ws){
        if(isdigit(ss.peek())){

            ss>>num;

            values.push(num);
        }else{
            ss>>ch;
            while(!ops.empty() && precedence(ops.top()) >= precedence(ch)){
                double b=values.top();

                values.pop();

                double a=values.top();
                values.pop();
                
                values.push(applyOperation(a,b,ops.top()));
                ops.pop();
            }
            ops.push(ch);
        }
    }
    while(!ops.empty()){
        double b=values.top();

        values.pop();

        double a=values.top();

        values.pop();

        values.push(applyOperation(a,b,ops.top()));
        ops.pop();
    }
    return values.top();
}
bool isValidExpression(string& exp){
    for(char ch:exp){

        if(!isdigit(ch) && ch!='+' && ch!='-' && ch!='*' && ch!='/' && ch!=' ')
        return false;
    }
    return true;
}




int main(){
    string exp;

    cout<<"Enter Expression: ";

    getline(cin,exp);
    if(!isValidExpression(exp)){

        cout<<"Invalid character in expression";

        return 0;
    }
 
    try{
        cout<<"Result: "<<solve(exp);

    }catch(const exception& e){

        cout<<"Error: "<<e.what();
    }
    return 0;
}