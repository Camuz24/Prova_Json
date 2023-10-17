#include <iostream>
#include <fstream>
#include <jsoncpp/json/json.h>
#include <vector>

using namespace std;

int main() {
    vector<double> initcurr(8);
    vector<double> fincurr(8);
    vector<double> initrangR(8);
    vector<double> initrangL(8);
    // ifstream ifs("alice.json");
    // Json::Reader reader;
    // Json::Value obj;
    // reader.parse(ifs, obj); // reader can also read strings
    // cout << "Book: " << obj["book"].asString() << endl;
    // cout << "Year: " << obj["year"].asUInt() << endl;
    // const Json::Value& characters = obj["characters"]; // array of characters
    // for (int i = 0; i < characters.size(); i++){
    //     cout << "    name: " << characters[i]["name"].asString();
    //     cout << " chapter: " << characters[i]["chapter"].asUInt();
    //     cout << endl;
    // }

    ifstream ifs("CamillaZanco.json");
    Json::Reader reader;
    Json::Value obj;
    reader.parse(ifs, obj); // reader can also read strings
    cout << "Name: " << obj["file"]["name"].asString() << endl;
    cout << "Id: " << obj["file"]["id"].asString() << endl;
    // const Json::Value& r_stim = obj["file"]["r_stim"];
    // for (size_t i = 0; i < 4; i++)
    // {
    //     cout << r_stim[0]["channel"][i]["lbl"].asString()<<endl ;
    // }
   
        // obj["file"]["r_stim"]["ch_1"]["cur_min"].asString();
        // obj["file"]["r_stim"]["ch_2"]["cur_min"].asString();
        // obj["file"]["r_stim"]["ch_3"]["cur_min"].asString();
        // obj["file"]["r_stim"]["ch_4"]["cur_min"].asString();

        // obj["file"]["r_stim"]["ch_1"]["cur_max"].asString();
        // obj["file"]["r_stim"]["ch_2"]["cur_max"].asString();
        // obj["file"]["r_stim"]["ch_3"]["cur_max"].asString();
        // obj["file"]["r_stim"]["ch_4"]["cur_max"].asString();

        // obj["file"]["r_stim"]["ch_1"]["ang_min"].asString();
        // obj["file"]["r_stim"]["ch_2"]["ang_min"].asString();
        // obj["file"]["r_stim"]["ch_3"]["ang_min"].asString();
        // obj["file"]["r_stim"]["ch_4"]["ang_min"].asString();

        // obj["file"]["r_stim"]["ch_1"]["ang_max"].asString();
        // obj["file"]["r_stim"]["ch_2"]["ang_max"].asString();
        // obj["file"]["r_stim"]["ch_3"]["ang_max"].asString();
        // obj["file"]["r_stim"]["ch_4"]["ang_max"].asString();

        // obj["file"]["l_stim"]["ch_1"]["cur_min"].asString();
        // obj["file"]["l_stim"]["ch_2"]["cur_min"].asString();
        // obj["file"]["l_stim"]["ch_3"]["cur_min"].asString();
        // obj["file"]["l_stim"]["ch_4"]["cur_min"].asString();

        // obj["file"]["l_stim"]["ch_1"]["cur_max"].asString();
        // obj["file"]["l_stim"]["ch_2"]["cur_max"].asString();
        // obj["file"]["l_stim"]["ch_3"]["cur_max"].asString();
        // obj["file"]["l_stim"]["ch_4"]["cur_max"].asString();

        // obj["file"]["l_stim"]["ch_1"]["ang_min"].asString();
        // obj["file"]["l_stim"]["ch_2"]["ang_min"].asString();
        // obj["file"]["l_stim"]["ch_3"]["ang_min"].asString();
        // obj["file"]["l_stim"]["ch_4"]["ang_min"].asString();

        // obj["file"]["l_stim"]["ch_1"]["ang_max"].asString();
        // obj["file"]["l_stim"]["ch_2"]["ang_max"].asString();
        // obj["file"]["l_stim"]["ch_3"]["ang_max"].asString();
        // obj["file"]["l_stim"]["ch_4"]["ang_max"].asString();

        initcurr[0] = obj["file"]["l_stim"]["ch_1"]["cur_min"].asDouble();
        initcurr[1] = obj["file"]["l_stim"]["ch_2"]["cur_min"].asDouble();
        initcurr[2] = obj["file"]["l_stim"]["ch_3"]["cur_min"].asDouble();
        initcurr[3] = obj["file"]["l_stim"]["ch_4"]["cur_min"].asDouble();
        initcurr[4] = obj["file"]["r_stim"]["ch_1"]["cur_min"].asDouble();
        initcurr[5] = obj["file"]["r_stim"]["ch_2"]["cur_min"].asDouble();
        initcurr[6] = obj["file"]["r_stim"]["ch_3"]["cur_min"].asDouble();
        initcurr[7] = obj["file"]["r_stim"]["ch_4"]["cur_min"].asDouble();

        fincurr[0] = obj["file"]["l_stim"]["ch_1"]["cur_max"].asDouble();
        fincurr[1] = obj["file"]["l_stim"]["ch_2"]["cur_max"].asDouble();
        fincurr[2] = obj["file"]["l_stim"]["ch_3"]["cur_max"].asDouble();
        fincurr[3] = obj["file"]["l_stim"]["ch_4"]["cur_max"].asDouble();
        fincurr[4] = obj["file"]["r_stim"]["ch_1"]["cur_max"].asDouble();
        fincurr[5] = obj["file"]["r_stim"]["ch_2"]["cur_max"].asDouble();
        fincurr[6] = obj["file"]["r_stim"]["ch_3"]["cur_max"].asDouble();
        fincurr[7] = obj["file"]["r_stim"]["ch_4"]["cur_max"].asDouble();

       // Popola initrangR e initrangL con tutti i valori
        initrangR[0] = obj["file"]["r_stim"]["ch_1"]["ang_min"].asDouble();
        initrangR[1] = obj["file"]["r_stim"]["ch_2"]["ang_min"].asDouble();
        initrangR[2] = obj["file"]["r_stim"]["ch_3"]["ang_min"].asDouble();
        initrangR[3] = obj["file"]["r_stim"]["ch_4"]["ang_min"].asDouble();
        initrangR[4] = obj["file"]["r_stim"]["ch_1"]["ang_max"].asDouble();
        initrangR[5] = obj["file"]["r_stim"]["ch_2"]["ang_max"].asDouble();
        initrangR[6] = obj["file"]["r_stim"]["ch_3"]["ang_max"].asDouble();
        initrangR[7] = obj["file"]["r_stim"]["ch_4"]["ang_max"].asDouble();
        
        initrangL[0] = obj["file"]["l_stim"]["ch_1"]["ang_min"].asDouble();
        initrangL[1] = obj["file"]["l_stim"]["ch_2"]["ang_min"].asDouble();
        initrangL[2] = obj["file"]["l_stim"]["ch_3"]["ang_min"].asDouble();
        initrangL[3] = obj["file"]["l_stim"]["ch_4"]["ang_min"].asDouble();
        initrangL[4] = obj["file"]["l_stim"]["ch_1"]["ang_max"].asDouble();
        initrangL[5] = obj["file"]["l_stim"]["ch_2"]["ang_max"].asDouble();
        initrangL[6] = obj["file"]["l_stim"]["ch_3"]["ang_max"].asDouble();
        initrangL[7] = obj["file"]["l_stim"]["ch_4"]["ang_max"].asDouble();


        cout << "\nInitial currents are: " << initcurr[0] << " " << initcurr[1] << " " << initcurr[2] << " " << initcurr[3] << " " << initcurr[4] << " " << initcurr[5] << " " << initcurr[6] << " " << initcurr[7] << endl;
         cout << "\nFinal currents are: " << fincurr[0] << " " << fincurr[1] << " " << fincurr[2] << " " << fincurr[3] << " " << fincurr[4] << " " << fincurr[5] << " " << fincurr[6] << " " << fincurr[7] << endl;

        //  cout << "\nInitial ranges left are: " << initialRanges_left[0] << " " << initialRanges_left[1] << " " << initialRanges_left[2] << " " << initialRanges_left[3] << " " << initialRanges_left[4] << " " << initialRanges_left[5] << " " << initialRanges_left[6] << " " << initialRanges_left[7] << endl;
        //  cout << "\nInitial ranges right are: " << initialRanges_right[0] << " " << initialRanges_right[1] << " " << initialRanges_right[2] << " " << initialRanges_right[3] << " " << initialRanges_right[4] << " " << initialRanges_right[5] << " " << initialRanges_right[6] << " " << initialRanges_right[7] << endl;
        cout << "\nInitial ranges left are:\n " <<"Quad: "<< initrangL[0] << "-" << initrangL[4] << "  Glut:" << initrangL[1] << "-" << initrangL[5] << "  Bic. Fem:" << initrangL[2] << "-" << initrangL[6] << "  Tib A: " << initrangL[3] << "-" << initrangL[7] << endl;
        cout << "\nInitial ranges right are:\n " <<"Quad: "<< initrangR[0] << "-" << initrangR[4] << "  Glut:" << initrangR[1] << "-" << initrangR[5] << "  Bic. Fem:" << initrangR[2] << "-" << initrangR[6] << "  Tib A: " << initrangR[3] << "-" << initrangR[7] << endl;
        







       




       
    
    
    
}