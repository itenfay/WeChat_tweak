//
// WCPLPureHelpers.h
//
// Foundation-only pure helpers shared across runtime code and host-side tests.
// Keep this module free of UIKit / WeChat runtime dependencies.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT NSString * _Nullable WCPLTrimText(id _Nullable text);
FOUNDATION_EXPORT NSArray<NSString *> *WCPLSanitizeIdentifierArray(id _Nullable value);
FOUNDATION_EXPORT NSString * _Nullable WCPLQueryValueForKeyInURL(NSString * _Nullable key,
                                                                NSString * _Nullable urlString);

FOUNDATION_EXPORT NSString * _Nullable WCPLDecodeBasicXMLEntities(NSString * _Nullable text);
FOUNDATION_EXPORT NSString * _Nullable WCPLExtractXMLValue(NSString * _Nullable xml,
                                                          NSString *openTag,
                                                          NSString *closeTag);
FOUNDATION_EXPORT NSString * _Nullable WCPLExtractQuoteTitleFromXML(NSString * _Nullable xml);
FOUNDATION_EXPORT BOOL WCPLIsChatRoomName(NSString * _Nullable name);
FOUNDATION_EXPORT BOOL WCPLQuitMonitorIsDateLikeText(NSString * _Nullable text);
FOUNDATION_EXPORT BOOL WCPLQuitMonitorIsLowSignalSystemText(NSString * _Nullable text);
FOUNDATION_EXPORT BOOL WCPLQuitMonitorLooksLikeQuitSystemText(NSString * _Nullable content);
FOUNDATION_EXPORT NSString * _Nullable WCPLQuitMonitorSelectBestSystemTextFromCandidates(id _Nullable candidates);
FOUNDATION_EXPORT NSArray<NSNumber *> *WCPLQuitMonitorPendingRetryScheduleSeconds(void);
FOUNDATION_EXPORT NSString * _Nullable WCPLNormalizeMentionCandidate(NSString * _Nullable candidate);
FOUNDATION_EXPORT NSString * _Nullable WCPLExtractMentionCandidateFromXML(NSString * _Nullable xmlText);
FOUNDATION_EXPORT NSString * _Nullable WCPLExtractMentionCandidateFromGroupContentPrefix(NSString * _Nullable content);
FOUNDATION_EXPORT unsigned int WCPLExtractVoiceAttrUInt(NSString * _Nullable xml,
                                                        NSString * _Nullable attrName);
FOUNDATION_EXPORT NSString *WCPLBuildMinimalVoiceContent(unsigned int voiceLengthMs,
                                                        unsigned int voiceFormat);
FOUNDATION_EXPORT long long WCPLQuoteReferServerIDFromContent(NSString * _Nullable content);
FOUNDATION_EXPORT NSString *WCPLGenerateClientMsgID(NSString * _Nullable senderUserName);

NS_ASSUME_NONNULL_END
