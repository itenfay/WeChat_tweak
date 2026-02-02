//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class NSString;

@protocol WCFinderMsgSessionMgrExt

@optional
- (void)onFinderPrivateMsgContactExtInfoUpdatedWithSessionId:(NSString *)arg1;
- (void)onFinderMsgSessionStatusUpdatedWithSessionId:(NSString *)arg1;
- (void)onFinderMsgAuthorSessionOwnerChanged;
- (void)onFinderMsgAliasSessionOwnerChanged;
- (void)onFinderMsgSessionUpdated;
@end

