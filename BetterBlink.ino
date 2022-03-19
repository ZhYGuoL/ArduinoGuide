// check README.md to learn more about PWM (analog I/O)
// I/O ports capable of PDM are marked with a "~" [~11, ~10, ~9, ~6, ~5, ~3]

int button = 7; // change to " = 100" to remove off-button feature

int inputPorts[] = {9};
int outputPorts[] = {13};

int inputPortsLength = sizeof(inputPorts) / sizeof(int);
int outputPortsLength = sizeof(outputPorts) / sizeof(int);

void setup() {
    pinMode(button, INPUT);


    for (int i = 0; i < inputPortsLength; i++) {
        pinMode(inputPorts[i], INPUT);
    }

    for (int i = 0; i < outputPortsLength; i++) {
        pinMode(outputPorts[i], OUTPUT);
    }

}

void loop() {
    if (button != 100) {
        int value = digitalRead(button);

        for (int i = 0; i < outputPortsLength; i++)
        {
            pinMode(outputPorts[i], value);
        }
    }
}