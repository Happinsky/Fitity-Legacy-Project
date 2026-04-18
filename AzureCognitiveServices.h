#pragma once

using namespace System;
using namespace System::IO;
using namespace System::Net;
using namespace System::Text;
using namespace System::Threading::Tasks;

namespace CognitiveServices {

    public ref class ImageAnalyzer
    {
    private:
        String^ subscriptionKey;
        String^ endpoint;

    public:
        ImageAnalyzer(String^ key, String^ end)
        {
            subscriptionKey = key;
            endpoint = end + "/vision/v3.2/analyze"; // Poprawna œcie¿ka API
        }

        String^ AnalyzeImage(array<Byte>^ imageBytes)
        {
            // Ensure the correct API parameters are included in the URL
            String^ url = endpoint + "?visualFeatures=Categories,Description,Color&language=en";
            HttpWebRequest^ request = dynamic_cast<HttpWebRequest^>(WebRequest::Create(url));
            request->Method = "POST";
            request->ContentType = "application/octet-stream";
            request->Headers->Add("Ocp-Apim-Subscription-Key", subscriptionKey);

            Stream^ requestStream = request->GetRequestStream(); // pobiera strumien do wys danych
            requestStream->Write(imageBytes, 0, imageBytes->Length); //zapisuje bajty obrazu do zadania
            requestStream->Close();

            HttpWebResponse^ response = dynamic_cast<HttpWebResponse^>(request->GetResponse()); // odp od serwera
            StreamReader^ responseReader = gcnew StreamReader(response->GetResponseStream()); //odczyt odpowiedzi
            String^ jsonResponse = responseReader->ReadToEnd(); // konwersja odp na json

            response->Close();
            responseReader->Close();

            return jsonResponse;
        }
    };
}