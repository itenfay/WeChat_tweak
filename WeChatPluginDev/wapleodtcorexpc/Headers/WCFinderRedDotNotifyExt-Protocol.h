//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol WCFinderRedDotNotifyExt <NSObject>

@optional
- (void)onFinderNotifyUnreadSystemCountUpdate:(_Bool)arg1 finderUsername:(NSString *)arg2;
- (void)onFinderNotifyPrivateMsgTipsChange;
- (void)onFinderNotifyFinderRedDotStatusChange;
- (void)onFinderNotifyWechatUnreadMentionCountNeedReload;
- (void)onFinderNotifyMemberUnreadMentionCountNeedReloadWithUsername:(NSString *)arg1;
- (void)onFinderNotifyMemberUnreadMentionCountNeedReload;
- (void)onFinderNotifyUnreadMentionCountNeedReloadWithUsername:(NSString *)arg1;
- (void)onFinderNotifyUnreadMentionCountNeedReload;
- (void)onFinderNotifyFansCountNeedReload;
- (void)onFinderNotifyFollowCountNeedReload;
- (void)onFinderNotifyTimelineShouldShowRedDot;
@end

