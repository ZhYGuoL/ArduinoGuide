for (int i = 0; i < outPortsLen[0]; i++) {
    for (int j = 0; j < outPortsLen[1]; j++) {
        if (outPorts[0][i] == outPorts[1][j]) {
            common[k] = outPorts[0][i]
            k++
        }
    }
}