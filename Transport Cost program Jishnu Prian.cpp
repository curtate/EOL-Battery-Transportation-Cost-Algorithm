#include "iostream"
#include "fstream"
#include "sstream"
#include "cstdlib"
#include "ctime"
using namespace std;

struct Data {
    int id;
    string name;
    double dist;
};

int main() {
    ifstream file("D:\\Study\\Capstone\\data.csv");

    if (!file.is_open()) {
        cout << "Unable to open file" << endl;
        return 1;
    }

    int numLines = 0;
    string tempLine;
    while (getline(file, tempLine)) {
        ++numLines;
    }

    Data* allData = new Data[numLines];

    file.clear();
    file.seekg(0, ios::beg);

    string line;
    int i = 0;
    while (getline(file, line)) {
        stringstream ss(line);

        string field;
        getline(ss, field, ',');
        istringstream(field) >> allData[i].id;

        getline(ss, allData[i].name, ',');

        getline(ss, field, ',');
        istringstream(field) >> allData[i].dist;

        ++i;
    }

    file.close();
    long int up=11516, maha=9685, karna=7593, tn=5934, guju=4731, del=4663, bihar=3622, assam=3198, kerela=2914,odi=2134,os=13163;
    int randomNum;
    int osn[]={11,12,13,14,15,16,17,27,28,29,36,37,38,39,40,41,42,43,44,47,48,49,50,52,53};
    int size= sizeof(osn)/sizeof(osn[0]);
    srand(time(0));
    int randomIndex;
    double cost=0.5;
    long int tcost=0;
    long long int simulation=0;
    for(int j=0;j<100;j++){
    	up=11516, maha=9685, karna=7593, tn=5934, guju=4731, del=4663, bihar=3622, assam=3198, kerela=2914,odi=2134,os=13163;
	
    for(long int i=0;i<69153;i++)
    {
    	if(up!=0)
        {
            randomNum = 30 + rand() % (34 - 30 + 1);
            tcost=allData[randomNum].dist*cost+tcost;
            up--;
        }
        else if(maha!=0)
        {
            randomNum = 18 + rand() % (22 - 18 + 1);
            tcost=allData[randomNum].dist*cost+tcost;
            maha--;
        }
        else if(karna!=0)
        {
            randomNum = 5 + rand() % (8 - 5 + 1);
            tcost=allData[randomNum].dist*cost+tcost;
            karna--;
        }
        else if(tn!=0)
        {
            randomNum = 1 + rand() % (4 - 1 + 1);
            tcost=allData[randomNum].dist*cost+tcost;
            tn--;
        }
        else if(guju!=0)
        {
            randomNum = 23 + rand() % (26 - 23 + 1);
            tcost=allData[randomNum].dist*cost+tcost;
            guju--;
        }
        else if(del!=0)
        {
            tcost=allData[0].dist*cost+tcost;
            del--;
        }
        else if(bihar!=0)
        {
            tcost=allData[35].dist*cost+tcost;
            bihar--;
        }
        else if(assam!=0)
        {
            randomNum = 51 + rand() % (53 - 51 + 1);
            tcost=allData[randomNum].dist*cost+tcost;
            assam--;
        }
        else if(kerela!=0)
        {
            randomNum = 9 + rand() % (10 - 9 + 1);
            tcost=allData[randomNum].dist*cost+tcost;
            kerela--;
        }
        else if(odi!=0)
        {
            randomNum = 45 + rand() % (46 - 45 + 1);
            tcost=allData[randomNum].dist*cost+tcost;
            odi--;
        }
        else if(os!=0)
        {
            randomIndex=rand()%size;
            tcost=allData[randomIndex].dist*cost+tcost;
            os--;
        }
        else
        {
        	continue;
		}
		

	}
	simulation+=tcost;
	cout<<"Cost of transportation for procuring 69153 batteries: Simulation: "<<j+1<<": "<<tcost<<endl;
	tcost=0;
}

	cout<<"The average transportation cost of procuring 69153 batteries after 100 simulations: "<<simulation/100<<endl;

    delete[] allData;

    return 0;
}
