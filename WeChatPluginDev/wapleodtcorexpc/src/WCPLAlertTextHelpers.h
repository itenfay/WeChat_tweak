//
// WCPLAlertTextHelpers.h
//
// Foundation-only helpers for alert-tip text parsing and formatting.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT NSString * _Nullable WCPLSanitizeInlineText(NSString * _Nullable text, NSUInteger maxLen);
FOUNDATION_EXPORT NSString * _Nullable WCPLExtractRevokerNameFromReplaceText(NSString * _Nullable replaceText);
FOUNDATION_EXPORT NSString * _Nullable WCPLExtractRevokedContentFromReplaceText(NSString * _Nullable replaceText);
FOUNDATION_EXPORT BOOL WCPLIsRevokeTipDisplayText(NSString * _Nullable content);
FOUNDATION_EXPORT BOOL WCPLIsQuitMonitorTipDisplayText(NSString * _Nullable content);
FOUNDATION_EXPORT BOOL WCPLShouldTintAlertTipDisplayText(NSString * _Nullable content);
FOUNDATION_EXPORT BOOL WCPLIsSysMsgTemplateContent(NSString * _Nullable content);
FOUNDATION_EXPORT NSString * _Nullable WCPLPlainTextFromSysMsgTemplateContent(NSString * _Nullable content);
FOUNDATION_EXPORT NSString * _Nullable WCPLAlertTipDisplayTextFromContent(NSString * _Nullable content);

NS_ASSUME_NONNULL_END
