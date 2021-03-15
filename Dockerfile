FROM ubuntu:latest

RUN apt-get update; apt-get install -y gcc make; mkdir push_swap;

WORKDIR /push_swap

CMD sh
