FROM ubuntu:20.04

RUN apt update && apt install -y cowsay fortune
RUN mkdir /app
ADD run.sh /app/

WORKDIR /app/

ENTRYPOINT ["/app/run.sh"]
