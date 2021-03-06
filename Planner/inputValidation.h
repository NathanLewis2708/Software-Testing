#ifndef inputValidation_H_
#define inputValidation_H_

int isInt(string a, string b){
    int z = 0;

    cout << "Please enter a number between " + a + " and " + b << endl;
    cin>>z;

    while(cin.fail()){
        cin.clear();
        cin.ignore();
        cout << "Error. Please enter a number between " + a + " and " + b << endl;
        cin>>z;
    }
 return z;
}

int inRange(int a, int b){
    bool goodInput = false;
    int input;
    do{
        input = isInt(to_string(a), to_string(b));
        if(input > a && input < b){
            goodInput = true;
        }
    }while(!goodInput);


    return input;
}

#endif
