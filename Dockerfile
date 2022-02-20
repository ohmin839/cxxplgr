FROM ohmin839/boost:1.78.0

MAINTAINER ohmin839

ARG DEBIAN_FRONTEND=noninteractive
ARG DEBCONF_NOWARNINGS=yes

RUN apt-get install -qy libsqlite3-dev sqlite3
