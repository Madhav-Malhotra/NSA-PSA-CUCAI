/**
 * @author: Akira Yoshiyama
 * @date: 26/02/2024
 * @description: Positive Selection Algorithm for Network Attack Detection with 100 detectors
*/

/**
 * Params to be hardcoded by user:
 *      Class Detectors: num_detectors, num_features, array_ capacity, array_
 *      float* scaler(): mean, std_dev, mean length, std_dev length
 *      bool psa(): radius
 *      int main(): dummy attack vector length
*/

/** 
 * @brief       I       nterface for detectors array
*/
class Detectors {
    public:
        Detectors();
        ~Detectors();
        float get(short, short);
        unsigned short get_num_dtrs() {
            return num_detectors;
        }
        unsigned short get_num_feats() {
            return num_features;
        }

    private:
        // Harcoded
        unsigned short num_detectors{100};
        unsigned short num_features{5};
        // num_detectors * num_features
        float detectorsArray_[500]{4.914, 2.088, 3.605, 2.67, 3.34, -4.9, 1.903, 0.1746, 3.197, 0.02258, -4.9, 2.145, 1.184, 3.021, 1.252, 4.914, 0.826, 3.998, 1.149, 5.445, 4.914, 4.688, 3.477, 6.227, 5.242, 4.914, 0.4656, 3.684, 1.55, 5.445, 4.914, -0.000413, 3.998, 0.0764, 5.445, 4.914, -0.06238, 0.2607, 0.946, 0.09717, -4.9, 9.26, 3.625, 12.54, 2.328, -4.9, 1.536, -0.1884, 2.133, -0.224, -4.9, -0.0847, 0.381, 0.514, 0.05667, -4.9, 1.01, 4.74, 2.225, 5.445, -4.9, 3.596, 5.61, 4.895, 4.97, -4.9, 0.8384, 2.86, 1.217, 2.045, -4.9, 0.5464, 0.6846, 0.887, 1.454, 4.914, 1.63, 3.582, 2.297, 8.28, 4.914, -0.1653, 0.1031, -0.11475, 0.1411, 4.914, -0.1073, 4.68, -0.05307, 2.611, -4.9, 2.24, -0.1884, 3.033, -0.224, -4.9, 3.734, 1.051, 4.734, 1.963, -4.9, -0.02942, 4.09, 0.1936, 4.88, -4.9, 4.35, 3.482, 5.703, 3.775, -4.9, -0.03528, 5.117, 0.02708, 3.746, 4.914, 4.188, 2.443, 5.742, 11.445, 4.914, 1.259, -0.1548, 1.803, -0.1276, 4.914, 5.72, 5.13, 7.88, 5.445, -4.9, 2.527, -0.1884, 3.512, -0.224, 4.914, -0.1648, 1.009, -0.1086, 3.16, 4.914, 0.5996, 3.236, 0.755, 2.611, -4.9, 0.01633, 3.074, 1.048, 2.533, 4.914, 1.311, -0.1285, 1.735, -0.04773, 4.914, -0.03735, 0.81, 1.184, 0.4246, -4.9, -0.1528, 0.2306, -0.0315, 0.09717, 4.914, 3.549, -0.1038, 4.996, -0.03128, 4.914, 1.224, 0.06866, 1.89, 0.1885, -4.9, -0.1454, 0.33, 0.01167, 0.05862, 4.914, 0.11523, 1.625, 2.166, 3.947, -4.9, -0.1428, 0.7017, 0.002422, 0.2676, -4.9, 3.172, 2.068, 4.664, 2.127, 4.914, 2.137, 1.253, 3.09, 2.34, -4.9, 0.906, -0.1794, 2.057, -0.2063, -4.9, 0.79, 5.293, 0.9707, 14.234, -4.9, 5.906, -0.1671, 7.51, -0.2046, 4.914, -0.0945, 0.4626, 0.5356, 0.448, -4.9, -0.1087, 2.584, 0.2029, 2.611, -4.9, 0.3984, 0.1691, 0.7427, 0.1497, -4.9, 0.8506, -0.2189, 1.248, -0.2063, 4.914, -0.1626, 0.7812, -0.11786, 0.3738, 4.914, 2.766, 3.158, 3.47, 5.445, -4.9, 3.002, 0.689, 4.35, 1.477, -4.9, -0.05414, 0.5713, 0.7056, 0.2362, 4.914, 4.207, 2.328, 5.89, 5.445, 4.914, -0.0736, -0.1497, 0.6006, -0.04773, 4.914, -0.12384, 0.631, 0.2183, 1.376, -4.9, 4.59, 0.826, 6.004, 1.029, 4.914, -0.1646, 0.564, -0.11475, 0.573, -4.9, -0.1631, 0.237, -0.09625, 0.03256, 4.914, -0.00673, 1.907, 1.294, 4.688, 4.914, -0.0988, -0.02786, -0.10547, 0.2578, 4.914, 0.5513, 4.367, 0.9673, 3.746, 4.914, 1.917, 2.594, 2.666, 2.611, -4.9, -0.11993, 0.7983, 0.2213, 0.5103, 4.914, 5.887, 4.203, 8.055, 8.28, -4.9, 1.646, 1.957, 2.719, 2.63, 4.914, 0.5254, 3.57, 0.8906, 4.04, -4.9, 4.03, 0.1632, 5.914, 0.06274, 4.914, 3.014, 2.197, 4.125, 4.082, -4.9, 0.879, -0.1693, 1.353, -0.1887, -4.9, 2.502, 5.184, 3.56, 4.88, -4.9, -0.09644, 2.209, 0.357, 3.008, -4.9, -0.12396, 0.5, 0.1473, 0.2108, -4.9, 7.414, -0.1884, 10.85, -0.224, 4.914, 2.38, 0.0581, 3.178, 0.09717, -4.9, -0.05246, 0.56, 0.98, 0.1849, 4.914, -0.138, -0.1682, 0.1504, -0.002289, 4.914, 0.10406, 4.723, 0.4988, 2.611, -4.9, -0.12134, 0.1002, 0.3015, 0.0318, -4.9, -0.1103, 0.0464, 0.4248, -0.02187, -4.9, -0.0853, 2.777, 0.702, 4.504, -4.9, 1.907, -0.1884, 2.398, -0.224, -4.9, 4.906, 4.848, 7.305, 2.896, 4.914, -0.1401, 0.3953, 0.07336, 0.346, -4.9, 2.957, 0.619, 4.62, 1.032, -4.9, 6.0, 1.999, 8.05, 1.761, 4.914, 0.1338, 0.1738, 2.627, 0.09717, 4.914, 4.246, 0.7505, 6.254, 2.572, 4.914, 0.3625, 2.014, 0.5083, 5.445, -4.9, 0.5713, 1.919, 1.821, 1.479, 4.914, 1.945, 0.833, 5.836, 0.905, -4.9, -0.1422, 0.001517, 0.1381, -0.0646, -4.9, -0.1464, 0.1967, 0.03326, 0.0874, 4.914, 1.014, 5.69, 1.671, 8.164, 4.914, 1.283, 0.589, 2.395, 1.323, -4.9, 0.5425, 5.215, 0.5635, 4.88, -4.9, 3.791, 5.55, 5.23, 5.445, 4.914, 0.03433, 4.742, 0.135, 5.445, -4.9, -0.0501, -0.05276, 1.211, 0.12225, -4.9, 12.12, -0.1884, 15.734, -0.224, -4.9, 0.77, 3.951, 1.735, 3.197, 4.914, 0.829, 3.717, 1.026, 2.611};
};

/**
 * @brief               Empty constructor for Detectors class.
*/
Detectors::Detectors() {
}

/**
 * @brief               Destructor for Detectors class. Sets num_detectors = num_features = 0.
*/
Detectors::~Detectors() {
    num_detectors = 0;
    num_features = 0;
}

/**
 * @brief               Read one feature value from one detector.
 * @param detector      Index of detector. Range: 0 to num_detectors - 1.
 * @param feature       Index of feature. Range: 0 to num_features - 1.
 * @returns             Float of feature
*/
float Detectors::get(short detector, short feature) {
    return detectorsArray_[detector*num_features + feature];
}

/**
 * @brief               Scales all features of incoming network request. Modelled after sklearn StandardScaler().
 * @param request       Array of features of incoming network request.
 * @param cap           Capacity of network request feature array.
 * @returns             Scaled features array
*/
float* scaler(float request[], short cap) {

    // Hardcoded Mean and Standard Deviation
    // Get from StandardScaler() in Kaggle notebook
    double mean[5]{float(8.3118432e+07), 7.6073336e+04, 1.3107451e+01, 3.8214298e+01, 1.8036850e+02};
    double std_dev[5]{2.8815409e+14, 2.1014374e+11, 7.3861504e+01, 1.0518260e+05, 2.6076267e+05};  

    for (short i{0}; i < cap; i++) {
        request[i] = (request[i] - ((float) mean[i]))/ ((float) std_dev[i]);
    }

    return request;
}


/**
 * @brief              Absolute value function
*/
float abs(float x) {
    if (x < 0) {
        return -x;
    }
    return x;
}

/**
 * @brief               Predicts if cyberattack or benign
 * @param attack        Feature array from incoming network request
 * @param D             Class holding detectors
 * @returns             True if Attack
*/
bool psa(float attack[], Detectors D) {
    float r{3.5}; //Hardcoded radius value
    float dist{0.0};
    
    float* scaled_attack = scaler(attack, D.get_num_feats());
    for (unsigned int d{0}; d < D.get_num_dtrs(); d++) {
        dist = 0.0;
        for (short f{0}; f < D.get_num_feats(); f++) {
            dist += abs(scaled_attack[f] - D.get(d, f));
        }
        if (dist < r) {
            return false;
        }
    }

    return true;
}

/**
 * @brief               Tests PSA on dummy attack vector
*/
int main() {

    while (true) {
        Detectors D;    
    
        float dummy_attack_vector[5];
        for (short i{0}; i < D.get_num_feats(); i++) {
            dummy_attack_vector[i] = (float) i;
        }

        bool is_attack = psa(dummy_attack_vector, D);

    }

    return 0;
}