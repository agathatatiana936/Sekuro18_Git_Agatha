#include <iostream>
using namespace std;

class RobotPemadam {
private:
    int jarak;
    string status;

public:
    void inputSensor() {
        cout << "Jarak sensor (cm): ";
        cin >> jarak;
    }

    int getJarak() {
        return jarak;
    }

    void prosesLogika() {
        if (jarak > 20) {
            status = "Maju Mencari Api";
        }
        else if (jarak <= 20 && jarak > 5) {
            status = "UDAH DEKET NIH BRAY";
        }
        else if (jarak <= 5) {
            status = "Posisi Tepat! gas semprot kali ya!";
        }
    }

    void cetakStatus() {
        cout << "[Sensor: " << jarak << " cm] -> Action: [" << status << "]" << endl;
    }
};

int main() {
    RobotPemadam robot;

    while (true) {
        robot.inputSensor();
        if (robot.getJarak() == 67) {
            cout << "Program dihentikan." << endl;
            break;
        }
        robot.prosesLogika();
        robot.cetakStatus();
    }

    return 0;
}