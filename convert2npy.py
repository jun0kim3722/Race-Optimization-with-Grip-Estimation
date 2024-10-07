import pdb
import numpy as np

def convert(file_path, param_names):
    f = open(file_path, "r")

    npy_param = {}
    for line in f:
        for param in param_names:
            if param in line:
                start_idx = line.find("=") + 1
                end_idx = line.find("$")

                try:
                    val = float(line[start_idx:end_idx])
                except:
                    print("FAILED!!!!!")
                    pdb.set_trace()

                npy_param[param] = val

    file_ext = file_path.find(".tir")
    file_start = file_path.find("og_tir_file") + 12
    save_name = "assets/" + file_path[file_start:file_ext] + ".npy"
    np.save(save_name, [npy_param])
    print("SAVED: " + save_name)

param_names = ["PCX1","PDX1","PDX2","PDX3","PEX1","PEX2","PEX3","PEX4","PKX1","PKX2","PKX3","PHX1","PHX2","PCY1","PDY1","PDY2","PDY3","PKY1","PKY2","PKY3","PEY1","PEY2","PEY3","PEY4","PEY5"]
file_path = 'assets/og_tir_file/LF.tir'
file_path = 'assets/og_tir_file/RF.tir'
file_path = 'assets/og_tir_file/LR.tir'
file_path = 'assets/og_tir_file/RR.tir'

convert(file_path, param_names)