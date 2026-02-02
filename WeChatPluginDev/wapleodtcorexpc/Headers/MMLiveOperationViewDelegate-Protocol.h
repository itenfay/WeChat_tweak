//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol MMLiveOperationViewDelegate <NSObject>

@optional
- (void)onMMLiveOperationKTVSongButtonClicked;
- (void)onMMLiveOperationSwitchAudioRoomMode;
- (void)onMMLiveOperationFollow:(NSDictionary *)arg1;
- (void)onMMLiveOperationInviteFriendsBtnClicked;
- (double)getControllerVisibleHeight;
- (void)onMMLiveGloryTipsHeadImageClicked;
- (void)onMMLiveGlorySelfHeadImageClicked;
- (void)onMMLiveOperationUserHeadImageClicked:(NSString *)arg1 userInfo:(NSDictionary *)arg2;
- (void)onMMLiveOperationComplain;
- (_Bool)onMMLiveOperationIsShareScreenBlocked;
- (void)onMMLiveOperationShareScreen;
- (void)onMMLiveOperationConnectSwitchCamera;
- (void)onMMLiveOperationConnectMic;
- (void)onMMLiveActionButtonClicked;
- (void)onMMLiveOrientationButtonClicked;
- (void)onMMLiveOperationClose;
@end

