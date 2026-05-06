FROM ubuntu:22.04

RUN apt-get update \
    && DEBIAN_FRONTEND=noninteractive apt-get install -y --no-install-recommends \
       ca-certificates cmake g++ make \
    && rm -rf /var/lib/apt/lists/*

COPY . /opt/formatter-workspace
WORKDIR /opt/formatter-workspace

RUN cmake -S . -B _build -DCMAKE_BUILD_TYPE=Release -DBUILD_TESTS=OFF \
    && cmake --build _build \
    && cmake --install _build --prefix _install

ENV LOG_PATH=/home/logs/log.txt
VOLUME ["/home/logs"]
WORKDIR /opt/formatter-workspace/_install/bin

ENTRYPOINT ["./demo"]
