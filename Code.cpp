#include <iostream>

class memory {
    public:
        int in;
        int act;
        int output;
        memory(int input, int activate) {
            int in = input;
            int act = activate;

        }
}

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
        ai(int tests){
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
            
        }
};

int main() {
    int test = ai()
    return 0;
}