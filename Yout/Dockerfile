FROM ubuntu:22.04

RUN apt update && apt install -y g++ make wget libboost-all-dev

WORKDIR /app

COPY . .

RUN wget https://raw.githubusercontent.com/yhirose/cpp-httplib/master/httplib.h
RUN make app

