#!/bin/bash
set -e
LOG=/var/mobile/Containers/Data/Application/8BF93F71-587B-49F9-A6B6-835A8CE8E8FA/Documents/wcpl_debug.log
SESS=$(grep -c "WCPL Logger Started" "$LOG" || true)
echo sessions=$SESS
START=$(grep -n "WCPL Logger Started" "$LOG" | tail -n 1 | cut -d: -f1)
echo start_line=$START
if [ -n "$START" ]; then
  SEG=$(mktemp)
  sed -n "${START},\$p" "$LOG" > "$SEG"
  echo fallback=$(grep -c "Repeat proxy unresolved fallback-owner" "$SEG" || true)
  echo keep=$(grep -c "Repeat proxy unresolved keep" "$SEG" || true)
  tail -n 24 "$SEG"
  rm -f "$SEG"
fi
