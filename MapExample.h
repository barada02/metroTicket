#pragma once
#pragma once

#include <map>
#include <string>
#include <msclr/marshal_cppstd.h>

namespace metroTicket {

    using namespace System;
    using namespace System::Collections::Generic;

    // Define the DistanceMap type alias
    using DistanceMap = std::map<std::string, int>;

    public ref class MapExample
    {
    public:
        // Function to initialize and return the DistanceMap
        static DistanceMap InitializeDistanceMap()
        {
            // Create a new DistanceMap
            DistanceMap distanceMap;

            // Insert elements into the map
           
            distanceMap["Nagole"] = 0;
            distanceMap["Uppal"] = 7;
            distanceMap["Stadium"] = 10;
            distanceMap["NGRI"] = 14;
            distanceMap["Habsiguda"] = 17;
            distanceMap["Tarnaka"] = 20;
            distanceMap["Mettuguda"] = 24;
            distanceMap["Secundrabad"] = 28;
            distanceMap["Parade Grounds"] = 33;
            distanceMap["Paradise"] = 36;
            distanceMap["Rasoolpura"] = 39;
            distanceMap["Prakash Nagar"] = 43;
            distanceMap["Begumpet"] = 47;
            distanceMap["Ameerpet"] = 50;
            distanceMap["Madhura Nagar"] = 54;
            distanceMap["Yousufguda"] = 57;
            distanceMap["Jubliee Hills"] = 62;
            distanceMap["Jubliee Hills Check post"] = 67;
            distanceMap["Peddamma Temple"] = 70;
            distanceMap["Madhapur"] = 74;
            distanceMap["Durgam Cheruvu"] = 78;
            distanceMap["Hi-tech City"] = 84;
            // Add other stations and their distances here...

            return distanceMap;
        }

        // Function to calculate the distance between two stations
        static int GetDistance(String^ startPoint, String^ destination)
        {
            // Convert System::String^ to std::string
            std::string startStation = msclr::interop::marshal_as<std::string>(startPoint);
            std::string destStation = msclr::interop::marshal_as<std::string>(destination);

            // Get the DistanceMap
            DistanceMap distanceMap = InitializeDistanceMap();

            // Check if both stations are present in the map.
            if (distanceMap.find(startStation) == distanceMap.end() || distanceMap.find(destStation) == distanceMap.end())
            {
                // Handle error: One or both stations not found in the distance map.
                return -1; // Return -1 to indicate an error.
            }

           
            int distance = distanceMap.at(destStation) - distanceMap.at(startStation);
            

            // Calculate the distance between the stations.
            double absolute_distance = std::abs(distance);

            // Ensure the distance is positive.
        

            return absolute_distance;
        }
    };
}
