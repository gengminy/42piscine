#!/bin/bash
mkdir testdir1
mkdir testdir2
mkdir gogo
touch 1234
chmod +x 1234
touch -t 202005010000 file_2020-05-01
touch -t 202005020000 file_2020-05-02
touch -t 202003010000 file_2020-03-01
touch -t 202003020000 file_2020-03-02
touch -t 202003040000 file_2020-03-04
touch -m -t 202006290000 file_2020-03-01
touch -m -t 202005240000 file_2020-05-02
