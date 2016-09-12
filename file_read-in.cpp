    ifstream data_file;
    data_file.open("data.txt");
    for (int i = 0; i<data_number; i++)
    {
        for (int j = 0; j<data_dimension; j++)
        {
            data_file >> inp.input_data[i][j];
        }
    }
    data_file.close();
