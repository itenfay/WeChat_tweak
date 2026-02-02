//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveAudioRoomMicUserBaseView, MMFinderLiveConnectMicSeatInfo, MMFinderLiveConnectMicUser, NSString, UIImage, UIView;

@protocol MMFinderLiveAudioRoomMicUserViewDelegate <NSObject>

@optional
- (void)onMMFinderLiveAudioRoomMicUserViewTappedMicMutedButtonWithUserInfo:(MMFinderLiveConnectMicUser *)arg1;
- (void)onMMFinderLiveAudioRoomMicUserViewLoadAvatarImageFinished:(MMFinderLiveAudioRoomMicUserBaseView *)arg1 image:(UIImage *)arg2 urlString:(NSString *)arg3;
- (void)onMMFinderLiveAudioRoomMicUserViewTappedWithUserInfo:(MMFinderLiveConnectMicUser *)arg1 micSeatInfo:(MMFinderLiveConnectMicSeatInfo *)arg2 targetView:(UIView *)arg3;
@end

