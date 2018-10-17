#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int A, B;
    cin >> A >> B;
    cout << std::max(std::max(A + B, A - B), A * B) << endl;
    return 0;
}
