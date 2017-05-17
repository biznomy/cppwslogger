# cppwslogger
_____________


### CppWSLogger 

#### is c plus plus module created using poco library and c++11 use to fetch logger file info using websocket


ws://localhost:9980

**request data**

```
{
  "start": "15",
  "path": "/home/ubuntu/error.log"
}

```

where **start** is line number in file to start reading and **path** is path of file

you receive response like 

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
 in response **next** is proposed line number start fetch data in next request and **start** is from where you start
