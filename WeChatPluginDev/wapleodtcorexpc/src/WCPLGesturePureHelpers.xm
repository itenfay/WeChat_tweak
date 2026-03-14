// Internal include-only module.
// Stitched into src/WCPLGestureHook.xm by scripts/generate_wcpl_gesture_hook.sh.
// Do not add this file to $(TWEAK_NAME)_FILES directly.

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>
#import "WCPLWeChatMessageHeaders.h"
#import "WCPLConfigCenter.h"
#import "WCPLContactAdapter.h"
#import "WCHookSwipeUtilities.h"
#import "WCHookMessageNavigator.h"
#import "WCPLMessageActionAdapter.h"
#import "WCPLMessageAdapter.h"
#import "WCPLRepeatCellAdapter.h"
#import "WCPLServiceCenter.h"
#import "WCPLServiceCenterAdapter.h"
#import "WCPLCrashReporter.h"
#import "WCPLDispatchUtils.h"
#import "WCPLLogger.h"
#import "WCPLPureHelpers.h"
#import "WCPLRepeatButtonEngine.h"
#import "WCPLRepeatButtonAssetManager.h"
#import <objc/runtime.h>
#import <objc/message.h>
#include <stdint.h>
#include <math.h>

static BOOL wcpl_instanceMethodExists(id object, SEL selector) {
    if (!object || !selector) {
        return NO;
    }
    Class cls = object_getClass(object);
    if (!cls) {
        return NO;
    }
    return class_getInstanceMethod(cls, selector) != NULL;
}

static NSString *wcpl_swipeDirectionName(WCHookSwipeDirection direction) {
    switch (direction) {
        case WCHookSwipeDirectionLeft:
            return @"left";
        case WCHookSwipeDirectionRight:
            return @"right";
        default:
            return @"none";
    }
}

static NSString *wcpl_swipeStateName(UIGestureRecognizerState state) {
    switch (state) {
        case UIGestureRecognizerStatePossible:
            return @"possible";
        case UIGestureRecognizerStateBegan:
            return @"began";
        case UIGestureRecognizerStateChanged:
            return @"changed";
        case UIGestureRecognizerStateEnded:
            return @"ended";
        case UIGestureRecognizerStateCancelled:
            return @"cancelled";
        case UIGestureRecognizerStateFailed:
            return @"failed";
        default:
            return @"unknown";
    }
}

static NSString *wcpl_decodeBasicXMLEntities(NSString *text) {
    return WCPLDecodeBasicXMLEntities(text);
}

static NSInteger wcpl_normalizeSwipeActionValueLegacyAware(NSInteger action, BOOL isSelfAction) {
    if (action < 0) {
        return 0;
    }

    if (action == 3 && !isSelfAction) {
        return 0;
    }

    if (action > 5) {
        return 0;
    }

    return action;
}

static NSString *wcpl_trimTextForRepeat(NSString *text) {
    return WCPLTrimText(text);
}

static NSString *wcpl_extractXMLValue(NSString *xml, NSString *openTag, NSString *closeTag) {
    return WCPLExtractXMLValue(xml, openTag, closeTag);
}

static NSString *wcpl_extractQuoteTitleFromXML(NSString *xml) {
    return WCPLExtractQuoteTitleFromXML(xml);
}

static BOOL wcpl_isChatRoomName(NSString *name) {
    return WCPLIsChatRoomName(name);
}

static NSString *wcpl_normalizeMentionCandidate(NSString *candidate) {
    return WCPLNormalizeMentionCandidate(candidate);
}

static NSString *wcpl_extractMentionCandidateFromXML(NSString *xmlText) {
    return WCPLExtractMentionCandidateFromXML(xmlText);
}

static NSString *wcpl_extractMentionCandidateFromGroupContentPrefix(NSString *content) {
    return WCPLExtractMentionCandidateFromGroupContentPrefix(content);
}

static BOOL wcpl_sceneTagLooksLikeOtherMedia(NSString *sceneTag) {
    if (![sceneTag isKindOfClass:[NSString class]] || sceneTag.length == 0) {
        return NO;
    }
    return ([sceneTag rangeOfString:@"other" options:NSCaseInsensitiveSearch].location != NSNotFound);
}

static BOOL wcpl_sceneTagLooksLikeVideoOther(NSString *sceneTag) {
    if (![sceneTag isKindOfClass:[NSString class]] || sceneTag.length == 0) {
        return NO;
    }
    BOOL containsVideo = ([sceneTag rangeOfString:@"video" options:NSCaseInsensitiveSearch].location != NSNotFound);
    BOOL containsOther = ([sceneTag rangeOfString:@"other" options:NSCaseInsensitiveSearch].location != NSNotFound);
    return containsVideo && containsOther;
}

static BOOL wcpl_sceneTagLooksLikeAnyVideo(NSString *sceneTag) {
    if (![sceneTag isKindOfClass:[NSString class]] || sceneTag.length == 0) {
        return NO;
    }
    return ([sceneTag rangeOfString:@"video" options:NSCaseInsensitiveSearch].location != NSNotFound);
}

static NSString *wcpl_quoteMentionUserNameForMessage(CMessageWrap *msgWrap,
                                                     NSString *chatName,
                                                     NSString *selfUserName) {
    if (!msgWrap) {
        return nil;
    }

    NSString *selfName = wcpl_trimTextForRepeat(selfUserName);

    BOOL isGroupChat = wcpl_isChatRoomName(chatName) ||
                       wcpl_isChatRoomName(msgWrap.m_nsFromUsr) ||
                       wcpl_isChatRoomName(msgWrap.m_nsToUsr);

    if (!isGroupChat) {
        return nil;
    }

    NSMutableArray<NSString *> *candidates = [NSMutableArray arrayWithCapacity:6];

    NSString *realChatUsr = wcpl_normalizeMentionCandidate(msgWrap.m_nsRealChatUsr);
    if (realChatUsr.length > 0) {
        [candidates addObject:realChatUsr];
    }

    NSString *fromUsr = wcpl_normalizeMentionCandidate(msgWrap.m_nsFromUsr);
    if (fromUsr.length > 0) {
        [candidates addObject:fromUsr];
    }

    NSString *msgSourceCandidate = wcpl_extractMentionCandidateFromXML(msgWrap.m_nsMsgSource);
    if (msgSourceCandidate.length > 0) {
        [candidates addObject:msgSourceCandidate];
    }

    NSString *contentPrefixCandidate = wcpl_extractMentionCandidateFromGroupContentPrefix(msgWrap.m_nsContent);
    if (contentPrefixCandidate.length > 0) {
        [candidates addObject:contentPrefixCandidate];
    }

    NSString *contentXMLCandidate = wcpl_extractMentionCandidateFromXML(msgWrap.m_nsContent);
    if (contentXMLCandidate.length > 0) {
        [candidates addObject:contentXMLCandidate];
    }

    for (NSString *candidate in candidates) {
        if (candidate.length == 0) {
            continue;
        }
        if (selfName.length > 0 && [candidate isEqualToString:selfName]) {
            continue;
        }
        return candidate;
    }

    return nil;
}

static unsigned int wcpl_extractVoiceAttrUInt(NSString *xml, NSString *attrName) {
    return WCPLExtractVoiceAttrUInt(xml, attrName);
}

static NSString *wcpl_buildMinimalVoiceContent(unsigned int voiceLengthMs, unsigned int voiceFormat) {
    return WCPLBuildMinimalVoiceContent(voiceLengthMs, voiceFormat);
}

static long long wcpl_quoteReferServerIDFromContent(NSString *content) {
    return WCPLQuoteReferServerIDFromContent(content);
}
