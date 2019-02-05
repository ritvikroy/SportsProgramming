#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the cost function below.
int cost(vector<int> B) 
{
        vector<int> brr(B);
        int n= B.size();

        int sum1=0,sum2=0;
        for(int i=0;i<n;i++)
        {
            int xx;
            cin>>xx;
            brr.push_back(xx);

            if(i%2==0)
                sum1+=xx;
            else sum2+=xx;
        }

        if(sum1<=sum2)
        {
            for(int i=0;i<n;i++)
            {
                if(i%2==0)
                    brr[i]=1;
            }
        }
        else
        {
            for(int i=0;i<n;i++)
            {
                if(i%2==1)
                    brr[i]=1;
            }
        }

        int sum3 =0;
        for(int i=1;i<n;i++)
        {
            sum3 = sum3 + abs(brr[i]-brr[i-1]);
        }
    return sum3;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        string B_temp_temp;
        getline(cin, B_temp_temp);

        vector<string> B_temp = split_string(B_temp_temp);

        vector<int> B(n);

        for (int i = 0; i < n; i++) {
            int B_item = stoi(B_temp[i]);

            B[i] = B_item;
        }

        int result = cost(B);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
