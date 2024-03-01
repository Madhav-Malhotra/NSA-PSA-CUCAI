### Model Profiling
This contains scripts used to measure the memory usage and inference time of the models

## Folders
Each folder contains a `one_percent`, `five_percent`, and `ten_percent` folder which represents the dataset size of which the model was trained on.
Each subfolder contains an executable script `script_name`, its C++ code `script_name.cc`, and the memory statistics `memstats.csv`
This Folder is organized as follows:
- `PSA`: script and memory statistics for Positive Selection Algorithm models
- `NSA`: script and memory statistics for Negative Selection Algorithm models
- `LogisticRegression`: script and memory statistics for Logistic Regression models
- `LinearSVM`: script and memory statistics for Linear Support Vector Machine models
- `RandomForest`: script and memory statistics for Random Forest models
- `XGBoost`: script and memory statistics for eXtreme Gradient Boosting models

## Replication
models: PSA, NSA, LogisticReggression, and LinearSVM
1. Open a terminal and cd to a subfolder of choice
2. Compile the script
`g++ -Wall {script_name}.cc -o {script_name}.o -std=c++11`
3. Run the executable script
`./{script_name}.o`
4. On a new terminal run top, and get the first PID
`top`
5. Open a new terminal and run memprofiler.py
`python3 memprofiler.py -o {relative path}/memstats.csv -p {PID}`
6. Stop execution: ctrl-c to stop on both terminals

models: RandomForest, and XGBoost
1. Open a terminal and cd to a subfolder of choice
2. Compile the script
`gcc -Wall {script_name}.c -o {script_name}.o`
3. Run the executable script
`./{script_name}.o`
4. On a new terminal run top, and get the first PID
`top`
5. Open a new terminal and run memprofiler.py
`python3 memprofiler.py -o {relative path}/memstats.csv -p {PID}`
6. Stop execution: ctrl-c to stop on both terminals