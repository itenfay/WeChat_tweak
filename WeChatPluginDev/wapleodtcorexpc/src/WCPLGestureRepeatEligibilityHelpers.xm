// Internal include-only module.
// Stitched into src/WCPLGestureHook.xm by scripts/generate_wcpl_gesture_hook.sh.
// Do not add this file to $(TWEAK_NAME)_FILES directly.

#import "WCPLAppMessageHelpers.h"

static BOOL wcpl_isQuoteReplyAppMessage(CMessageWrap *msgWrap) {
    return WCPLIsQuoteReplyAppMessage(msgWrap);
}

static BOOL wcpl_isFileAppMessage(CMessageWrap *msgWrap) {
    return WCPLIsFileAppMessage(msgWrap);
}

static BOOL wcpl_isAppEmoticonMessage(CMessageWrap *msgWrap) {
    return WCPLIsAppEmoticonMessage(msgWrap);
}

static BOOL wcpl_isMergedForwardAppMessage(CMessageWrap *msgWrap) {
    return WCPLIsMergedForwardAppMessage(msgWrap);
}

static BOOL wcpl_isMediaBubbleRepeatMessage(CMessageWrap *msgWrap) {
    if (!msgWrap) {
        return NO;
    }
    if (msgWrap.m_uiMessageType == 3 ||
        msgWrap.m_uiMessageType == 43 ||
        msgWrap.m_uiMessageType == 47) {
        return YES;
    }
    if (msgWrap.m_uiMessageType == 49 && wcpl_isAppEmoticonMessage(msgWrap)) {
        return YES;
    }
    return NO;
}

static NSString *wcpl_repeatTextForMessageWrap(CMessageWrap *msgWrap) {
    if (!msgWrap) {
        return nil;
    }
    if (msgWrap.m_uiMessageType == 1) {
        return wcpl_trimTextForRepeat(msgWrap.m_nsContent);
    }
    if (msgWrap.m_uiMessageType == 3) {
        return @"[图片]";
    }
    if (msgWrap.m_uiMessageType == 34) {
        return @"[语音]";
    }
    if (msgWrap.m_uiMessageType == 43) {
        return @"[视频]";
    }
    if (msgWrap.m_uiMessageType == 47) {
        return @"[表情]";
    }
    if (msgWrap.m_uiMessageType == 49) {
        if (wcpl_isMergedForwardAppMessage(msgWrap)) {
            return nil;
        }
        // 引用文件消息的 refer 内容里可能包含 <type>6，需优先识别为引用。
        if (wcpl_isQuoteReplyAppMessage(msgWrap)) {
            NSString *quoteTitle = wcpl_extractQuoteTitleFromXML(msgWrap.m_nsContent);
            if (quoteTitle.length > 0) {
                return quoteTitle;
            }
            return @"[引用]";
        }
        if (wcpl_isFileAppMessage(msgWrap)) {
            return nil;
        }
        if (wcpl_isAppEmoticonMessage(msgWrap)) {
            return @"[表情]";
        }
        return nil;
    }
    return nil;
}

static NSString *wcpl_repeatTypeName(unsigned int msgType) {
    switch (msgType) {
        case 1: return @"文本";
        case 3: return @"图片";
        case 34: return @"语音";
        case 43: return @"视频";
        case 47: return @"表情";
        case 49: return @"引用";
        default: return [NSString stringWithFormat:@"未知(%u)", msgType];
    }
}

static BOOL wcpl_isRepeatTypeEnabledByConfig(WCPLGestureConfig *config, CMessageWrap *msgWrap) {
    if (!msgWrap || !config) {
        return NO;
    }

    switch (msgWrap.m_uiMessageType) {
        case 1:
            return YES;
        case 3:
            return config.repeatSupportImageEnable;
        case 34:
            return config.repeatSupportVoiceEnable;
        case 43:
            return config.repeatSupportVideoEnable;
        case 47:
            return config.repeatSupportEmoticonEnable;
        case 49: {
            if (wcpl_isMergedForwardAppMessage(msgWrap)) {
                return NO;
            }
            // 引用文件消息外层是引用(type=57)，仅 refer 内层可能出现文件(type=6)。
            // 先判引用，避免“引用文件”被误拦截为“文件消息”。
            if (wcpl_isQuoteReplyAppMessage(msgWrap)) {
                return YES;
            }
            if (wcpl_isFileAppMessage(msgWrap)) {
                return NO;
            }
            if (config.repeatSupportEmoticonEnable && wcpl_isAppEmoticonMessage(msgWrap)) {
                return YES;
            }
            return NO;
        }
        default:
            return NO;
    }
}
