#!/bin/bash
echo "Building bankAccount"
g++ -Wall bankApp.cpp bankAccount.cpp -o bankAccount
echo "Finished"