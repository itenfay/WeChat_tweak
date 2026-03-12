#!/usr/bin/env python3
"""WCPL cross-platform minimal regression tests.

This suite intentionally covers only pure logic that is safe to run on Linux/macOS
without Foundation/UIKit host compilation:
- shared helper contracts (identifier trim/dedupe, chatroom detection)
- config sanitization
- URL/query parsing
- XML/string extraction helpers
- queue matching semantics

It is a *minimal gate* for non-Darwin environments, not a replacement for the
Darwin/Foundation host suite in tests/WCPLUnitTests.m.
"""

from __future__ import annotations

import json
import re
import sys
from dataclasses import dataclass
from functools import lru_cache
from pathlib import Path
from typing import Any, Callable, Dict, List, Optional


class TestFailure(AssertionError):
    pass


CONTRACTS_PATH = Path(__file__).resolve().parents[1] / "contracts" / "wcpl_pure_helper_contracts.json"


@dataclass
class WeChatRedEnvelopParam:
    msgType: Optional[str] = None
    sendId: Optional[str] = None
    channelId: Optional[str] = None
    nickName: Optional[str] = None
    headImg: Optional[str] = None
    nativeUrl: Optional[str] = None
    sessionUserName: Optional[str] = None
    sign: Optional[str] = None
    timingIdentifier: Optional[str] = None


class WCPLRedEnvelopParamQueue:
    def __init__(self) -> None:
        self.queue: List[WeChatRedEnvelopParam] = []
        self.queue_by_send_id: Dict[str, List[WeChatRedEnvelopParam]] = {}
        self.queue_by_sign: Dict[str, List[WeChatRedEnvelopParam]] = {}

    def enqueue(self, param: WeChatRedEnvelopParam) -> None:
        self.queue.append(param)
        self._index_param(param)

    def peek(self) -> Optional[WeChatRedEnvelopParam]:
        return self.queue[0] if self.queue else None

    def is_empty(self) -> bool:
        return not self.queue

    def dequeue_matching_sign(self, sign: Optional[str], send_id: Optional[str]) -> Optional[WeChatRedEnvelopParam]:
        normalized_sign = trim_text(sign)
        normalized_send_id = trim_text(send_id)

        matched = None
        if normalized_send_id:
            matched = self._first_param_for_key(normalized_send_id, self.queue_by_send_id)
        if matched is None and normalized_sign:
            matched = self._first_param_for_key(normalized_sign, self.queue_by_sign)

        if matched is None:
            for param in self.queue:
                param_send_id = trim_text(param.sendId)
                param_sign = trim_text(param.sign)
                if normalized_send_id and param_send_id == normalized_send_id:
                    matched = param
                    break
                if normalized_sign and param_sign == normalized_sign:
                    matched = param
                    break

        if matched is not None:
            self._remove_param_from_queue(matched)
            self._deindex_param(matched)
        return matched

    def _index_param(self, param: WeChatRedEnvelopParam) -> None:
        send_id = trim_text(param.sendId)
        if send_id:
            self.queue_by_send_id.setdefault(send_id, []).append(param)
        sign = trim_text(param.sign)
        if sign:
            self.queue_by_sign.setdefault(sign, []).append(param)

    def _deindex_param(self, param: WeChatRedEnvelopParam) -> None:
        send_id = trim_text(param.sendId)
        if send_id:
            self._remove_param(param, self.queue_by_send_id, send_id)
        sign = trim_text(param.sign)
        if sign:
            self._remove_param(param, self.queue_by_sign, sign)

    @staticmethod
    def _remove_param(param: WeChatRedEnvelopParam, index: Dict[str, List[WeChatRedEnvelopParam]], key: str) -> None:
        bucket = index.get(key)
        if not bucket:
            return
        try:
            bucket.remove(param)
        except ValueError:
            pass
        if not bucket:
            index.pop(key, None)

    def _first_param_for_key(self, key: str, index: Dict[str, List[WeChatRedEnvelopParam]]) -> Optional[WeChatRedEnvelopParam]:
        bucket = index.get(key)
        if not bucket:
            return None
        candidate = bucket[0]
        if candidate in self.queue:
            return candidate
        index.pop(key, None)
        return None

    def _remove_param_from_queue(self, param: WeChatRedEnvelopParam) -> None:
        try:
            self.queue.remove(param)
        except ValueError:
            pass


def assert_true(condition: bool, message: str) -> None:
    if not condition:
        raise TestFailure(message)


@lru_cache(maxsize=1)
def load_pure_helper_contracts() -> Dict[str, List[Dict[str, Any]]]:
    with CONTRACTS_PATH.open("r", encoding="utf-8") as handle:
        contracts = json.load(handle)
    assert_true(isinstance(contracts, dict), "pure helper contracts must be a mapping")
    return contracts


def pure_helper_contract_case(group: str, case_name: str) -> Dict[str, Any]:
    cases = load_pure_helper_contracts().get(group)
    assert_true(isinstance(cases, list), f"missing contract group: {group}")
    for case in cases:
        if case.get("name") == case_name:
            return case
    raise TestFailure(f"missing contract case: {group}/{case_name}")


def assert_contract_group(group: str, evaluator: Callable[[Dict[str, Any]], Any]) -> None:
    cases = load_pure_helper_contracts().get(group)
    assert_true(isinstance(cases, list), f"missing contract group: {group}")
    for case in cases:
        actual = evaluator(case)
        expected = case.get("expected")
        case_name = case.get("name", "<unnamed>")
        assert_true(actual == expected, f"{group}/{case_name} mismatch: expected {expected!r}, got {actual!r}")


def trim_text(text: Any) -> Optional[str]:
    if not isinstance(text, str):
        return None
    trimmed = text.strip()
    return trimmed or None


def sanitize_identifier_array(value: Any) -> List[str]:
    if not isinstance(value, list):
        return []
    results: List[str] = []
    seen = set()
    for obj in value:
        if not isinstance(obj, str):
            continue
        name = obj.strip()
        if not name or name in seen:
            continue
        seen.add(name)
        results.append(name)
    return results


sanitize_username_array = sanitize_identifier_array


_BOOL_TEXT_TRUE_PREFIXES = ("y", "Y", "t", "T")


def objc_bool_value(value: Any) -> bool:
    if isinstance(value, bool):
        return value
    if isinstance(value, (int, float)):
        return bool(value)
    if isinstance(value, str):
        trimmed = value.strip()
        if not trimmed:
            return False
        if trimmed.startswith(_BOOL_TEXT_TRUE_PREFIXES):
            return True
        numeric_match = re.match(r"^[+-]?\d+", trimmed)
        if numeric_match:
            return int(numeric_match.group(0)) != 0
        return False
    return False


def sanitize_ignore_dictionary(value: Any) -> Dict[str, bool]:
    if not isinstance(value, dict):
        return {}
    result: Dict[str, bool] = {}
    for key, obj in value.items():
        if not isinstance(key, str):
            continue
        name = key.strip()
        if not name:
            continue
        if objc_bool_value(obj):
            result[name] = True
    return result


def sanitize_reply_text(value: Any) -> str:
    return trim_text(value) or ""


def string_value(value: Any) -> Optional[str]:
    if isinstance(value, str):
        return value
    if isinstance(value, bool):
        return "1" if value else "0"
    if isinstance(value, int):
        return str(value)
    if isinstance(value, float):
        return str(int(value)) if value.is_integer() else str(value)
    if value is None:
        return None
    text = str(value)
    return text or None


def query_value_for_key(key: Optional[str], url_string: Optional[str]) -> Optional[str]:
    if not isinstance(key, str) or not key:
        return None
    if not isinstance(url_string, str) or not url_string:
        return None

    qmark = url_string.find("?")
    if qmark < 0 or qmark + 1 >= len(url_string):
        return None

    query = url_string[qmark + 1 :]
    if not query:
        return None

    for pair in query.split("&"):
        if not pair:
            continue
        eq = pair.find("=")
        if eq < 0:
            continue
        candidate_key = pair[:eq]
        if candidate_key != key:
            continue
        value = pair[eq + 1 :] if eq + 1 < len(pair) else ""
        decoded = unescape_percent(value).strip()
        return decoded or None
    return None


_PERCENT_RE = re.compile(r"%([0-9A-Fa-f]{2})")


def unescape_percent(value: str) -> str:
    def repl(match: re.Match[str]) -> str:
        return bytes.fromhex(match.group(1)).decode("utf-8", errors="replace")

    return _PERCENT_RE.sub(repl, value)


def red_envelop_param_to_params(param: WeChatRedEnvelopParam) -> Dict[str, str]:
    return build_red_envelop_params(
        {
            "msgType": param.msgType,
            "sendId": param.sendId,
            "channelId": param.channelId,
            "nickName": param.nickName,
            "headImg": param.headImg,
            "nativeUrl": param.nativeUrl,
            "sessionUserName": param.sessionUserName,
            "timingIdentifier": param.timingIdentifier,
            "sign": param.sign,
        }
    )


def build_red_envelop_params(raw_fields: Any) -> Dict[str, str]:
    fields = raw_fields if isinstance(raw_fields, dict) else {}
    params: Dict[str, str] = {}

    for field_name in (
        "msgType",
        "sendId",
        "channelId",
        "nickName",
        "headImg",
        "nativeUrl",
        "sessionUserName",
        "timingIdentifier",
        "sign",
    ):
        value = string_value(fields.get(field_name))
        if value:
            params[field_name] = value

    native_url = string_value(fields.get("nativeUrl"))
    if native_url:
        send_user_name = (
            query_value_for_key("sendusername", native_url)
            or query_value_for_key("sendUserName", native_url)
            or query_value_for_key("send_user_name", native_url)
        )
        if send_user_name:
            params["sendUserName"] = send_user_name

        total_num = query_value_for_key("total_num", native_url) or query_value_for_key("totalNum", native_url)
        if total_num:
            params["total_num"] = total_num

    params["agreeDuty"] = "0"
    params["inWay"] = "0"
    return params


def resolve_red_envelop_group_scope(raw_scope_value: Any, allowed_groups: Any) -> int:
    default_scope = 1 if sanitize_identifier_array(allowed_groups) else 0
    resolved = int(raw_scope_value) if raw_scope_value is not None else default_scope
    return resolved if 0 <= resolved <= 2 else default_scope


def normalize_red_envelop_notify_target(raw_notify_target_value: Any) -> int:
    resolved = int(raw_notify_target_value) if raw_notify_target_value is not None else 0
    return resolved if 0 <= resolved <= 2 else 0


def resolve_quit_monitor_scope(raw_scope_value: Any, raw_whitelist_info: Any) -> int:
    sanitized = sanitize_ignore_dictionary(raw_whitelist_info)
    default_scope = 1 if any(is_chatroom_name(key) and enabled for key, enabled in sanitized.items()) else 0
    resolved = int(raw_scope_value) if raw_scope_value is not None else default_scope
    return resolved if resolved in (0, 1) else default_scope


def strip_wrapped_quotes(text: Optional[str]) -> Optional[str]:
    value = trim_text(text)
    if not value or len(value) < 2:
        return value

    quote_pairs = [
        ('"', '"'),
        ("“", "”"),
        ("'", "'"),
        ("‘", "’"),
    ]
    for left, right in quote_pairs:
        if value.startswith(left) and value.endswith(right) and len(value) > len(left) + len(right):
            return value[len(left) : len(value) - len(right)]
    return value


def sanitize_inline_text(text: Optional[str], max_len: int) -> Optional[str]:
    value = trim_text(text)
    if not value:
        return None
    value = value.replace("\r", " ").replace("\n", " ")
    if max_len > 0 and len(value) > max_len:
        return value[:max_len] + "…"
    return value


def extract_revoker_name_from_replace_text(replace_text: Optional[str]) -> Optional[str]:
    text = trim_text(replace_text)
    if not text:
        return None

    quoted = re.search(r'(?:\"|“)([^\"”]+?)(?:\"|”)撤回了', text)
    if quoted:
        return sanitize_inline_text(strip_wrapped_quotes(quoted.group(1)), 40)

    revoke_index = text.find("撤回了一条消息")
    if revoke_index <= 0:
        return None

    prefix = text[:revoke_index]
    colon_index = prefix.rfind("：")
    if 0 <= colon_index < len(prefix) - 1:
        prefix = prefix[colon_index + 1 :]
    return sanitize_inline_text(strip_wrapped_quotes(prefix), 40)


def extract_revoked_content_from_replace_text(replace_text: Optional[str]) -> Optional[str]:
    text = trim_text(replace_text)
    if not text:
        return None
    for token in ("原消息：", "原消息:"):
        token_index = text.find(token)
        if 0 <= token_index < len(text) - len(token):
            return sanitize_inline_text(text[token_index + len(token) :], 180)
    return None


def is_revoke_tip_display_text(content: Optional[str]) -> bool:
    return isinstance(content, str) and (
        "撤回了一条消息" in content or "已拦截撤回" in content
    )


def is_quit_monitor_tip_display_text(content: Optional[str]) -> bool:
    return isinstance(content, str) and "[退群监控]" in content


def should_tint_alert_tip_display_text(content: Optional[str]) -> bool:
    return is_revoke_tip_display_text(content) or is_quit_monitor_tip_display_text(content)


def is_sysmsg_template_content(content: Optional[str]) -> bool:
    trimmed = trim_text(content)
    if not trimmed:
        return False
    lowered = trimmed.lower()
    return "<sysmsg" in lowered and "sysmsgtemplate" in lowered


def plain_text_from_sysmsg_template_content(content: Optional[str]) -> Optional[str]:
    trimmed = trim_text(content)
    if not trimmed or not is_sysmsg_template_content(trimmed):
        return None

    plain = extract_xml_value(trimmed, "<plain><![CDATA[", "]]></plain>")
    if plain:
        return plain

    decoded = decode_basic_xml_entities(trimmed)
    if decoded and decoded != trimmed:
        return extract_xml_value(decoded, "<plain><![CDATA[", "]]></plain>")
    return None


def alert_tip_display_text_from_content(content: Optional[str]) -> Optional[str]:
    trimmed = trim_text(content)
    if not trimmed:
        return None
    return plain_text_from_sysmsg_template_content(trimmed) or trimmed


def decode_basic_xml_entities(text: Optional[str]) -> Optional[str]:
    if not isinstance(text, str) or not text:
        return None
    if "&" not in text:
        return text
    decoded = text
    for _ in range(3):
        next_value = (
            decoded.replace("&lt;", "<")
            .replace("&gt;", ">")
            .replace("&quot;", '"')
            .replace("&apos;", "'")
            .replace("&amp;", "&")
        )
        if next_value == decoded:
            break
        decoded = next_value
        if "&" not in decoded:
            break
    return decoded


def extract_xml_value(xml: Optional[str], open_tag: str, close_tag: str) -> Optional[str]:
    if not isinstance(xml, str) or not xml:
        return None
    start = xml.find(open_tag)
    if start < 0:
        return None
    value_start = start + len(open_tag)
    if value_start >= len(xml):
        return None
    end = xml.find(close_tag, value_start)
    if end < 0 or end <= value_start:
        return None
    return trim_text(xml[value_start:end])


def extract_quote_title_from_xml(xml: Optional[str]) -> Optional[str]:
    title = extract_xml_value(xml, "<title><![CDATA[", "]]></title>")
    if not title:
        title = extract_xml_value(xml, "<title>", "</title>")
    if not title:
        decoded_xml = decode_basic_xml_entities(xml)
        if decoded_xml and decoded_xml != xml:
            title = extract_xml_value(decoded_xml, "<title><![CDATA[", "]]></title>")
            if not title:
                title = extract_xml_value(decoded_xml, "<title>", "</title>")
    return trim_text(title)


def is_chatroom_name(name: Optional[str]) -> bool:
    trimmed = trim_text(name)
    return bool(trimmed and "@chatroom" in trimmed.lower())


def normalize_mention_candidate(candidate: Optional[str]) -> Optional[str]:
    value = trim_text(candidate)
    if not value:
        return None
    if value.startswith("@"):
        value = trim_text(value[1:])
    if value and value.endswith(":"):
        value = trim_text(value[:-1])
    if not value or len(value) > 128:
        return None
    if "<" in value or ">" in value:
        return None
    if any(ch.isspace() for ch in value):
        return None
    if is_chatroom_name(value):
        return None
    return value


def extract_mention_candidate_from_xml(xml_text: Optional[str]) -> Optional[str]:
    if not isinstance(xml_text, str) or not xml_text:
        return None

    tag_pairs = [
        ("<memberusername><![CDATA[", "]]></memberusername>"),
        ("<memberusername>", "</memberusername>"),
        ("<senderusername><![CDATA[", "]]></senderusername>"),
        ("<senderusername>", "</senderusername>"),
        ("<fromusr><![CDATA[", "]]></fromusr>"),
        ("<fromusr>", "</fromusr>"),
        ("<chatusr><![CDATA[", "]]></chatusr>"),
        ("<chatusr>", "</chatusr>"),
        ("<realchatname><![CDATA[", "]]></realchatname>"),
        ("<realchatname>", "</realchatname>"),
        ("<username><![CDATA[", "]]></username>"),
        ("<username>", "</username>"),
    ]

    def extract_from_text(text: str) -> Optional[str]:
        for open_tag, close_tag in tag_pairs:
            value = extract_xml_value(text, open_tag, close_tag)
            candidate = normalize_mention_candidate(value)
            if candidate:
                return candidate
        return None

    candidate = extract_from_text(xml_text)
    if candidate:
        return candidate

    decoded = decode_basic_xml_entities(xml_text)
    if decoded and decoded != xml_text:
        return extract_from_text(decoded)
    return None


def extract_mention_candidate_from_group_content_prefix(content: Optional[str]) -> Optional[str]:
    if not isinstance(content, str) or not content:
        return None
    newline_index = content.find("\n")
    if newline_index <= 0:
        return None
    return normalize_mention_candidate(content[:newline_index])


def extract_voice_attr_uint(xml: Optional[str], attr_name: Optional[str]) -> int:
    if not isinstance(xml, str) or not xml or not isinstance(attr_name, str) or not attr_name:
        return 0

    regex = re.compile(rf"{re.escape(attr_name)}\s*=\s*\"([0-9]{{1,8}})\"", re.IGNORECASE)

    def extract_from_text(text: str) -> int:
        match = regex.search(text)
        if not match:
            return 0
        parsed = int(match.group(1))
        return parsed if 0 < parsed <= 0xFFFFFFFF else 0

    value = extract_from_text(xml)
    if value > 0:
        return value

    decoded = decode_basic_xml_entities(xml)
    if decoded and decoded != xml:
        return extract_from_text(decoded)
    return 0


def build_minimal_voice_content(voice_length_ms: int, voice_format: int) -> str:
    length_ms = voice_length_ms if isinstance(voice_length_ms, int) and voice_length_ms > 0 else 1000
    fmt = voice_format if isinstance(voice_format, int) and voice_format > 0 else 4
    return f'<msg><voicemsg voicelength="{length_ms}" voiceformat="{fmt}" forwardflag="0" /></msg>'


def generate_client_msg_id(sender_user_name: Optional[str], now: int, random_value: int) -> str:
    sender = trim_text(sender_user_name)
    if sender:
        return f"{sender}_{now}_{random_value}"
    return f"wcpl_{now}_{random_value}"


def quote_refer_server_id_from_content(content: Optional[str]) -> int:
    if not isinstance(content, str) or not content:
        return 0

    tag_pairs = [
        ("<svrid><![CDATA[", "]]></svrid>"),
        ("<svrid>", "</svrid>"),
        ("<msgsvrid><![CDATA[", "]]></msgsvrid>"),
        ("<msgsvrid>", "</msgsvrid>"),
    ]
    refer_regex = re.compile(r"<refermsg[^>]*>([\s\S]*?)</refermsg>", re.IGNORECASE)
    svr_regex = re.compile(r"<(?:msg)?svrid>(?:<!\[CDATA\[)?([0-9]{5,})(?:\]\]>)?</(?:msg)?svrid>", re.IGNORECASE)

    def extract_server_id_from_xml(xml: Optional[str]) -> int:
        if not isinstance(xml, str) or not xml:
            return 0
        for open_tag, close_tag in tag_pairs:
            value = extract_xml_value(xml, open_tag, close_tag)
            if value and value.isdigit():
                parsed = int(value)
                if parsed > 0:
                    return parsed
        match = svr_regex.search(xml)
        if not match:
            return 0
        parsed = int(match.group(1))
        return parsed if parsed > 0 else 0

    refer_section = extract_xml_value(content, "<refermsg>", "</refermsg>")
    if not refer_section:
        match = refer_regex.search(content)
        if match:
            refer_section = match.group(1)

    if not refer_section:
        decoded_content = decode_basic_xml_entities(content)
        if decoded_content and decoded_content != content:
            refer_section = extract_xml_value(decoded_content, "<refermsg>", "</refermsg>")
            if not refer_section:
                match = refer_regex.search(decoded_content)
                if match:
                    refer_section = match.group(1)

    if not refer_section:
        return 0

    value = extract_server_id_from_xml(refer_section)
    if value > 0:
        return value

    decoded_refer = decode_basic_xml_entities(refer_section)
    if decoded_refer and decoded_refer != refer_section:
        return extract_server_id_from_xml(decoded_refer)
    return 0


def run_test(name: str, fn) -> bool:
    try:
        fn()
    except Exception as exc:  # pragma: no cover - CLI surface
        print(f"{name}: FAIL ({exc})", file=sys.stderr)
        return False
    print(f"{name}: OK")
    return True


def test_pure_helper_shared_contracts() -> None:
    assert_contract_group("trim_text", lambda case: trim_text(case.get("input")))
    assert_contract_group("sanitize_identifier_array", lambda case: sanitize_identifier_array(case.get("input")))
    assert_contract_group("sanitize_ignore_dictionary", lambda case: sanitize_ignore_dictionary(case.get("input")))
    assert_contract_group("sanitize_reply_text", lambda case: sanitize_reply_text(case.get("input")))
    assert_contract_group(
        "query_value_for_key_in_url",
        lambda case: query_value_for_key(case.get("key"), case.get("url")),
    )
    assert_contract_group("decode_basic_xml_entities", lambda case: decode_basic_xml_entities(case.get("input")))
    assert_contract_group(
        "extract_xml_value",
        lambda case: extract_xml_value(case.get("xml"), case.get("open_tag", ""), case.get("close_tag", "")),
    )
    assert_contract_group("extract_quote_title_from_xml", lambda case: extract_quote_title_from_xml(case.get("input")))
    assert_contract_group("is_chatroom_name", lambda case: is_chatroom_name(case.get("input")))
    assert_contract_group(
        "normalize_mention_candidate",
        lambda case: normalize_mention_candidate(case.get("input")),
    )
    assert_contract_group(
        "extract_mention_candidate_from_xml",
        lambda case: extract_mention_candidate_from_xml(case.get("input")),
    )
    assert_contract_group(
        "extract_mention_candidate_from_group_content_prefix",
        lambda case: extract_mention_candidate_from_group_content_prefix(case.get("input")),
    )
    assert_contract_group(
        "extract_voice_attr_uint",
        lambda case: extract_voice_attr_uint(case.get("xml"), case.get("attr_name")),
    )
    assert_contract_group(
        "build_minimal_voice_content",
        lambda case: build_minimal_voice_content(case.get("voice_length_ms"), case.get("voice_format")),
    )
    assert_contract_group(
        "quote_refer_server_id_from_content",
        lambda case: quote_refer_server_id_from_content(case.get("input")),
    )
    assert_contract_group(
        "build_red_envelop_params",
        lambda case: build_red_envelop_params(case.get("input")),
    )
    assert_contract_group(
        "resolve_red_envelop_group_scope",
        lambda case: resolve_red_envelop_group_scope(case.get("scope"), case.get("allowed_groups")),
    )
    assert_contract_group(
        "normalize_red_envelop_notify_target",
        lambda case: normalize_red_envelop_notify_target(case.get("input")),
    )
    assert_contract_group(
        "resolve_quit_monitor_scope",
        lambda case: resolve_quit_monitor_scope(case.get("scope"), case.get("whitelist_info")),
    )
    assert_contract_group(
        "sanitize_inline_text",
        lambda case: sanitize_inline_text(case.get("input"), int(case.get("max_len", 0))),
    )
    assert_contract_group(
        "extract_revoker_name_from_replace_text",
        lambda case: extract_revoker_name_from_replace_text(case.get("input")),
    )
    assert_contract_group(
        "extract_revoked_content_from_replace_text",
        lambda case: extract_revoked_content_from_replace_text(case.get("input")),
    )
    assert_contract_group(
        "is_sysmsg_template_content",
        lambda case: is_sysmsg_template_content(case.get("input")),
    )
    assert_contract_group(
        "plain_text_from_sysmsg_template_content",
        lambda case: plain_text_from_sysmsg_template_content(case.get("input")),
    )
    assert_contract_group(
        "alert_tip_display_text_from_content",
        lambda case: alert_tip_display_text_from_content(case.get("input")),
    )
    assert_contract_group(
        "should_tint_alert_tip_display_text",
        lambda case: should_tint_alert_tip_display_text(case.get("input")),
    )


def test_sanitize_ignore_dictionary() -> None:
    raw = {
        "  ": True,
        " alice ": True,
        "bob": 0,
        123: True,
        "carol": "1",
        "dave": "false",
        "erin": "YES",
    }
    expected = {"alice": True, "carol": True, "erin": True}
    assert_true(sanitize_ignore_dictionary(raw) == expected, "ignore dictionary sanitize mismatch")


def test_red_envelop_param_to_params_extracts_sender_and_total() -> None:
    case = pure_helper_contract_case("build_red_envelop_params", "full_fields_and_query_extraction")
    input_fields = case["input"]
    param = WeChatRedEnvelopParam(
        msgType=input_fields.get("msgType"),
        sendId=input_fields.get("sendId"),
        channelId=input_fields.get("channelId"),
        nickName=input_fields.get("nickName"),
        headImg=input_fields.get("headImg"),
        nativeUrl=input_fields.get("nativeUrl"),
        sessionUserName=input_fields.get("sessionUserName"),
        timingIdentifier=input_fields.get("timingIdentifier"),
        sign=input_fields.get("sign"),
    )
    params = red_envelop_param_to_params(param)
    assert_true(params == case["expected"], "red envelop param mapping mismatch")


def test_param_queue_match_by_trimmed_sendid_and_sign_fifo() -> None:
    queue = WCPLRedEnvelopParamQueue()
    first = WeChatRedEnvelopParam(sendId=" send_123 ", sign=" sign_x ")
    second = WeChatRedEnvelopParam(sendId="send_123", sign="sign_y")
    queue.enqueue(first)
    queue.enqueue(second)

    matched = queue.dequeue_matching_sign(None, "send_123")
    assert_true(matched is first, "queue should match first indexed sendId")
    assert_true(queue.peek() is second, "queue should retain next element")

    matched2 = queue.dequeue_matching_sign(" sign_y ", None)
    assert_true(matched2 is second, "queue should match trimmed sign")
    assert_true(queue.is_empty(), "queue should be empty after both dequeues")


def test_generate_client_msg_id_format_and_fallback() -> None:
    explicit = generate_client_msg_id("  alice  ", now=1700000000, random_value=7)
    fallback = generate_client_msg_id(None, now=1700000001, random_value=8)

    assert_true(explicit == "alice_1700000000_7", "explicit sender client msg id mismatch")
    assert_true(fallback == "wcpl_1700000001_8", "fallback sender client msg id mismatch")

    pattern = re.compile(r"^[A-Za-z0-9_]+_[0-9]{9,10}_[0-9]+$")
    assert_true(pattern.match(explicit) is not None, "explicit sender client msg id format mismatch")
    assert_true(pattern.match(fallback) is not None, "fallback sender client msg id format mismatch")

TESTS = [
    test_pure_helper_shared_contracts,
    test_sanitize_ignore_dictionary,
    test_red_envelop_param_to_params_extracts_sender_and_total,
    test_param_queue_match_by_trimmed_sendid_and_sign_fifo,
    test_generate_client_msg_id_format_and_fallback,
]


def main() -> int:
    failed = 0
    for test in TESTS:
        failed += 0 if run_test(test.__name__, test) else 1

    if failed == 0:
        print("ALL TESTS PASSED")
        return 0

    print(f"{failed} TEST(S) FAILED", file=sys.stderr)
    return 1


if __name__ == "__main__":
    raise SystemExit(main())
