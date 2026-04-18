#include "GoogleVisionAPI.h"
#pragma once

using namespace System;
using namespace System::IO;
using namespace System::Windows::Forms;
using namespace GoogleCloudVision;

public ref class FileAnalyzer
{
private:
    ImageAnalyzer^ imageAnalyzer;

public:
    FileAnalyzer()
    {
        // Replace with your actual API key
        String^ apiKey = "AIzaSyDhxee_g-CCZwPTOZkli5kGKU6WQpPZCQE";
        imageAnalyzer = gcnew ImageAnalyzer(apiKey);
    }

    String^ AnalyzeFile()
    {
        OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
        openFileDialog->Filter = "Images (*.jpg;*.jpeg;*.png)|*.jpg;*.jpeg;*.png";
        openFileDialog->Title = "Select an Image";

        if (openFileDialog->ShowDialog() == DialogResult::OK)
        {
            String^ filePath = openFileDialog->FileName;

            // Odczytanie pliku do tablicy bajtow
            array<Byte>^ imageBytes;
            try
            {
                FileStream^ fileStream = File::OpenRead(filePath); // otwiera strumien plikow
                imageBytes = gcnew array<Byte>(fileStream->Length); // tablica bajtow
                fileStream->Read(imageBytes, 0, imageBytes->Length); // odczytanie pliku do  tab bajtow
                fileStream->Close();
            }
            catch (Exception^ ex)
            {
                return "Failed to read the file: " + ex->Message;
            }

            return imageAnalyzer->AnalyzeImage(imageBytes); // wywoluje analizowanie obrazu 
        }

        return "No file selected or an error occurred.";
    }
};