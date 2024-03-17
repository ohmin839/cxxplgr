FROM ohmin839/boost:1.78.0

ARG DEBIAN_FRONTEND=noninteractive
ARG DEBCONF_NOWARNINGS=yes

RUN apt-get update && apt-get install -qy libsqlite3-dev sqlite3

RUN echo "Adding gradle user and group" \
    && groupadd --system --gid 1000 developer \
    && useradd --system --gid developer --uid 1000 --shell /bin/bash --create-home developer

USER developer