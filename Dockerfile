FROM ubuntu:22.04

RUN apt-get update && \
    apt-get install -y build-essential cmake git libgtest-dev && \
    cd /usr/src/gtest && \
    cmake . && \
    make && \
    cp lib/*.a /usr/lib

WORKDIR /app
COPY program/ program/
COPY Test_lab/ Test_lab/
COPY CMakeLists.txt .

RUN mkdir build && cd build && cmake .. && make

CMD ["./build/main"]
