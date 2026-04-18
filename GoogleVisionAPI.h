#pragma once

using namespace System;
using namespace System::IO;
using namespace System::Net;
using namespace System::Text;
using namespace System::Web::Script::Serialization; // For JavaScriptSerializer
// przestrzen nazw dla googlecloudvision
namespace GoogleCloudVision {

    public ref class ImageRequest {
    public:
        String^ content;  // zawartosc obrazu jako ciag
    };

    public ref class Feature { // klasa do analizy obrazu
    public:
        String^ type;
    };

    public ref class AnnotateImageRequest {
    public: // obraz do analizy
        ImageRequest^ image;
        // funkcje do wykonania w obrazie
        array<Feature^>^ features; 
    };

    public ref class AnnotateRequest {
    public:
        array<AnnotateImageRequest^>^ requests;// tablica zadan do analizy obrazu
    };
    // Klasa do analizy obrazow
    public ref class ImageAnalyzer {
    private:
        String^ apiKey; // klucz api

    public:
        ImageAnalyzer(String^ apiKey) {
            this->apiKey = "AIzaSyDhxee_g-CCZwPTOZkli5kGKU6WQpPZCQE"; 
        }
        // metoda do analizy obrazu
        String^ AnalyzeImage(array<Byte>^ imageBytes) {
            String^ url = "https://vision.googleapis.com/v1/images:annotate?key=" + this->apiKey; // url do api
            WebClient^ webClient = gcnew WebClient(); // klient sieciowy do wyslania zadania
            webClient->Headers[HttpRequestHeader::ContentType] = "application/json"; // ustawienie zawartosci na json

// konwersja obrazu na ciag base64
            String^ base64Image = Convert::ToBase64String(imageBytes);

            // Przygotowuje zadanie
            Feature^ feature = gcnew Feature();
            feature->type = "LABEL_DETECTION"; // You can add other types like 'FACE_DETECTION', 'LANDMARK_DETECTION', etc.
            // dodaje obraz jako ciag base64
            ImageRequest^ imgRequest = gcnew ImageRequest();
            imgRequest->content = base64Image;

            AnnotateImageRequest^ annotateImageRequest = gcnew AnnotateImageRequest();
            annotateImageRequest->image = imgRequest; // ustawia obraz
            annotateImageRequest->features = gcnew array<Feature^>{ feature };

            AnnotateRequest^ annotateRequest = gcnew AnnotateRequest();
            annotateRequest->requests = gcnew array<AnnotateImageRequest^>{ annotateImageRequest };

//zamienia na json (Serializacja)
            JavaScriptSerializer^ serializer = gcnew JavaScriptSerializer();
            String^ postData = serializer->Serialize(annotateRequest);

            try {
            //wysyla zadanie  i otrzymanie odp
                String^ jsonResponse = webClient->UploadString(url, "POST", postData);
                return jsonResponse; // zwraca odpowiedz json
            }
            catch (WebException^ webEx) {
                // obsluga wyjatkow
                Stream^ responseStream = webEx->Response->GetResponseStream();
                StreamReader^ reader = gcnew StreamReader(responseStream);
                String^ responseText = reader->ReadToEnd();
                reader->Close();
                responseStream->Close();
                return "Error: " + webEx->Message + "\nResponse: " + responseText;
            }
            catch (Exception^ ex) {
                return "General Exception occurred: " + ex->Message;
            }
        }
    };
}