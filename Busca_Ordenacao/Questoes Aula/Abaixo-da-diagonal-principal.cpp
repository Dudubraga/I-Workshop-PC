int main()
{
    char op;
    vector<vector<double>> arr(12, vector<double> (12));
    
    cin >> op;
    
    for (int i = 0; i < 12; i++){
        for (int j = 0; j < 12; j++){
            cin >> arr[i][j];
        }
    }
    
    int count = 0;
    double sum = 0;
    
    for (int i = 0; i < 12; i++){
        for (int j = i+1; j < 12; j++){
            sum += arr[j][i];
            count++;
        }
    }
    
    
    if (op == 'S'){
        cout << sum << endl;
    }
    else{
        printf("%.1lf\n", sum/count);
    }

    return 0;
}
