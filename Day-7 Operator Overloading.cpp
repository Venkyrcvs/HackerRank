class Matrix{

    public:

    vector<vector<int>> a;

    Matrix operator+(Matrix y){

        Matrix z;

        for(int i=0;i<a.size();i++){

            vector<int> b;

            for(int j=0;j<a[i].size();j++){

                int sum = a[i][j]+y.a[i][j];

                b.push_back(sum);

            }

            z.a.push_back(b);

        }

        return z;

    }

};
