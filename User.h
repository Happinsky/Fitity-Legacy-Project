#pragma once
using namespace System;
using namespace System::Data::SqlClient;

public ref class User {
public:
    int id;
    String^ name;
    String^ email;
    String^ password;
    double calories;
    double eaten;
    double steps;

    User() {
        id = 0;
        name = "";
        email = ""; 
        password = "";
        calories = 0.0; 
        eaten = 0.0;// Domyœlna wartoœæ kalorii
        steps = 0.0;
    }
public:
    void LoadDataFromDatabase()
    {
        try {
            // laczenie z baza danych
            String^ connectionString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=fitity;Integrated Security=True;Encrypt=True;TrustServerCertificate=True;";
            SqlConnection^ connection = gcnew SqlConnection(connectionString);

            // Zapytanie SQL do pobrania danych kalorii, eaten i steps dla u¿ytkownika o id
            String^ query = "SELECT calories, eaten, steps FROM Users WHERE id = @UserID";
            SqlCommand^ command = gcnew SqlCommand(query, connection);

            // Parametr do zabezpieczenia przed SQL Injection
            command->Parameters->AddWithValue("@UserID", this->id);

            // Otwarcie po³¹czenia
            connection->Open();

            SqlDataReader^ reader = command->ExecuteReader();

            // Sprawdza czy istnieja dane
            if (reader->Read()) {
                // Jak dane sa zmieniane to aktualizuje
                this->calories = Convert::ToDouble(reader["calories"]);
                this->eaten = Convert::ToDouble(reader["eaten"]);
                this->steps = Convert::ToInt32(reader["steps"]); 

        
            }

            // zamyka czytnik i polaczenie
            reader->Close();
            connection->Close();
        }
        catch (Exception^ ex) {
            Console::WriteLine("B³¹d podczas pobierania danych z bazy danych: " + ex->Message);
        }
    }
};