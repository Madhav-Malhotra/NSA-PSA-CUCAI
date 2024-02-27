### Model Profiling
This contains scripts used to measure the memory usage and inference time of the models

## Folders
Each folder contains a `one_percent`, `five_percent`, and `ten_percent` folder which represents the dataset size of which the model was trained on.
Each subfolder contains an executable script `script_name`, its C++ code `script_name.cc`, and the memory statistics `memstats.csv`
This Folder is organized as follows:
- `LogisticRegression`: script and memory statistics for a Logistic Regression model
- `LinearSVM`: script and memory statistics for a Linear Support Vector Machine model

## Replication
1. Open a terminal and cd to a subfolder of choice
2. Compile the script
```g++ -Wall {script_name}.cc -o {script_name} -std=c++11```
3. Run the executable script
```./{script_name}```
4. On a new terminal run top, and get the first PID
```top```
5. Open a new terminal and run memprofiler.py
```python3 memprofiler.py -h -o {relative path}/memstats.csv -p {PID}```
6. Stop execution: ctrl-c to stop on both terminals