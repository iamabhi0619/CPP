int main(){
    int c;
    cout << "Choice = ";
    cin >> c;
    switch (c){
        case 1:
        int r;
        cout << "R = ";
        cin >> r;
        cout << 2*M_PI*r;
        break;
        case 2:
        int l,b;
        cout << "L = ";
        cin >> l;
        cout << "B = ";
        cin >> b;
        cout << l*b;
        break;
    }
    return 0;
}
