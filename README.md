# signalk-server-cpp
A C++ implementation of a SignalK server

This SignalK server (http://signalk.org) has been designed in order to be executed as Linux daemon.

Current status:
The signalk-server-cpp works as nmea to signalk converter and web socket server.

Usage:

    signalk-server-cpp settings.json

Where:

    settings.json - The configuration file
    
    
When the signalk-server-cpp is running, read the signalk-server-node websocket:

    wscat ws://localhost:3000/signalk/v1/stream?subscribe=all

The web interface is working at http://localhost:3000
The SignalK web API are available on http://localhost:3000/signalk :

    {
      "endpoints": [
        "v1",
        [
          [
            "version",
            "1.0.0",
            [
              "signalk-http",
              "http://localhost:3000/signalk/v1/api/"
            ],
            [
              "signalk-ws",
              "ws://localhost:3000/signalk/v1/stream"
            ]
          ]
        ]
      ],
      "servers": {
        "id": "signalk-server-cpp",
        "version": "0.1.0"
      }
    }

Example of configuration file:

    {
      "vessel": {
        "name": "Sarima V",
        "brand": "XYachts",
        "type": "362 Sport",
        "uuid": "urn:mrn:signalk:uuid:705f5f1a-efaf-44aa-9cb8-a0fd6305567c",
    
        "dimensions": {
          "length": 10.72,
          "width": 3.48,
          "mast": 17,
          "depthTransducer": 0.5,
          "keel": 2.05
        }
      },
    
      "interfaces": {},
    
      "providers": [
        { "id":"FileNMEA0193", "type":"providers/nmea0183/filestream",
          "options":{
            "path":"/Users/raffaelemontella/CLionProjects/signalk-server-cpp/samples/SarimaV-20060114.nmea",
            "millis":1000
          }
        }
      ]
    }

