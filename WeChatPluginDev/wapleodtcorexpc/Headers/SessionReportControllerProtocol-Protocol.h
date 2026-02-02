//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class CContact, CMessageWrap;

@protocol SessionReportControllerProtocol <NSObject>
@property(nonatomic) unsigned long long fromScene;
- (void)onLeaveSession;
- (void)onClickUnreadTip;
- (void)onShowUnreadTip;
- (void)onSessionDidScroll;
- (void)onSessionAddMsg:(CMessageWrap *)arg1;
- (void)onSessionWillDisplayMsg:(CMessageWrap *)arg1;
- (id)initWithChatContact:(CContact *)arg1 unreadMsgCount:(unsigned int)arg2 lastMsg:(CMessageWrap *)arg3;
@end

