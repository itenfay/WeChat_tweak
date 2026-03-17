//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol MMLiveOnlineStateViewDelegate <NSObject>

@optional
- (void)onMMLiveSelectGiftButtonClicked;
- (void)onMMLiveIntroductionBtnClicked;
- (void)onMMLiveSingBtnClicked;
- (void)onMMLiveInviteFriendsBtnClicked;
- (void)onMMLiveUpdateOnlineUserCount:(unsigned long long)arg1;
- (void)onMMLiveOnlineGloryTipsSelected;
- (void)onMMLiveOnlineGlorySelfSelected;
- (void)onMMLiveOnlineUserSelected:(NSString *)arg1 userInfo:(NSDictionary *)arg2;
@end

