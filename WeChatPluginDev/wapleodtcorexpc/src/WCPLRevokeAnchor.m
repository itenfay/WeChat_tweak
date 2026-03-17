//
// WCPLRevokeAnchor.m
//

#import "WCPLRevokeAnchor.h"

#import "WCPLAlertTextHelpers.h"
#import "WCPLPureHelpers.h"

static NSString *wcpl_revokeDedupSuffix(NSString *replaceText) {
    NSString *trimmed = WCPLTrimText(replaceText);
    if (trimmed.length == 0) {
        return @"";
    }

    NSString *singleLine = WCPLSanitizeInlineText(trimmed, 0) ?: @"";
    if (singleLine.length > 64) {
        return [singleLine substringToIndex:64];
    }
    return singleLine;
}

WCPLRevokeAnchorFields WCPLResolveRevokeAnchorFields(unsigned int revokeCreateTime,
                                                     unsigned int revokeSvrCreateTime,
                                                     unsigned int revokeSequenceId,
                                                     unsigned int revokedCreateTime,
                                                     unsigned int revokedSvrCreateTime,
                                                     unsigned int revokedSequenceId,
                                                     BOOL hasRevokedMessage,
                                                     WCPLRevokeAnchorSource *sourceOut) {
    WCPLRevokeAnchorFields fields = {
        .createTime = revokeCreateTime,
        .svrCreateTime = (revokeSvrCreateTime > 0 ? revokeSvrCreateTime : revokeCreateTime),
        .sequenceId = revokeSequenceId,
    };
    WCPLRevokeAnchorSource source = WCPLRevokeAnchorSourceRevokeEvent;

    if (hasRevokedMessage) {
        source = WCPLRevokeAnchorSourceRevokedMessage;
        if (revokedCreateTime > 0) {
            fields.createTime = revokedCreateTime;
        }
        if (revokedSvrCreateTime > 0) {
            fields.svrCreateTime = revokedSvrCreateTime;
        } else if (revokedCreateTime > 0) {
            fields.svrCreateTime = revokedCreateTime;
        }
        if (revokedSequenceId > 0) {
            fields.sequenceId = revokedSequenceId;
        }
    }

    if (sourceOut) {
        *sourceOut = source;
    }
    return fields;
}

NSString *WCPLRevokeAnchorSourceDescription(WCPLRevokeAnchorSource source) {
    switch (source) {
        case WCPLRevokeAnchorSourceRevokedMessage:
            return @"revoked_msg";
        case WCPLRevokeAnchorSourceRevokeEvent:
        default:
            return @"revoke_event";
    }
}

NSString *WCPLBuildRevokeDedupKey(NSString *session,
                                  long long revokedMsgId,
                                  unsigned int revokeCreateTime,
                                  NSString *replaceText) {
    NSString *trimmedSession = WCPLTrimText(session);
    if (trimmedSession.length == 0) {
        return nil;
    }

    if (revokedMsgId > 0) {
        return [NSString stringWithFormat:@"%@#svr:%lld", trimmedSession, revokedMsgId];
    }

    NSString *suffix = wcpl_revokeDedupSuffix(replaceText);
    if (revokeCreateTime == 0 && suffix.length == 0) {
        return nil;
    }

    return [NSString stringWithFormat:@"%@#ts:%u#text:%@", trimmedSession, revokeCreateTime, suffix];
}
