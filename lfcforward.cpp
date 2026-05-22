#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct lfc{
    string player;
    int number;
    int goals;
};

int main(){
    vector<lfc> team;
    team.push_back({"Hugo Ekitike", 22, 20});
    team.push_back({"Alexender Isak", 9, 5});
    team.push_back({"Cody Gakpo", 18, 15});
    team.push_back({"Mohamed Salah", 11, 8});
    team.push_back({"Florian Wirtz", 7, 5});

    cout << "Player Performance" << "\n";

    for(int i = 0; i < team.size(); i++){
        cout << "Player Name : " << team[i].player << "\n";
        cout << "Number : " << team[i].number << "\n";
        cout << "Goals : " << team[i].goals << "\n";
        cout << "____________________" << "\n";
    }

}
