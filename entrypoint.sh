#!/bin/bash

echo "<html><body><pre>" > /usr/share/nginx/html/index.html

docker logs app_container >> /usr/share/nginx/html/index.html

echo "</pre></body></html>" >> /usr/share/nginx/html/index.html

exec nginx -g "daemon off;"