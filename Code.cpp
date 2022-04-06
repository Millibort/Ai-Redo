#include <iostream>

    int AddTo(void arr1, int add) {;
        const int len = sizeof(arr) + 1;
        int arr2[len];
        for(int i = 0; i < len - 1; i++) {
            arr2[i] = arr1[i];
        }
        arr2[len - 1] = add;
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
            
        }
};

int main() {
    std::cout << "Hello World!";
    return 0;
}