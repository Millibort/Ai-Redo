#include <iostream>

class neuron {
    public:
        int ins;
        int weight;
        neuron(int inputs, int weigh) {
            ins = inputs;
            weight = weigh;
        }
};

class ai {
    private:
        int ins;
        int hid;
        int out;
        int chng;
        int lay;
        int MakeNeurons() {
            
        }

    public:
        ai(int layers, int inputs, int hidden, int outputs, int change){
            ins = inputs;
            if(ins > 100) {
                std::cout << "Error: too many inputs";
            }
            hid = hidden;
            if(hid > 100) {
                std::cout << "Error: too many hidden nodes";
            }
            out = outputs;
            if(out > 100) {
                std::cout << "Error: too many outputs";
            }
            lay = inputs;
            if(lay > 100) {
                std::cout << "Error: too many nodes";
            }
            chng = inputs;
            if(chng > 100) {
                std::cout << "Error: too much change";
            }
            int test = 10;
            int map[test];
            for(int i = 0; i < sizeof(map); i++) {
                map[i] = false;
            }
        }
};

int main() {
    std::cout << "Hello World!";
    return 0;
}