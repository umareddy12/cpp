//WRITE A PROGRAM FOR CALCULATING THE POINTS TABLE FOR FREE FIRE ESPORTS:c++
#include <iostream>
#include <vector>
using namespace std;

int main() {
//Variable Declarations
    int n;
    cout << "Enter number of teams: ";
    cin >> n;
//Vector Declarations
    vector<string> teamnames;
    vector<pair<int,int> > points;
    vector<int> output;//to store total points and kill points

    for (int i = 0; i < n; i++) {
        string teamname;
        cout << "Enter team name: ";
        cin >> teamname;
        teamnames.push_back(teamname);

        int positionPoints;
        cout << "Enter pp points: ";
        cin >> positionPoints;
        
        int kpp = 0;
        for (int j = 0; j < 4; j++) {
            int scoreofplayers;
            cout << "Enter score of player " << (j + 1) << ": ";
            cin >> scoreofplayers;
            kpp += scoreofplayers;
        }
        points.push_back(make_pair(positionPoints,kpp));

        int total = kpp +positionPoints;

        // Append data to the output vector
        output.push_back(total);
        
    }

    cout << "teamname  \t kill_points \t position_points \t total" << endl;
    for (int i = 0; i < n; i++) {
        cout <<  teamnames[i] << "\t\t" << points[i].second << "\t\t" << points[i].first << "\t\t" << output[i] << endl;
    }
    return 0;
}
