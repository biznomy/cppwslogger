# cppwslogger
c++ program using poco for tailing logs as per user json request

In the given git module the cpp websocket is running on ws://localhost:9980


**request data**

```
{
  "start": "15",
  "path": "/home/ubuntu/error.log"
}
```
In the given above information about request data :- 

* **start** is the starting point of file content to read 
* **path** is the location of device/system on which the logger file is placed in our case "/home/ubuntu/error.log"


**response data**
```
{
  "15": ":13 IST 2017",
  "16": "INFO  2017-04-28T05:21:13,724Z",
  "17": "\t\t\t\ti.t.biznomy.util.JpaRepositoryUtil - some text",
  "18": "INFO  2017-04-28T05:22:14,024Z",
  "19": "\t\t\t\ti.t.biznomy.scheduled.ScheduledTasks - Its About Fri Apr 28 10:52:14 IST 2017",
  "20": "INFO  2017-04-28T05:22:14,026Z",
  "21": "\t\t\t\ti.t.biznomy.util.JpaRepositoryUtil - some text",
  "22": "INFO  2017-04-28T05:23:13,434Z",
  "23": "\t\t\t\ti.t.biznomy.scheduled.ScheduledTasks - Its About Fri Apr 28 10:53:13 IST 2017",
  "24": "INFO  2017-04-28T05:23:13,444Z",
  "next": "25",
  "start": "15"
}

```

In the given above information about response data :- 

* **start** is the starting point of file content to read 
* **next** is **proposed** starting point of file content to read  


## Run

Set up poco library from  Poco [https://pocoproject.org/]

go to your project directory

> make

> ./bin/CloudServer

open your advance rest web socket on localhost:9980

and send data as per discussion above




