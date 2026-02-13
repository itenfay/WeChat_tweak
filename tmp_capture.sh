#!/bin/bash
set -e
TMP=/tmp/wcpl_inject_stream.log
rm -f "$TMP"
( /usr/bin/log stream --style compact --level debug --predicate 'process == "WeChat" OR eventMessage CONTAINS[c] "wapleodtcorexpc" OR eventMessage CONTAINS[c] "TweakInject" OR eventMessage CONTAINS[c] "ellekit" OR eventMessage CONTAINS[c] "dyld"' > "$TMP" 2>&1 ) &
LPID=$!
sleep 1
PID=$(launchctl list | awk -F'\t' '/UIKitApplication:com.tencent.xin/{print $1; exit}')
if [ -n "$PID" ]; then kill -9 "$PID" || true; fi
sleep 1
(nohup uiopen "weixin://" >/dev/null 2>&1 &) || true
sleep 12
kill "$LPID" || true
sleep 1
echo "=== stream tail ==="
tail -n 200 "$TMP" || true
