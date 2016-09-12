    ifstream data_file;
    data_file.open("data.txt");// read in the data in data.txt
    for (int i = 0; i<data_number; i++)
    {
        for (int j = 0; j<data_dimension; j++)
        {
            data_file >> inp.input_data[i][j];//read the data into input_data array
        }
    }
    data_file.close();
