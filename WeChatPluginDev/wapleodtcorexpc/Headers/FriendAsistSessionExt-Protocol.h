//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

@class CMessageWrap, NSArray, NSString;

@protocol FriendAsistSessionExt

@optional
- (void)onFriendAssistStatusChange:(NSString *)arg1;
- (void)onFriendAssistRelpyMsg:(CMessageWrap *)arg1;
- (void)onFriendAssistAddMsg:(NSArray *)arg1;
- (void)onFriendAssistClearMsg:(NSString *)arg1;
- (void)onFriendAssistUnreadCountChanged;
@end

