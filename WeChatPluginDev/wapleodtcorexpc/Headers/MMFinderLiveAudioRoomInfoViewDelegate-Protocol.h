//
// ClassDump By HuangBai Private
//  Copyright (C) 1997-2019 Steve Nygard. Updated HuangBai-2024 
//

#import "NSObject-Protocol.h"

@class MMFinderLiveConnectMicSeatInfo, MMFinderLiveConnectMicUser, UIView;

@protocol MMFinderLiveAudioRoomInfoViewDelegate <NSObject>

@optional
- (void)onMMFinderLiveAudioRoomInfoViewUnmuteMicWithUserInfo:(MMFinderLiveConnectMicUser *)arg1;
- (void)onMMFinderLiveAudioRoomInfoViewTappedWithUserInfo:(MMFinderLiveConnectMicUser *)arg1 micSeatInfo:(MMFinderLiveConnectMicSeatInfo *)arg2 targetView:(UIView *)arg3;
@end

