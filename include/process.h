#ifndef PROCESS_H
#define PROCESS_H

#include <iostream>
#include <string>

#include "linux_parser.h"
#include "processor.h"
/*
Basic class for Process representation
It contains relevant attributes as shown below
*/
class Process {
 public:
  Process(int pid, long total_jiffies);
  int Pid();                               // TODO: See src/process.cpp
  std::string User();                      // TODO: See src/process.cpp
  std::string Command();                   // TODO: See src/process.cpp
  float CpuUtilization();                  // TODO: See src/process.cpp
  std::string Ram();                       // TODO: See src/process.cpp
  long int UpTime();                       // TODO: See src/process.cpp
  bool operator<(Process const& a) const;  // TODO: See src/process.cpp
  void calculateCpuUtilization(long total_jiffies);

  // TODO: Declare any necessary private members
 private:
  int pid_;
  float cpu_utilization_;
};

#endif