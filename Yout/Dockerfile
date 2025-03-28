FROM ubuntu:22.04

RUN apt update && apt install -y g++ make libboost-all-dev

WORKDIR /app
COPY . .

RUN make run-tests
RUN make app
