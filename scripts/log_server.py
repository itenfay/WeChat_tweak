#!/usr/bin/env python3
import argparse
import datetime as _dt
import http.server
import json
import os
import pathlib
import socketserver


class _LogUploadHandler(http.server.BaseHTTPRequestHandler):
    def do_POST(self):
        if self.path not in ("/wcpl_log", "/wcpl_log/"):
            self.send_response(404)
            self.send_header("Content-Type", "text/plain; charset=utf-8")
            self.end_headers()
            self.wfile.write(b"Not Found")
            return

        content_length = int(self.headers.get("Content-Length", "0"))
        body = self.rfile.read(content_length) if content_length > 0 else b""

        repo_root = pathlib.Path(__file__).resolve().parents[1]
        logs_dir = repo_root / "logs"
        logs_dir.mkdir(parents=True, exist_ok=True)

        timestamp = _dt.datetime.now().strftime("%Y%m%d_%H%M%S")
        name = self.headers.get("X-Log-Name") or self.headers.get("X-File-Name") or "wcpl_debug.log"
        name = os.path.basename(name)
        if not name.endswith(".log"):
            name = f"{name}.log"

        output_path = logs_dir / f"{timestamp}_{name}"
        output_path.write_bytes(body)

        response = {"ok": True, "path": str(output_path)}
        payload = json.dumps(response).encode("utf-8")

        self.send_response(200)
        self.send_header("Content-Type", "application/json; charset=utf-8")
        self.send_header("Content-Length", str(len(payload)))
        self.end_headers()
        self.wfile.write(payload)

        print(f"[log_server] saved {len(body)} bytes to {output_path}", flush=True)

    def log_message(self, format, *args):
        return


def main():
    parser = argparse.ArgumentParser(description="WCPL local log upload server")
    parser.add_argument("--host", default="0.0.0.0", help="bind host (default: 0.0.0.0)")
    parser.add_argument("--port", type=int, default=8099, help="bind port (default: 8099)")
    args = parser.parse_args()

    with socketserver.TCPServer((args.host, args.port), _LogUploadHandler) as httpd:
        print(f"[log_server] listening on http://{args.host}:{args.port}/wcpl_log", flush=True)
        httpd.serve_forever()


if __name__ == "__main__":
    main()
