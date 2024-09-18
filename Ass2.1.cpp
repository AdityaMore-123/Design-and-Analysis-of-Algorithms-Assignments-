#include <iostream>
using namespace std;

struct Shop 
{
    int start, end;
};

void bubbleSort(Shop shops[], int N) 
{
    for (int i = 0; i < N - 1; ++i) 
	{
        for (int j = 0; j < N - i - 1; ++j) 
		{
            if (shops[j].end > shops[j + 1].end) 
			{
                // Swap the shops
                Shop temp = shops[j];
                shops[j] = shops[j + 1];
                shops[j + 1] = temp;
            }
        }
    }
}

int main() 
{
    int N, K;

    cout << "Enter the number of shops: ";
    cin >> N;

    int S[N], E[N];
    Shop shops[N];

    cout << "Enter the start and end times of the shops:\n";
    for (int i = 0; i < N; ++i) 
	{
        cin >> S[i] >> E[i];
        shops[i].start = S[i];
        shops[i].end = E[i];
    }

    cout << "Enter the number of persons: ";
    cin >> K;

 
    bubbleSort(shops, N);

    int persons[K] = {0};
    int count = 0;

    // Assign shops to persons optimally
    for (int i = 0; i < N; ++i) 
	{
        for (int j = 0; j < K; ++j) 
		{
            if (persons[j] <= shops[i].start) 
			{
                persons[j] = shops[i].end;
                count++;
                break;
            }
        }
    }

    cout << "Maximum shops visited: " << count << endl;

    return 0;
}
