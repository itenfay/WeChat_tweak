//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class QuickReplyMsgNotifyView;

@protocol QuickReplyMsgNotifyViewDelegate <NSObject>
- (void)onNotifyViewNotifyPushClose:(QuickReplyMsgNotifyView *)arg1;
- (void)onNotifyViewTemporaryClose:(QuickReplyMsgNotifyView *)arg1;
- (void)onNotifyViewShowMoreSetting:(QuickReplyMsgNotifyView *)arg1 isShow:(_Bool)arg2;
- (void)onNotifyViewShowSettingBtn:(QuickReplyMsgNotifyView *)arg1;
- (void)onNotifyViewJumpToSetting:(QuickReplyMsgNotifyView *)arg1;
- (void)onNotifyViewJumpToChat:(QuickReplyMsgNotifyView *)arg1;
- (void)onNotifyViewEndDraging;
- (void)onNotifyViewBeginDraging;
- (void)onNotifyViewReadMsg:(QuickReplyMsgNotifyView *)arg1;
- (void)onNotifyViewDismissSelf;
@end

