#import "WCPLRevokeMessageLookupAdapter.h"

#import "WCPLAlertTextHelpers.h"
#import "WCPLLogger.h"
#import "WCPLPureHelpers.h"
#import "WCPLWeChatMessageHeaders.h"

static NSString *wcpl_revokeLookupTrim(NSString *text) {
    return WCPLTrimText(text);
}

static BOOL wcpl_revokeLookupIsMessageWrap(id obj) {
    return obj &&
           [obj respondsToSelector:@selector(m_uiCreateTime)] &&
           [obj respondsToSelector:@selector(m_uiMesLocalID)] &&
           [obj respondsToSelector:@selector(m_uiMessageType)] &&
           [obj respondsToSelector:@selector(m_nsContent)];
}

static NSArray<NSString *> *wcpl_revokeLookupNormalizedSessions(NSArray<NSString *> *sessionCandidates) {
    if (![sessionCandidates isKindOfClass:[NSArray class]] || sessionCandidates.count == 0) {
        return @[];
    }

    NSMutableArray<NSString *> *normalized = [NSMutableArray arrayWithCapacity:sessionCandidates.count];
    NSMutableSet<NSString *> *seen = [NSMutableSet setWithCapacity:sessionCandidates.count];
    for (id candidate in sessionCandidates) {
        NSString *session = wcpl_revokeLookupTrim(candidate);
        if (session.length == 0 || [seen containsObject:session]) continue;
        [normalized addObject:session];
        [seen addObject:session];
    }
    return normalized.copy;
}

static NSString *wcpl_revokeLookupExtractBetween(NSString *text, NSString *startToken, NSString *endToken) {
    if (![text isKindOfClass:[NSString class]] || text.length == 0) return nil;

    NSRange startRange = [text rangeOfString:startToken];
    if (startRange.location == NSNotFound) return nil;

    NSUInteger searchStart = NSMaxRange(startRange);
    if (searchStart >= text.length) return nil;

    NSRange endRange = [text rangeOfString:endToken options:0 range:NSMakeRange(searchStart, text.length - searchStart)];
    if (endRange.location == NSNotFound || endRange.location < searchStart) return nil;

    NSRange valueRange = NSMakeRange(searchStart, endRange.location - searchStart);
    return wcpl_revokeLookupTrim([text substringWithRange:valueRange]);
}

static NSString *wcpl_revokeLookupXMLValue(NSString *xml, NSString *tagName) {
    if (![xml isKindOfClass:[NSString class]] || xml.length == 0) return nil;
    if (![tagName isKindOfClass:[NSString class]] || tagName.length == 0) return nil;

    NSString *startToken = [NSString stringWithFormat:@"<%@>", tagName];
    NSString *endToken = [NSString stringWithFormat:@"</%@>", tagName];
    return WCPLExtractXMLValue(xml, startToken, endToken);
}

static NSString *wcpl_revokeLookupStripCDATA(NSString *text) {
    NSString *cdata = wcpl_revokeLookupExtractBetween(text, @"<![CDATA[", @"]]>");
    return cdata ?: wcpl_revokeLookupTrim(text);
}

static NSString *wcpl_revokeLookupDigest(CMessageWrap *msgWrap) {
    if (!wcpl_revokeLookupIsMessageWrap(msgWrap)) return nil;

    switch (msgWrap.m_uiMessageType) {
        case 1:
            return WCPLSanitizeInlineText(msgWrap.m_nsContent, 180);
        case 3:
            return @"[图片]";
        case 34:
            return @"[语音]";
        case 43:
            return @"[视频]";
        case 47:
            return @"[表情]";
        case 49: {
            NSString *content = wcpl_revokeLookupTrim(msgWrap.m_nsContent);
            if (content.length == 0) return @"[应用消息]";

            NSString *header = content;
            NSRange referRange = [content rangeOfString:@"<refermsg" options:NSCaseInsensitiveSearch];
            if (referRange.location != NSNotFound && referRange.location > 0) {
                header = [content substringToIndex:referRange.location];
            }

            NSString *title = WCPLSanitizeInlineText(wcpl_revokeLookupStripCDATA(wcpl_revokeLookupXMLValue(header, @"title")), 180);
            if (title.length > 0) return title;

            NSString *des = WCPLSanitizeInlineText(wcpl_revokeLookupStripCDATA(wcpl_revokeLookupXMLValue(header, @"des")), 180);
            if (des.length > 0) return des;
            return @"[应用消息]";
        }
        default:
            return [NSString stringWithFormat:@"[类型:%u]", msgWrap.m_uiMessageType];
    }
}

static NSString *wcpl_revokeLookupSenderUserName(CMessageWrap *msgWrap, NSString *session) {
    if (!wcpl_revokeLookupIsMessageWrap(msgWrap)) return nil;

    NSString *sender = nil;
    if (WCPLIsChatRoomName(session)) {
        sender = wcpl_revokeLookupTrim(msgWrap.m_nsRealChatUsr);
    }
    if (sender.length == 0) {
        sender = wcpl_revokeLookupTrim(msgWrap.m_nsFromUsr);
    }
    return sender;
}

static NSString *wcpl_revokeLookupNormalizedHint(NSString *hint) {
    NSString *normalized = WCPLSanitizeInlineText(hint, 180);
    if (normalized.length == 0) return nil;
    if ([normalized rangeOfString:@"未知消息"].location != NSNotFound ||
        [normalized rangeOfString:@"[未知"].location != NSNotFound ||
        [normalized rangeOfString:@"[类型:"].location != NSNotFound) {
        return nil;
    }
    return normalized;
}

static BOOL wcpl_revokeLookupWrapMatches(CMessageWrap *candidate,
                                         NSString *session,
                                         NSString *actorUserName,
                                         NSString *contentHint) {
    if (!wcpl_revokeLookupIsMessageWrap(candidate)) return NO;
    if (candidate.m_uiMessageType == 0x2710) return NO;

    BOOL checkedAnyHint = NO;
    NSString *trimmedActor = wcpl_revokeLookupTrim(actorUserName);
    if (trimmedActor.length > 0) {
        checkedAnyHint = YES;
        NSString *sender = wcpl_revokeLookupSenderUserName(candidate, session);
        if (![sender isEqualToString:trimmedActor]) {
            return NO;
        }
    }

    NSString *normalizedHint = wcpl_revokeLookupNormalizedHint(contentHint);
    if (normalizedHint.length > 0) {
        checkedAnyHint = YES;
        NSString *candidateDigest = wcpl_revokeLookupDigest(candidate);
        if (![candidateDigest isEqualToString:normalizedHint]) {
            return NO;
        }
    }

    return checkedAnyHint;
}

static CMessageWrap *wcpl_revokeLookupByServerID(id messageMgr,
                                                 NSArray<NSString *> *sessionCandidates,
                                                 long long revokedMsgId,
                                                 NSString *actorUserName,
                                                 NSString *contentHint) {
    if (revokedMsgId <= 0 || ![messageMgr respondsToSelector:@selector(GetMsg:n64SvrID:)]) {
        return nil;
    }

    BOOL hasHints = (wcpl_revokeLookupTrim(actorUserName).length > 0 ||
                     wcpl_revokeLookupNormalizedHint(contentHint).length > 0);
    for (NSString *session in sessionCandidates) {
        @try {
            id msg = [messageMgr GetMsg:session n64SvrID:revokedMsgId];
            if (!wcpl_revokeLookupIsMessageWrap(msg)) continue;

            CMessageWrap *candidate = (CMessageWrap *)msg;
            if (!hasHints || wcpl_revokeLookupWrapMatches(candidate, session, actorUserName, contentHint)) {
                return candidate;
            }

            WCPLLogInfo(@"[防撤回] svrID 命中但未通过校验，继续近邻回查: session=%@ local=%u svr=%lld",
                        session,
                        candidate.m_uiMesLocalID,
                        revokedMsgId);
        } @catch (NSException *exception) {
            WCPLLogWarning(@"[防撤回] 按 svrID 查原消息失败: session=%@ svr=%lld reason=%@",
                           session,
                           revokedMsgId,
                           exception.reason ?: exception);
        }
    }
    return nil;
}

static CMessageWrap *wcpl_revokeLookupNewestWrap(CMessageWrap *currentBest, CMessageWrap *candidate) {
    if (!wcpl_revokeLookupIsMessageWrap(candidate)) return currentBest;
    if (!wcpl_revokeLookupIsMessageWrap(currentBest)) return candidate;

    if (candidate.m_uiCreateTime != currentBest.m_uiCreateTime) {
        return candidate.m_uiCreateTime > currentBest.m_uiCreateTime ? candidate : currentBest;
    }
    if (candidate.m_sequenceId != currentBest.m_sequenceId) {
        return candidate.m_sequenceId > currentBest.m_sequenceId ? candidate : currentBest;
    }
    return candidate.m_uiMesLocalID > currentBest.m_uiMesLocalID ? candidate : currentBest;
}

static CMessageWrap *wcpl_revokeLookupByRecentMessages(id messageMgr,
                                                       NSArray<NSString *> *sessionCandidates,
                                                       unsigned int revokeCreateTime,
                                                       NSString *actorUserName,
                                                       NSString *contentHint) {
    NSString *normalizedHint = wcpl_revokeLookupNormalizedHint(contentHint);
    if (revokeCreateTime == 0 || normalizedHint.length == 0) return nil;
    if (![messageMgr respondsToSelector:@selector(getMsg:beforeCreateTime:limit:)]) return nil;

    for (NSString *session in sessionCandidates) {
        NSArray *messages = nil;
        @try {
            messages = [messageMgr getMsg:session beforeCreateTime:revokeCreateTime limit:30];
        } @catch (NSException *exception) {
            WCPLLogWarning(@"[防撤回] 近邻回查失败: session=%@ reason=%@", session, exception.reason ?: exception);
            continue;
        }
        if (![messages isKindOfClass:[NSArray class]] || messages.count == 0) continue;

        CMessageWrap *bestMatch = nil;
        for (id item in messages) {
            if (!wcpl_revokeLookupWrapMatches(item, session, actorUserName, normalizedHint)) continue;
            bestMatch = wcpl_revokeLookupNewestWrap(bestMatch, (CMessageWrap *)item);
        }
        if (!bestMatch) continue;

        WCPLLogInfo(@"[防撤回] 近邻回查命中原消息: session=%@ local=%u create=%u seq=%u hint=%@",
                    session,
                    bestMatch.m_uiMesLocalID,
                    bestMatch.m_uiCreateTime,
                    bestMatch.m_sequenceId,
                    normalizedHint);
        return bestMatch;
    }
    return nil;
}

CMessageWrap *WCPLFindRevokedMessageWrap(id messageMgr,
                                         NSArray<NSString *> *sessionCandidates,
                                         long long revokedMsgId,
                                         unsigned int revokeCreateTime,
                                         NSString *actorUserName,
                                         NSString *revokedContentHint) {
    NSArray<NSString *> *normalizedSessions = wcpl_revokeLookupNormalizedSessions(sessionCandidates);
    if (!messageMgr || normalizedSessions.count == 0) return nil;

    CMessageWrap *msgWrap = wcpl_revokeLookupByServerID(messageMgr,
                                                        normalizedSessions,
                                                        revokedMsgId,
                                                        actorUserName,
                                                        revokedContentHint);
    if (msgWrap) return msgWrap;

    return wcpl_revokeLookupByRecentMessages(messageMgr,
                                             normalizedSessions,
                                             revokeCreateTime,
                                             actorUserName,
                                             revokedContentHint);
}
