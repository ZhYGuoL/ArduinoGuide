// check README.md to learn more about PWM (analog I/O)
// I/O ports capable of PDM are marked with a "~" [~11, ~10, ~9, ~6, ~5, ~3]

int button = 7; // on/off button port
// change to " = 100" to remove off-button feature

int potentiometer = 9; // port of potentiometer

int inputPorts[] = {9, 7}; // declare input ports
int outPorts[3][20] = {
    {13},     // output ports that you want affected by on/off button
    {13, 11}, // output ports that you want affected by potentiometer
    {8}      // other output ports
};

for (int i = 0; i < outPortsLen[0]; i++) {
    for (int j = 0; j < outPortsLen[1]; j++) {
        if (outPorts[0][i] == outPorts[1][j]) {
            common[k] = outPorts[0][i] k++;
        };
    }
}

int inputPortsLen = sizeof(inputPorts) / sizeof(int);
int outPortsLen[] = {
    sizeof(outPorts[0]) / sizeof(int), // number of ports affected by on/off button
    sizeof(outPorts[1]) / sizeof(int), // number of ports affected by on/off button
    sizeof(outPorts[2]) / sizeof(int)  // number of "other" ports
};



void setup() {

    for (int i = 0; i < inputPortsLen; i++) {
        pinMode(inputPorts[i], INPUT);
    }

    for (int i = 0; i < outPortsLen[0]; i++) {
        pinMode(outPorts[0][i], OUTPUT);
    }
    for (int i = 0; i < outPortsLen[1]; i++) {
        pinMode(outPorts[1][i], OUTPUT);
    }
    for (int i = 0; i < outPortsLen[2]; i++) {
        pinMode(outPorts[2][i], OUTPUT);
    }
}

void loop() {
    if (button != 100) {
        int on = digitalRead(button);

        for (int i = 0; i < outPortsLen[1]; i++) {

            pinMode(outPorts[0][i], on);
        };
    };
}