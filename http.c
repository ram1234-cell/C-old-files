#include <stdio.h>
#include <curl.h>

int main(void)
    {   printf("Running");
        CURL * curl = curl_easy_init();
        // Cheacking faliure
        if (!curl){
            fprintf(stderr,"init failed/n");
            return EXIT_FAILURE;
        }
        //-----------------------
        //set options 
        curl_easy_setopt(curl,CURLOPT_URL,"https://entrar.in");
        
        // getting actions done

        CURLcode result = curl_easy_perform(curl);
        if (result!= CURLE_OK){
            fprintf(stderr,"Download Proobelm",curl_easy_strerror(result));
        }
        curl_easy_cleanup(curl);
        return EXIT_SUCCESS;
    }